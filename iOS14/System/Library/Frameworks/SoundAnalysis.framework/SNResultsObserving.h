/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNResultsObserving <NSObject>
@optional
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)requestDidComplete:(id)arg1;

@required
-(void)request:(id)arg1 didProduceResult:(id)arg2;

@end

