/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIAnalyticsTouchesSession : NSObject {

	BOOL _touchesDetected;
	BOOL _multitouchDetected;
	BOOL _allowedGestureRecognizerHasBegun;
	unsigned long long _touchesStartTime;
	BOOL _valid;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(id)init;
-(BOOL)isValid;
-(void)processEvent:(id)arg1 ;
@end

