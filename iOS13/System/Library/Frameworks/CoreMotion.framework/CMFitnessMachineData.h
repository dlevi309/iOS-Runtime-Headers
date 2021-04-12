/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMFitnessMachineData : NSObject <NSSecureCoding, NSCopying> {

	double fTimestamp;
	double _elapsedTime;
	double _totalEnergy;
	double _totalDistance;
	double _totalElevationAscended;
	long long _totalStrideCount;
	long long _totalStrokeCount;
	long long _totalFloorsClimbed;
	double _instantaneousSpeed;
	double _instantaneousCadence;
	double _instantaneousPower;
	double _inclination;
	double _resistanceLevel;

}

@property (nonatomic,readonly) NSDate * timestamp; 
@property (assign,nonatomic) double elapsedTime;                         //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double totalEnergy;                         //@synthesize totalEnergy=_totalEnergy - In the implementation block
@property (assign,nonatomic) double totalDistance;                       //@synthesize totalDistance=_totalDistance - In the implementation block
@property (assign,nonatomic) double totalElevationAscended;              //@synthesize totalElevationAscended=_totalElevationAscended - In the implementation block
@property (assign,nonatomic) long long totalStrideCount;                 //@synthesize totalStrideCount=_totalStrideCount - In the implementation block
@property (assign,nonatomic) long long totalStrokeCount;                 //@synthesize totalStrokeCount=_totalStrokeCount - In the implementation block
@property (assign,nonatomic) long long totalFloorsClimbed;               //@synthesize totalFloorsClimbed=_totalFloorsClimbed - In the implementation block
@property (assign,nonatomic) double instantaneousSpeed;                  //@synthesize instantaneousSpeed=_instantaneousSpeed - In the implementation block
@property (assign,nonatomic) double instantaneousCadence;                //@synthesize instantaneousCadence=_instantaneousCadence - In the implementation block
@property (assign,nonatomic) double instantaneousPower;                  //@synthesize instantaneousPower=_instantaneousPower - In the implementation block
@property (assign,nonatomic) double inclination;                         //@synthesize inclination=_inclination - In the implementation block
@property (assign,nonatomic) double resistanceLevel;                     //@synthesize resistanceLevel=_resistanceLevel - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isAvailable;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(double)totalDistance;
-(void)setTotalDistance:(double)arg1 ;
-(double)elapsedTime;
-(id)initWithTimestamp:(id)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(void)setTotalEnergy:(double)arg1 ;
-(void)setTotalElevationAscended:(double)arg1 ;
-(void)setTotalStrideCount:(long long)arg1 ;
-(void)setTotalStrokeCount:(long long)arg1 ;
-(void)setTotalFloorsClimbed:(long long)arg1 ;
-(void)setInstantaneousSpeed:(double)arg1 ;
-(void)setInstantaneousCadence:(double)arg1 ;
-(void)setInstantaneousPower:(double)arg1 ;
-(void)setInclination:(double)arg1 ;
-(void)setResistanceLevel:(double)arg1 ;
-(void)convertToCLFitnessMachineData:(CLFitnessMachineData*)arg1 ;
-(double)totalEnergy;
-(double)totalElevationAscended;
-(long long)totalStrideCount;
-(long long)totalStrokeCount;
-(long long)totalFloorsClimbed;
-(double)instantaneousSpeed;
-(double)instantaneousCadence;
-(double)instantaneousPower;
-(double)inclination;
-(double)resistanceLevel;
@end

