/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(HMDUser *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isEqualToUser:(id)arg1 ;
-(BOOL)isExpired;
-(void)setRemovalInProgress:(BOOL)arg1 ;
-(id)initWithUser:(id)arg1 expiration:(id)arg2 ;
-(BOOL)isEqualToUserID:(id)arg1 ;
-(BOOL)isRemovalInProgress;
@end

