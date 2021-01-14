/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSArray;

@interface VNImageBasedRequestConfiguration : VNRequestConfiguration {

	NSArray* _inputFaceObservations;
	CGRect _regionOfInterest;

}

@property (assign,nonatomic) CGRect regionOfInterest;                    //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
@property (nonatomic,copy) NSArray * inputFaceObservations;              //@synthesize inputFaceObservations=_inputFaceObservations - In the implementation block
-(CGRect)regionOfInterest;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setRegionOfInterest:(CGRect)arg1 ;
-(NSArray *)inputFaceObservations;
-(void)setInputFaceObservations:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

