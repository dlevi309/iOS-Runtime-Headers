/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class NSMutableDictionary;

@interface BWInferenceSchedulerResourceCoordinator : NSObject {

	NSMutableDictionary* _requestedPoolSizeByFormat;
	NSMutableDictionary* _pixelBufferPoolByFormat;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(int)requestPixelBufferPoolForRequirement:(id)arg1 size:(unsigned long long)arg2 ;
-(void)preparePixelBufferPools;
-(id)pixelBufferPoolForFormat:(id)arg1 ;
-(int)requestPixelBufferPoolForFormat:(id)arg1 size:(unsigned long long)arg2 ;
-(id)formatsWithRequestedPoolsRemainingAfterSubtractingFormats:(id)arg1 ;
@end

