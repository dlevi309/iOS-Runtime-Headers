/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSItemProviderDataTransferDelegate.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol _UIDataTransferMonitorDelegate;
@class NSMutableDictionary, NSMutableSet, NSProgress, NSMutableArray, NSArray, NSString;

@interface _UIDataTransferMonitor : NSObject <NSItemProviderDataTransferDelegate, NSProgressReporting> {

	NSMutableDictionary* _transferQueue_requestsBySourceItemUUID;
	NSMutableSet* _transferQueue_requestsInProgress;
	BOOL _transferQueue_suppressEventsUntilRequested;
	BOOL _transferQueue_shouldSendBeganCallback;
	BOOL _transferQueue_hasSentBeganCallback;
	BOOL _transferQueue_hasSentFinishedCallback;
	BOOL _transferQueue_shouldSendFinishedCallback;
	NSProgress* _transferQueue_masterProgress;
	NSMutableArray* _transferQueue_childProgresses;
	NSMutableSet* _transferQueue_allEncounteredItemUUIDs;
	id<_UIDataTransferMonitorDelegate> _delegate;
	NSArray* _outstandingRequests;
	unsigned long long _outstandingItemsCount;

}

@property (assign,nonatomic,__weak) id<_UIDataTransferMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * outstandingRequests;                            //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (nonatomic,readonly) unsigned long long outstandingItemsCount;                      //@synthesize outstandingItemsCount=_outstandingItemsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalItemsCount; 
@property (assign,nonatomic) BOOL suppressEventsUntilRequested; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)itemProvider:(id)arg1 beganDataTransferTransactionUUID:(id)arg2 progress:(id)arg3 ;
-(void)itemProvider:(id)arg1 finishedDataTransferTransactionUUID:(id)arg2 ;
-(NSProgress *)progress;
-(id)init;
-(id<_UIDataTransferMonitorDelegate>)delegate;
-(void)cancelOutstandingRequests;
-(void)_transferQueue_sendBeganCallback;
-(unsigned long long)outstandingItemsCount;
-(void)_transferQueue_scheduleBeganCallback;
-(void)_transferQueue_sendFinishedCallback;
-(void)_transferQueue_recomputeMasterProgress;
-(void)_transferQueue_scheduleFinishedCallback;
-(BOOL)suppressEventsUntilRequested;
-(void)setDelegate:(id<_UIDataTransferMonitorDelegate>)arg1 ;
-(void)setSuppressEventsUntilRequested:(BOOL)arg1 ;
-(void)sendDelegateEventsIfNeeded;
-(unsigned long long)totalItemsCount;
-(void)dealloc;
-(NSArray *)outstandingRequests;
@end

