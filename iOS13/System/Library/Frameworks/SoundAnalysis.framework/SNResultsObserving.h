/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNResultsObserving <NSObject>
@optional
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)requestDidComplete:(id)arg1;

@required
-(void)request:(id)arg1 didProduceResult:(id)arg2;

@end

