/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMICameraVideoAnalyzerDelegate <NSObject>
@required
-(void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3;
-(void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3;
-(void)analyzer:(id)arg1 didFindSignificantEvent:(id)arg2 inFragment:(id)arg3;
-(void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3;

@end

