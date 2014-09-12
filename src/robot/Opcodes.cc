#include "Opcodes.h"

OpcodeHandle const Opcodes::emptyHandler =
{
    &Robot::HandleNULL
};
    
Opcodes::Opcodes()
{}

Opcodes::~Opcodes()
{}


void Opcodes::BuildOpcodeList()
{
    StoreOpcode(GUEST_ACCOUNT, &Robot::HandlerGuestAccountOpcode);
    StoreOpcode(ALL_ZONE_LIST, &Robot::HandlerAllZoneListOpcode);
    StoreOpcode(ROLE_LIST,     &Robot::HandlerRoleListOpcode);
}
