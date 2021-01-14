/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _canCreateContacts;
	BOOL _canDeleteContacts;
	BOOL _canCreateGroups;

}

@property (nonatomic,readonly) BOOL canCreateContacts;              //@synthesize canCreateContacts=_canCreateContacts - In the implementation block
@property (nonatomic,readonly) BOOL canDeleteContacts;              //@synthesize canDeleteContacts=_canDeleteContacts - In the implementation block
@property (nonatomic,readonly) BOOL canCreateGroups;                //@synthesize canCreateGroups=_canCreateGroups - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)canCreateGroups;
-(BOOL)canDeleteContacts;
-(id)initWithCanCreateContacts:(BOOL)arg1 canDeleteContacts:(BOOL)arg2 canCreateGroups:(BOOL)arg3 ;
-(BOOL)canCreateContacts;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

