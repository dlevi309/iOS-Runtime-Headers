/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNStatefulRequestConfiguration.h>

@interface VNDetectTrajectoriesRequestConfiguration : VNStatefulRequestConfiguration {

	float _objectMinimumNormalizedRadius;
	float _objectMaximumNormalizedRadius;
	long long _trajectoryLength;

}

@property (assign,nonatomic) long long trajectoryLength;                       //@synthesize trajectoryLength=_trajectoryLength - In the implementation block
@property (assign,nonatomic) float objectMinimumNormalizedRadius;              //@synthesize objectMinimumNormalizedRadius=_objectMinimumNormalizedRadius - In the implementation block
@property (assign,nonatomic) float objectMaximumNormalizedRadius;              //@synthesize objectMaximumNormalizedRadius=_objectMaximumNormalizedRadius - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)trajectoryLength;
-(void)setTrajectoryLength:(long long)arg1 ;
-(float)objectMinimumNormalizedRadius;
-(void)setObjectMinimumNormalizedRadius:(float)arg1 ;
-(float)objectMaximumNormalizedRadius;
-(void)setObjectMaximumNormalizedRadius:(float)arg1 ;
@end

