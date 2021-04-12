/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
*/

#import <libobjc.A.dylib/PBItemCollectionDataTransferDelegate.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol PBDataTransferMonitorDelegate;
@class NSMutableDictionary, NSMutableSet, NSProgress, NSMutableArray, NSArray, NSString;

@interface PBDataTransferMonitor : NSObject <PBItemCollectionDataTransferDelegate, NSProgressReporting> {

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
	id<PBDataTransferMonitorDelegate> _delegate;
	NSArray* _outstandingRequests;
	unsigned long long _outstandingItemsCount;

}

@property (assign,nonatomic,__weak) id<PBDataTransferMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * outstandingRequests;                           //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (nonatomic,readonly) unsigned long long outstandingItemsCount;                     //@synthesize outstandingItemsCount=_outstandingItemsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalItemsCount; 
@property (assign,nonatomic) BOOL suppressEventsUntilRequested; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(id)init;
-(id<PBDataTransferMonitorDelegate>)delegate;
-(void)cancelOutstandingRequests;
-(void)_transferQueue_sendBeganCallback;
-(unsigned long long)outstandingItemsCount;
-(void)_transferQueue_scheduleBeganCallback;
-(void)_transferQueue_sendFinishedCallback;
-(void)_transferQueue_recomputeMasterProgress;
-(void)_transferQueue_scheduleFinishedCallback;
-(BOOL)suppressEventsUntilRequested;
-(void)setDelegate:(id<PBDataTransferMonitorDelegate>)arg1 ;
-(void)setSuppressEventsUntilRequested:(BOOL)arg1 ;
-(void)sendDelegateEventsIfNeeded;
-(unsigned long long)totalItemsCount;
-(void)dealloc;
-(NSArray *)outstandingRequests;
-(void)itemCollection:(id)arg1 item:(id)arg2 representation:(id)arg3 beganDataTransferWithProgress:(id)arg4 ;
-(void)itemCollection:(id)arg1 item:(id)arg2 representationFinishedDataTransfer:(id)arg3 ;
@end

