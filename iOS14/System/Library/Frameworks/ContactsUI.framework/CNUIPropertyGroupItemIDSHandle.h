/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNUIIDSHandle.h>

@class NSString, CNContactProperty, CNUIContactPropertyIDSHandle;

@interface CNUIPropertyGroupItemIDSHandle : NSObject <CNUIIDSHandle> {

	CNContactProperty* _contactProperty;
	CNUIContactPropertyIDSHandle* _contactPropertyHandle;

}

@property (nonatomic,readonly) CNUIContactPropertyIDSHandle * contactPropertyHandle;              //@synthesize contactPropertyHandle=_contactPropertyHandle - In the implementation block
@property (nonatomic,copy,readonly) CNContactProperty * contactProperty;                          //@synthesize contactProperty=_contactProperty - In the implementation block
@property (nonatomic,copy,readonly) NSString * _cnui_IDSIDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsPropertyGroupItem:(id)arg1 ;
-(NSString *)description;
-(CNContactProperty *)contactProperty;
-(unsigned long long)hash;
-(NSString *)_cnui_IDSIDRepresentation;
-(id)initWithPropertyGroupItem:(id)arg1 ;
-(CNUIContactPropertyIDSHandle *)contactPropertyHandle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

