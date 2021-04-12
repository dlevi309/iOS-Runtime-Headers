/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * _cnui_IDSIDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedContactPropertyKeys;
+(id)idsIDForPhoneNumber:(id)arg1 ;
+(id)idsIDForEmail:(id)arg1 ;
-(NSString *)idsID;
-(NSString *)description;
-(CNContactProperty *)contactProperty;
-(unsigned long long)hash;
-(NSString *)_cnui_IDSIDRepresentation;
-(id)initWithContactProperty:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

