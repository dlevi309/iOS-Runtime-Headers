/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol SampleBufferProcessor <NSObject>
@optional
-(int)setValue:(id)arg1 forProperty:(id)arg2;
-(int)copyValue:(void*)arg1 forProperty:(id)arg2;

@required
-(id)initWithOptions:(id)arg1;
-(int)processSampleBuffer:(opaqueCMSampleBufferRef)arg1;
-(void)purgeResources;
-(id)debugDescription;
-(void)resetState;
-(int)processSequence;
-(void)onOutput:(/*^block*/id)arg1;
-(void)finishPendingProcessing;

@end

