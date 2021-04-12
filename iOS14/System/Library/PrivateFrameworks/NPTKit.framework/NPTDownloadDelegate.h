/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
*/


@protocol NPTDownloadDelegate <NSObject>
@required
-(void)downloadWillStart;
-(void)download:(id)arg1 didReceiveSpeedMetric:(id)arg2;
-(void)download:(id)arg1 didFinishWithResults:(id)arg2;
-(void)download:(id)arg1 didFinishWithError:(id)arg2;

@end

