/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNDetectHumanHandPoseRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _maximumHandCount;

}

@property (assign) unsigned long long maximumHandCount;              //@synthesize maximumHandCount=_maximumHandCount - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)maximumHandCount;
-(void)setMaximumHandCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

