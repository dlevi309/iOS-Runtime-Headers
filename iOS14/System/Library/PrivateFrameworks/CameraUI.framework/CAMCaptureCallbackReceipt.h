/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMCaptureCallbackReceipt : NSObject {

	long long _callback;
	double _secondsSinceBegin;

}

@property (nonatomic,readonly) long long callback;                    //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) double secondsSinceBegin;              //@synthesize secondsSinceBegin=_secondsSinceBegin - In the implementation block
-(long long)callback;
-(double)secondsSinceBegin;
-(id)initWithCallback:(long long)arg1 duration:(double)arg2 ;
@end

