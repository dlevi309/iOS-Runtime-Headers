/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPSaliencyRegion : NSObject {

	float _confidence;
	CGRect _bound;

}

@property (assign) CGRect bound;                  //@synthesize bound=_bound - In the implementation block
@property (assign) float confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)salientRegionsFromPixelBuffer:(CVBufferRef)arg1 ;
+(void)attachSalientRegions:(id)arg1 toPixelBuffer:(CVBufferRef)arg2 ;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(CGRect)bound;
-(id)initWith:(CGRect)arg1 confidence:(float)arg2 ;
-(void)setBound:(CGRect)arg1 ;
@end

