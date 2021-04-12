/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)processEvent:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
@end

