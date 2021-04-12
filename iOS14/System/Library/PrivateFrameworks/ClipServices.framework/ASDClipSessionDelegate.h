/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@protocol ASDClipSessionDelegate <NSObject>
@optional
-(void)clipSessionDidInstallPlaceholder:(id)arg1;

@required
-(void)clipSessionDidCompleteSuccessfully:(id)arg1;
-(void)clipSession:(id)arg1 didFailWithError:(id)arg2;
-(void)clipSession:(id)arg1 didUpdateProgress:(double)arg2;

@end

