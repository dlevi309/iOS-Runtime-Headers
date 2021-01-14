/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AVTArchiverBasedDomain : NSObject <NSSecureCoding> {

	NSString* _domainIdentifier;
	NSString* _primaryAvatarIdentifier;

}

@property (nonatomic,copy,readonly) NSString * domainIdentifier;                     //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryAvatarIdentifier;              //@synthesize primaryAvatarIdentifier=_primaryAvatarIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)domainIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDomainIdentifier:(id)arg1 primaryAvatarIdentifier:(id)arg2 ;
-(NSString *)primaryAvatarIdentifier;
-(id)domainBySettingPrimaryAvatarIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

