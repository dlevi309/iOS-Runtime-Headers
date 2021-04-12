/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
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
+(id)sharedPhotoProcessor;
+(id)sharedPhotoProcessorForApplicationID:(id)arg1 ;
-(void)dealloc;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(void)_handleServerConnectionDiedNotification;
-(id)_initWithApplicationID:(id)arg1 ;
-(void)_setFigCaptureDeferredPhotoProcessor:(OpaqueFigCaptureDeferredPhotoProcessorRef)arg1 ;
-(int)_establishServerConnection;
-(void)_handleWillBeginProcessingPhotoProxyNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidFinishProcessingPhotoProxyNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(id)_processingRequestForCaptureRequestIdentifier:(id)arg1 photoIdentifier:(id)arg2 ;
-(void)_dispatchFailureCallbacks:(unsigned)arg1 forProcessingRequest:(id)arg2 error:(id)arg3 ;
-(NSArray *)persistentlyStoredDeferredPhotoProxies;
-(void)processPhotoProxy:(id)arg1 queuePosition:(id)arg2 delegate:(id)arg3 ;
-(BOOL)cancelProcessingForPhotoProxy:(id)arg1 error:(id*)arg2 ;
-(void)deletePersistentStorageForPhotoProxy:(id)arg1 ;
@end

