/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SPMacBeaconConfig : NSObject <NSCopying, NSSecureCoding> {

	double _initialNoBeaconDuration;
	double _fastRollAdvertisementDuration;
	double _fastRollAdvertisementInterval;
	double _slowRollAdvertisementDuration;
	double _slowRollNoAdvertisementDuration;
	double _noAdvertisementDurationDecayFactor;
	NSArray* _postInitialDayAdvertisementTimes;

}

@property (assign,nonatomic) double initialNoBeaconDuration;                         //@synthesize initialNoBeaconDuration=_initialNoBeaconDuration - In the implementation block
@property (assign,nonatomic) double fastRollAdvertisementDuration;                   //@synthesize fastRollAdvertisementDuration=_fastRollAdvertisementDuration - In the implementation block
@property (assign,nonatomic) double fastRollAdvertisementInterval;                   //@synthesize fastRollAdvertisementInterval=_fastRollAdvertisementInterval - In the implementation block
@property (assign,nonatomic) double slowRollAdvertisementDuration;                   //@synthesize slowRollAdvertisementDuration=_slowRollAdvertisementDuration - In the implementation block
@property (assign,nonatomic) double slowRollNoAdvertisementDuration;                 //@synthesize slowRollNoAdvertisementDuration=_slowRollNoAdvertisementDuration - In the implementation block
@property (assign,nonatomic) double noAdvertisementDurationDecayFactor;              //@synthesize noAdvertisementDurationDecayFactor=_noAdvertisementDurationDecayFactor - In the implementation block
@property (nonatomic,copy) NSArray * postInitialDayAdvertisementTimes;               //@synthesize postInitialDayAdvertisementTimes=_postInitialDayAdvertisementTimes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(double)slowRollAdvertisementDuration;
-(double)slowRollNoAdvertisementDuration;
-(double)noAdvertisementDurationDecayFactor;
-(double)initialNoBeaconDuration;
-(double)fastRollAdvertisementDuration;
-(double)fastRollAdvertisementInterval;
-(void)persistToPrefs;
-(id)initWithInitialNoBeaconDuration:(double)arg1 fastRollAdvertisementDuration:(double)arg2 fastRollAdvertisementInterval:(double)arg3 slowRollAdvertisementDuration:(double)arg4 slowRollNoAdvertisementDuration:(double)arg5 noAdvertisementDurationDecayFactor:(double)arg6 postInitialDayAdvertisementTimes:(id)arg7 ;
-(id)initFromPrefs;
-(void)setInitialNoBeaconDuration:(double)arg1 ;
-(void)setFastRollAdvertisementDuration:(double)arg1 ;
-(void)setFastRollAdvertisementInterval:(double)arg1 ;
-(void)setSlowRollAdvertisementDuration:(double)arg1 ;
-(void)setSlowRollNoAdvertisementDuration:(double)arg1 ;
-(void)setNoAdvertisementDurationDecayFactor:(double)arg1 ;
-(NSArray *)postInitialDayAdvertisementTimes;
-(void)setPostInitialDayAdvertisementTimes:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

