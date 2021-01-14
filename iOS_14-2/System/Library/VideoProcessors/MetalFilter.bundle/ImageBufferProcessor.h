/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/MetalFilter.bundle/MetalFilter
*/

@class NSDictionary;


@protocol ImageBufferProcessor <NSObject>
@property (nonatomic,retain) NSDictionary * tuningParameters; 
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType; 
@optional
-(int)prewarmWithTuningParameters:(id)arg1;

@required
-(int)process;
-(int)prewarm;
-(int)setup;
-(int)purgeResources;
-(NSDictionary *)cameraInfoByPortType;
-(void)setCameraInfoByPortType:(id)arg1;
-(NSDictionary *)tuningParameters;
-(int)resetState;
-(int)prepareToProcess:(unsigned)arg1;
-(void)setTuningParameters:(id)arg1;
-(int)finishProcessing;

@end

