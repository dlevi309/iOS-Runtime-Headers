/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SPUnauthorizedTrackingAdvertisement, NSArray, NSDate;

@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding> {

	SPUnauthorizedTrackingAdvertisement* _trackingIdentifier;
	NSArray* _observedLocations;
	NSDate* _observedAt;

}

@property (nonatomic,retain) SPUnauthorizedTrackingAdvertisement * trackingIdentifier;              //@synthesize trackingIdentifier=_trackingIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * observedLocations;                                             //@synthesize observedLocations=_observedLocations - In the implementation block
@property (nonatomic,copy) NSDate * observedAt;                                                     //@synthesize observedAt=_observedAt - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTrackingIdentifier:(SPUnauthorizedTrackingAdvertisement *)arg1 ;
-(void)setObservedLocations:(NSArray *)arg1 ;
-(void)setObservedAt:(NSDate *)arg1 ;
-(SPUnauthorizedTrackingAdvertisement *)trackingIdentifier;
-(NSArray *)observedLocations;
-(NSDate *)observedAt;
-(id)initWithCurrentAdvertisementAndLocationHistory:(id)arg1 observedLocations:(id)arg2 ;
@end

