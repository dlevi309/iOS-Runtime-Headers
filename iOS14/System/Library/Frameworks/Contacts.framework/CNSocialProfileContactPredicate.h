/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPredicate.h>

@class CNSocialProfile;

@interface CNSocialProfileContactPredicate : CNPredicate {

	CNSocialProfile* _socialProfile;

}

@property (nonatomic,copy,readonly) CNSocialProfile * socialProfile;              //@synthesize socialProfile=_socialProfile - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CNSocialProfile *)socialProfile;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSocialProfile:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

