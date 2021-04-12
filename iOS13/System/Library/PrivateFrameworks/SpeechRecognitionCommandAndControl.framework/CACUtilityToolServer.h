/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface CACUtilityToolServer : NSObject {

	NSObject*<OS_dispatch_queue> _toolServerDispatchQueue;
	NSObject*<OS_xpc_object> _feedbackListener;

}
+(id)sharedInstance;
-(id)init;
@end

