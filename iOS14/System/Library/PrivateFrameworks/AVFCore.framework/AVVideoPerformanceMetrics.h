/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVVideoPerformanceMetricsInternal;

@interface AVVideoPerformanceMetrics : NSObject {

	AVVideoPerformanceMetricsInternal* _performanceMetricsInternal;

}

@property (nonatomic,readonly) unsigned long long totalNumberOfVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfDroppedVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfCorruptedVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfDisplayCompositedVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfNonDisplayCompositedVideoFrames; 
@property (nonatomic,readonly) double totalFrameDelay; 
-(id)init;
-(double)totalFrameDelay;
-(unsigned long long)totalNumberOfVideoFrames;
-(unsigned long long)numberOfCorruptedVideoFrames;
-(unsigned long long)numberOfDisplayCompositedVideoFrames;
-(unsigned long long)numberOfNonDisplayCompositedVideoFrames;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)numberOfDroppedVideoFrames;
-(void)dealloc;
@end

