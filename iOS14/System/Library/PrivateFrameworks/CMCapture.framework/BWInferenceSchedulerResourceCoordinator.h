/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSMutableDictionary;

@interface BWInferenceSchedulerResourceCoordinator : NSObject {

	NSMutableDictionary* _requestedPoolSizeByFormat;
	NSMutableDictionary* _pixelBufferPoolByFormat;

}
+(void)initialize;
-(id)init;
-(int)requestPixelBufferPoolForFormat:(id)arg1 size:(unsigned long long)arg2 ;
-(int)requestPixelBufferPoolForRequirement:(id)arg1 size:(unsigned long long)arg2 ;
-(void)preparePixelBufferPools;
-(id)pixelBufferPoolForFormat:(id)arg1 ;
-(id)formatsWithRequestedPoolsRemainingAfterSubtractingFormats:(id)arg1 ;
-(void)dealloc;
@end

