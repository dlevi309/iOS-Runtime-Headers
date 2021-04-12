/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/_DUIClientSource.h>
#import <libobjc.A.dylib/_DUIClientSessionSource.h>
#import <UIKitCore/_UIDruidSourceConnection.h>

@protocol _UIDruidSourceConnection <NSObject>
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,copy) id dragPreviewProviderBlock; 
@property (nonatomic,copy) id canHandOffCancelledItemsBlock; 
@property (nonatomic,copy) id handOffCancelledItemsBlock; 
@property (nonatomic,copy) id dragCompletionBlock; 
@property (nonatomic,copy) id dataTransferFinishedBlock; 
@required
-(BOOL)isCancelled;
-(void)cancelDrag;
-(void)beginDragWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setDragPreviewProviderBlock:(/*^block*/id)arg1;
-(void)setCanHandOffCancelledItemsBlock:(/*^block*/id)arg1;
-(void)setHandOffCancelledItemsBlock:(/*^block*/id)arg1;
-(void)setDragCompletionBlock:(/*^block*/id)arg1;
-(void)setDataTransferFinishedBlock:(/*^block*/id)arg1;
-(void)takeInsideAppSourceOperationMask:(unsigned long long)arg1 outsideAppSourceOperationMask:(unsigned long long)arg2 prefersFullSizePreview:(BOOL)arg3;
-(void)dirtyItems:(id)arg1;
-(void)dragDidExitApp;
-(id)addItems:(id)arg1 withOldItemCollection:(id)arg2;
-(id)dragPreviewProviderBlock;
-(id)canHandOffCancelledItemsBlock;
-(id)handOffCancelledItemsBlock;
-(id)dragCompletionBlock;
-(id)dataTransferFinishedBlock;

@end


@protocol OS_dispatch_source, _DUIServerSessionSource;
@class NSXPCConnection, NSObject, NSString;

@interface _UIDruidSourceConnection : NSObject <_DUIClientSource, _DUIClientSessionSource, _UIDruidSourceConnection> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _connectionWatchdogTimer;
	id<_DUIServerSessionSource> _serverSession;
	BOOL _cancelled;
	/*^block*/id _dragPreviewProviderBlock;
	/*^block*/id _canHandOffCancelledItemsBlock;
	/*^block*/id _handOffCancelledItemsBlock;
	/*^block*/id _dragCompletionBlock;
	/*^block*/id _dataTransferFinishedBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,copy) id dragPreviewProviderBlock;                        //@synthesize dragPreviewProviderBlock=_dragPreviewProviderBlock - In the implementation block
@property (nonatomic,copy) id canHandOffCancelledItemsBlock;                   //@synthesize canHandOffCancelledItemsBlock=_canHandOffCancelledItemsBlock - In the implementation block
@property (nonatomic,copy) id handOffCancelledItemsBlock;                      //@synthesize handOffCancelledItemsBlock=_handOffCancelledItemsBlock - In the implementation block
@property (nonatomic,copy) id dragCompletionBlock;                             //@synthesize dragCompletionBlock=_dragCompletionBlock - In the implementation block
@property (nonatomic,copy) id dataTransferFinishedBlock;                       //@synthesize dataTransferFinishedBlock=_dataTransferFinishedBlock - In the implementation block
-(id)init;
-(BOOL)isCancelled;
-(void)cancelDrag;
-(oneway void)requestDragPreviewsForIndexSet:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)checkCanHandOffCancelledItemsWithReply:(/*^block*/id)arg1 ;
-(oneway void)handOffCancelledItems:(id)arg1 withFence:(id)arg2 ;
-(oneway void)dragEndedWithOperation:(unsigned long long)arg1 ;
-(oneway void)dragFailed;
-(oneway void)dataTransferSessionFinished;
-(void)beginDragWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDragPreviewProviderBlock:(id)arg1 ;
-(void)setCanHandOffCancelledItemsBlock:(id)arg1 ;
-(void)setHandOffCancelledItemsBlock:(id)arg1 ;
-(void)setDragCompletionBlock:(id)arg1 ;
-(void)setDataTransferFinishedBlock:(id)arg1 ;
-(void)takeInsideAppSourceOperationMask:(unsigned long long)arg1 outsideAppSourceOperationMask:(unsigned long long)arg2 prefersFullSizePreview:(BOOL)arg3 ;
-(void)dirtyItems:(id)arg1 ;
-(void)dragDidExitApp;
-(id)addItems:(id)arg1 withOldItemCollection:(id)arg2 ;
-(void)_internalDragFailed;
-(id)dragPreviewProviderBlock;
-(id)canHandOffCancelledItemsBlock;
-(id)handOffCancelledItemsBlock;
-(id)dragCompletionBlock;
-(id)dataTransferFinishedBlock;
@end

