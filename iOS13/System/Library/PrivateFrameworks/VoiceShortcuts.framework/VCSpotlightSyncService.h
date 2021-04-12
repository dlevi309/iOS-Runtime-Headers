/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/WFDatabaseResultObserver.h>
#import <libobjc.A.dylib/VCSpotlightSyncOperationDelegate.h>

@protocol VCDatabaseProvider, OS_dispatch_queue;
@class WFDatabaseResult, WFDebouncer, VCSpotlightSyncOperation, CSSearchableIndex, NSObject, NSString;

@interface VCSpotlightSyncService : NSObject <WFDatabaseResultObserver, VCSpotlightSyncOperationDelegate> {

	BOOL _isFetchingClientState;
	WFDatabaseResult* _workflows;
	WFDebouncer* _debouncer;
	VCSpotlightSyncOperation* _syncOperation;
	id<VCDatabaseProvider> _databaseProvider;
	CSSearchableIndex* _index;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) WFDebouncer * debouncer;                              //@synthesize debouncer=_debouncer - In the implementation block
@property (nonatomic,retain) VCSpotlightSyncOperation * syncOperation;               //@synthesize syncOperation=_syncOperation - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) CSSearchableIndex * index;                            //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) WFDatabaseResult * workflows;                         //@synthesize workflows=_workflows - In the implementation block
@property (assign,nonatomic) BOOL isFetchingClientState;                             //@synthesize isFetchingClientState=_isFetchingClientState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(CSSearchableIndex *)index;
-(void)sync;
-(id)initWithDatabaseProvider:(id)arg1 ;
-(id<VCDatabaseProvider>)databaseProvider;
-(void)requestSync;
-(VCSpotlightSyncOperation *)syncOperation;
-(void)setSyncOperation:(VCSpotlightSyncOperation *)arg1 ;
-(void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4 ;
-(WFDatabaseResult *)workflows;
-(void)syncOperationFinishedWithRequestToRelaunch:(BOOL)arg1 ;
-(WFDebouncer *)debouncer;
-(BOOL)isFetchingClientState;
-(void)setIsFetchingClientState:(BOOL)arg1 ;
@end

