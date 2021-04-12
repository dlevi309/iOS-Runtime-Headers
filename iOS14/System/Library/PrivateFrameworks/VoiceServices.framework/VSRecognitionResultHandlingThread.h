/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDelegate:(id)arg1 ;
-(void)invalidate;
-(void)handleResults:(id)arg1 withHandler:(id)arg2 ;
-(void)_handleRequests;
-(void)_notifyRequestHandled:(id)arg1 ;
-(void)dealloc;
@end

