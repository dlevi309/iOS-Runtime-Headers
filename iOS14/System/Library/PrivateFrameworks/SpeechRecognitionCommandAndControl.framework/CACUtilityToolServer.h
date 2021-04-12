/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

