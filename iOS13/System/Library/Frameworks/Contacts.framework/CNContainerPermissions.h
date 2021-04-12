/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCanCreateContacts:(BOOL)arg1 canDeleteContacts:(BOOL)arg2 canCreateGroups:(BOOL)arg3 ;
-(BOOL)canCreateContacts;
-(BOOL)canDeleteContacts;
-(BOOL)canCreateGroups;
@end

