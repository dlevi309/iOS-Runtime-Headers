/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/CNUIIDSHandle.h>

@class NSString, CNContactProperty;

@interface CNUIContactPropertyIDSHandle : NSObject <CNUIIDSHandle> {

	CNContactProperty* _contactProperty;
	NSString* _idsID;

}

@property (nonatomic,copy,readonly) NSString * idsID;                                  //@synthesize idsID=_idsID - In the implementation block
@property (nonatomic,copy,readonly) CNContactProperty * contactProperty;               //@synthesize contactProperty=_contactProperty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * _cnui_IDSIDRepresentation; 
+(id)supportedContactPropertyKeys;
+(id)idsIDForPhoneNumber:(id)arg1 ;
+(id)idsIDForEmail:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContactProperty:(id)arg1 ;
-(CNContactProperty *)contactProperty;
-(NSString *)_cnui_IDSIDRepresentation;
-(NSString *)idsID;
@end

