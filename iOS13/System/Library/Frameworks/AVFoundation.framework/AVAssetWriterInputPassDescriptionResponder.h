/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputPassDescriptionResponder : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _stoppedResponding;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	BOOL _hasRespondedAtLeastOnce;
	AVAssetWriterInputPassDescription* _mostRecentPassDescription;
	/*^block*/id _callbackBlock;

}
-(id)init;
-(void)dealloc;
-(id)initWithCallbackQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)respondToNewPassDescription:(id)arg1 ;
-(void)stopRespondingToPassDescriptions;
-(BOOL)_hasStoppedResponding;
-(void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
@end

