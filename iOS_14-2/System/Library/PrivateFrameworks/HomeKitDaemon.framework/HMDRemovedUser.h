/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDUser, NSDate;

@interface HMDRemovedUser : HMFObject <NSSecureCoding> {

	BOOL _removalInProgress;
	HMDUser* _user;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) HMDUser * user;                              //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                     //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isRemovalInProgress) BOOL removalInProgress;              //@synthesize removalInProgress=_removalInProgress - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)removedUserWithUser:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToUser:(id)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(HMDUser *)user;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToUserID:(id)arg1 ;
-(void)setRemovalInProgress:(BOOL)arg1 ;
-(id)initWithUser:(id)arg1 expiration:(id)arg2 ;
-(BOOL)isRemovalInProgress;
@end

