/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * _cnui_IDSIDRepresentation; 
+(BOOL)supportsPropertyGroupItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CNContactProperty *)contactProperty;
-(NSString *)_cnui_IDSIDRepresentation;
-(id)initWithPropertyGroupItem:(id)arg1 ;
-(CNUIContactPropertyIDSHandle *)contactPropertyHandle;
@end

