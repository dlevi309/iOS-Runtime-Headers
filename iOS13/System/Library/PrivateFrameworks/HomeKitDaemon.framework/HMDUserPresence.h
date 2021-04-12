/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDUser, HMDUserPresenceRegion, NSDate;

@interface HMDUserPresence : HMFObject <NSSecureCoding> {

	HMDUser* _user;
	HMDUserPresenceRegion* _presenceRegionStatus;
	NSDate* _updateTimestamp;

}

@property (nonatomic,readonly) HMDUser * user;                                          //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) HMDUserPresenceRegion * presenceRegionStatus;              //@synthesize presenceRegionStatus=_presenceRegionStatus - In the implementation block
@property (nonatomic,readonly) NSDate * updateTimestamp;                                //@synthesize updateTimestamp=_updateTimestamp - In the implementation block
@property (getter=isAtHome,nonatomic,readonly) BOOL atHome; 
@property (getter=isNotAtHome,nonatomic,readonly) BOOL notAtHome; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(HMDUser *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDUserPresenceRegion *)presenceRegionStatus;
-(NSDate *)updateTimestamp;
-(void)setPresenceRegionStatus:(HMDUserPresenceRegion *)arg1 ;
-(id)initWithUser:(id)arg1 presenceRegionStatus:(id)arg2 ;
-(BOOL)isAtHome;
-(BOOL)isNotAtHome;
@end

