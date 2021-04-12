/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setTrackingIdentifier:(SPUnauthorizedTrackingAdvertisement *)arg1 ;
-(void)setObservedLocations:(NSArray *)arg1 ;
-(void)setObservedAt:(NSDate *)arg1 ;
-(SPUnauthorizedTrackingAdvertisement *)trackingIdentifier;
-(NSArray *)observedLocations;
-(NSDate *)observedAt;
-(id)initWithCurrentAdvertisementAndLocationHistory:(id)arg1 observedLocations:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

