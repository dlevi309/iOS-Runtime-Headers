/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNAnalyzing <SNProcessing>
@property (nonatomic,readonly) Box* resultsBox; 
@optional
-(void)primeGraph;

@required
-(Box*)resultsBox;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2;
-(id)sharedProcessorConfiguration;

@end

