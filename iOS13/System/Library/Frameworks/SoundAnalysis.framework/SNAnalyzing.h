/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNAnalyzing <SNProcessing>
@property (nonatomic,readonly) Box* resultsBox; 
@optional
-(void)primeGraph;

@required
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;

@end

