/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/WFDatabaseObjectObserver.h>
#import <libobjc.A.dylib/VCSpotlightSyncOperationDelegate.h>

@protocol VCDatabaseProvider, OS_dispatch_queue;
@class WFDatabaseResult, WFDebouncer, VCDaemonXPCEventHandler, VCSpotlightSyncOperation, CSSearchableIndex, NSObject, NSString;

@interface VCSpotlightSyncService : NSObject <WFDatabaseObjectObserver, VCSpotlightSyncOperationDelegate> {

	BOOL _isFetchingClientState;
	BOOL _hasAddedXPCEventHandlerObserver;
	WFDatabaseResult* _workflows;
	WFDebouncer* _debouncer;
	VCDaemonXPCEventHandler* _eventHandler;
	VCSpotlightSyncOperation* _syncOperation;
	id<VCDatabaseProvider> _databaseProvider;
	CSSearchableIndex* _index;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) WFDebouncer * debouncer;                              //@synthesize debouncer=_debouncer - In the implementation block
@property (nonatomic,readonly) VCDaemonXPCEventHandler * eventHandler;               //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,retain) VCSpotlightSyncOperation * syncOperation;               //@synthesize syncOperation=_syncOperation - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) CSSearchableIndex * index;                            //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) WFDatabaseResult * workflows;                         //@synthesize workflows=_workflows - In the implementation block
@property (assign,nonatomic) BOOL isFetchingClientState;                             //@synthesize isFetchingClientState=_isFetchingClientState - In the implementation block
@property (assign,nonatomic) BOOL hasAddedXPCEventHandlerObserver;                   //@synthesize hasAddedXPCEventHandlerObserver=_hasAddedXPCEventHandlerObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sync;
-(VCDaemonXPCEventHandler *)eventHandler;
-(CSSearchableIndex *)index;
-(VCSpotlightSyncOperation *)syncOperation;
-(WFDebouncer *)debouncer;
-(void)start;
-(void)setSyncOperation:(VCSpotlightSyncOperation *)arg1 ;
-(void)syncOperationFinishedWithRequestToRelaunch:(BOOL)arg1 ;
-(id<VCDatabaseProvider>)databaseProvider;
-(BOOL)hasAddedXPCEventHandlerObserver;
-(void)requestSync;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isFetchingClientState;
-(void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4 ;
-(void)setIsFetchingClientState:(BOOL)arg1 ;
-(WFDatabaseResult *)workflows;
-(void)syncWithModifiedObjects:(id)arg1 inserted:(id)arg2 removed:(id)arg3 ;
-(id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 ;
-(void)setHasAddedXPCEventHandlerObserver:(BOOL)arg1 ;
-(void)dealloc;
@end

