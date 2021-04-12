/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference;

@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject {

	OpaqueFigAssetWriterRef _figAssetWriter;
	int _didNotCallDelegate;
	AVWeakReference* _weakReferenceToSelf;
	AVWeakReference* _weakReferenceToDelegate;
	int _notificationHandlersAreRegistered;

}

@property (setter=_setWeakReferenceToDelegate:,getter=_weakReferenceToDelegate,retain) AVWeakReference * weakReferenceToDelegate;              //@synthesize weakReferenceToDelegate=_weakReferenceToDelegate - In the implementation block
@property (__weak) id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate> delegate; 
-(void)dealloc;
-(id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate>)delegate;
-(void)setDelegate:(id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate>)arg1 ;
-(void)_handleServerDiedNotification;
-(id)_weakReferenceToDelegate;
-(void)_setWeakReferenceToDelegate:(id)arg1 ;
-(void)_teardownNotificationHandlers;
-(void)_callDelegateIfNotCalledWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
-(void)_handleCompletedWritingNotification;
-(void)_handleFailedNotificationWithError:(id)arg1 ;
@end

