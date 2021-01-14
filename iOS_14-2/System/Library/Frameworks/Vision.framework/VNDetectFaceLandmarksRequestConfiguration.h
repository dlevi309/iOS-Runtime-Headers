/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber;

@interface VNDetectFaceLandmarksRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _refineMouthRegion;
	BOOL _refineLeftEyeRegion;
	BOOL _refineRightEyeRegion;
	BOOL _performBlinkDetection;
	NSNumber* _cascadeStepCount;
	unsigned long long _constellation;

}

@property (assign,nonatomic) BOOL refineMouthRegion;                        //@synthesize refineMouthRegion=_refineMouthRegion - In the implementation block
@property (assign,nonatomic) BOOL refineLeftEyeRegion;                      //@synthesize refineLeftEyeRegion=_refineLeftEyeRegion - In the implementation block
@property (assign,nonatomic) BOOL refineRightEyeRegion;                     //@synthesize refineRightEyeRegion=_refineRightEyeRegion - In the implementation block
@property (assign,nonatomic) BOOL performBlinkDetection;                    //@synthesize performBlinkDetection=_performBlinkDetection - In the implementation block
@property (nonatomic,retain) NSNumber * cascadeStepCount;                   //@synthesize cascadeStepCount=_cascadeStepCount - In the implementation block
@property (assign,nonatomic) unsigned long long constellation;              //@synthesize constellation=_constellation - In the implementation block
+(BOOL)revision:(unsigned long long)arg1 supportsConstellation:(unsigned long long)arg2 ;
-(void)setConstellation:(unsigned long long)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)constellation;
-(BOOL)refineMouthRegion;
-(void)setRefineMouthRegion:(BOOL)arg1 ;
-(BOOL)refineLeftEyeRegion;
-(void)setRefineLeftEyeRegion:(BOOL)arg1 ;
-(BOOL)refineRightEyeRegion;
-(void)setRefineRightEyeRegion:(BOOL)arg1 ;
-(BOOL)performBlinkDetection;
-(void)setPerformBlinkDetection:(BOOL)arg1 ;
-(NSNumber *)cascadeStepCount;
-(void)setCascadeStepCount:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

