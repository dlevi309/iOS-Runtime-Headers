/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)numberOfDisplayCompositedVideoFrames;
-(unsigned long long)totalNumberOfVideoFrames;
-(unsigned long long)numberOfDroppedVideoFrames;
-(unsigned long long)numberOfCorruptedVideoFrames;
-(double)totalFrameDelay;
-(unsigned long long)numberOfNonDisplayCompositedVideoFrames;
@end

