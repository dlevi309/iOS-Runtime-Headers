/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VUIStillWatchingAlertPresenter : NSObject {

	double _timeoutInterval;

}

@property (assign,nonatomic) double timeoutInterval;              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
+(void)presentWithTitle:(id)arg1 presentingController:(id)arg2 timeout:(double)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
@end

