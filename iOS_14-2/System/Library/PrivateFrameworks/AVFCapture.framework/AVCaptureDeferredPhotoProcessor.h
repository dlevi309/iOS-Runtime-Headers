/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@protocol OS_dispatch_queue;
#import <AVFCapture/AVFCapture-Structs.h>
@class NSString, NSObject, AVWeakReference, NSMutableArray, NSArray;

@interface AVCaptureDeferredPhotoProcessor : NSObject {

	NSString* _applicationID;
	NSObject*<OS_dispatch_queue> _fcdppQueue;
	OpaqueFigCaptureDeferredPhotoProcessorRef _fcdpp;
	AVWeakReference* _weakReference;
	OpaqueFigSimpleMutexRef _requestsLock;
	NSMutableArray* _requests;

}

@property (nonatomic,readonly) NSArray * persistentlyStoredDeferredPhotoProxies; 
+(void)initialize;
+(id)sharedPhotoProcessorForApplicationID:(id)arg1 ;
+(id)sharedPhotoProcessor;
-(BOOL)cancelProcessingForPhotoProxy:(id)arg1 error:(id*)arg2 ;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(NSArray *)persistentlyStoredDeferredPhotoProxies;
-(void)processPhotoProxy:(id)arg1 queuePosition:(id)arg2 delegate:(id)arg3 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)deletePersistentStorageForPhotoProxy:(id)arg1 ;
-(id)_initWithApplicationID:(id)arg1 ;
-(void)_setFigCaptureDeferredPhotoProcessor:(OpaqueFigCaptureDeferredPhotoProcessorRef)arg1 ;
-(int)_establishServerConnection;
-(void)_handleWillBeginProcessingPhotoProxyNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidFinishProcessingPhotoProxyNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleServerConnectionDiedNotification;
-(id)_processingRequestForCaptureRequestIdentifier:(id)arg1 photoIdentifier:(id)arg2 ;
-(void)_dispatchFailureCallbacks:(unsigned)arg1 forProcessingRequest:(id)arg2 error:(id)arg3 ;
-(BOOL)isPaused;
-(void)dealloc;
@end

