/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
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
-(id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate>)delegate;
-(void)_handleCompletedWritingNotification;
-(void)_handleFailedNotificationWithError:(id)arg1 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
-(void)_handleServerDiedNotification;
-(void)setDelegate:(id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate>)arg1 ;
-(void)_teardownNotificationHandlers;
-(void)_callDelegateIfNotCalledWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)_weakReferenceToDelegate;
-(void)_setWeakReferenceToDelegate:(id)arg1 ;
-(void)dealloc;
@end

