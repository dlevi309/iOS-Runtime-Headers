/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SPAdvertisement, SPEstimatedLocation;

@interface SPBeaconPayload : NSObject <NSSecureCoding> {

	SPAdvertisement* _advertisement;
	SPEstimatedLocation* _location;
	long long _observationValue;

}

@property (nonatomic,retain) SPAdvertisement * advertisement;              //@synthesize advertisement=_advertisement - In the implementation block
@property (nonatomic,copy) SPEstimatedLocation * location;                 //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long observationValue;                   //@synthesize observationValue=_observationValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(SPEstimatedLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocation:(SPEstimatedLocation *)arg1 ;
-(id)description;
-(SPAdvertisement *)advertisement;
-(void)setAdvertisement:(SPAdvertisement *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)observationValue;
-(void)setObservationValue:(long long)arg1 ;
-(id)initWithAdvertisement:(id)arg1 location:(id)arg2 ;
@end

