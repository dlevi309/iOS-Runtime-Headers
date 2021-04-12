/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@protocol VSRecognitionResultHandlingThreadDelegate;
#import <VoiceServices/VoiceServices-Structs.h>
@class NSMutableArray, NSConditionLock;

@interface VSRecognitionResultHandlingThread : NSObject {

	id<VSRecognitionResultHandlingThreadDelegate> _delegate;
	NSMutableArray* _requests;
	NSConditionLock* _lock;
	struct {
		unsigned running : 1;
		unsigned delegateDidHandleResults : 1;
		unsigned valid : 1;
	}  _resultHandlingFlags;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setDelegate:(id)arg1 ;
-(void)handleResults:(id)arg1 withHandler:(id)arg2 ;
-(void)_handleRequests;
-(void)_notifyRequestHandled:(id)arg1 ;
@end

