/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol PRSharingSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didChangeProximitySensorState:(unsigned long long)arg2;

@required
-(void)session:(id)arg1 didEstimateScores:(id)arg2;
-(void)session:(id)arg1 didFailwithError:(id)arg2;

@end

