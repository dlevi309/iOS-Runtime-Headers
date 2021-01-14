/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIKeyboardTypingSpeedLogger : NSObject {

	long long _typingDelaySamples[7];
	long long _typingDelaySampleCount;

}
-(id)init;
-(void)logToAggregate;
-(void)recordTypingDelay:(double)arg1 ;
@end

