/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
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
-(id)initWithCallbackQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)respondToNewPassDescription:(id)arg1 ;
-(void)stopRespondingToPassDescriptions;
-(BOOL)_hasStoppedResponding;
-(void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
-(void)dealloc;
@end

