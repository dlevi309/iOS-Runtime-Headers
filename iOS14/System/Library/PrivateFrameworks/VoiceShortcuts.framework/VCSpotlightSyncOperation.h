/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol VCSpotlightSyncOperationDelegate, OS_dispatch_queue, OS_os_transaction;
@class NSDictionary, NSSet, VCSpotlightState, NSObject, CSSearchableIndex;

@interface VCSpotlightSyncOperation : NSObject {

	BOOL _fullResync;
	id<VCSpotlightSyncOperationDelegate> _delegate;
	NSDictionary* _searchableItemRegistry;
	NSSet* _identifiersToRemove;
	NSDictionary* _keyedReferences;
	VCSpotlightState* _localState;
	NSObject*<OS_dispatch_queue> _queue;
	CSSearchableIndex* _index;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,readonly) NSDictionary * searchableItemRegistry;                           //@synthesize searchableItemRegistry=_searchableItemRegistry - In the implementation block
@property (nonatomic,readonly) NSSet * identifiersToRemove;                                     //@synthesize identifiersToRemove=_identifiersToRemove - In the implementation block
@property (nonatomic,readonly) NSDictionary * keyedReferences;                                  //@synthesize keyedReferences=_keyedReferences - In the implementation block
@property (nonatomic,readonly) BOOL fullResync;                                                 //@synthesize fullResync=_fullResync - In the implementation block
@property (nonatomic,readonly) VCSpotlightState * localState;                                   //@synthesize localState=_localState - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) CSSearchableIndex * index;                                       //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;                          //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic,__weak) id<VCSpotlightSyncOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)_fillIdentifiersToRemove:(id*)arg1 searchableItemRegistry:(id*)arg2 withMaximumUpdatedItems:(long long)arg3 references:(id)arg4 localState:(id)arg5 ;
-(CSSearchableIndex *)index;
-(id)initWithModifiedReferences:(id)arg1 inserted:(id)arg2 removed:(id)arg3 spotlightIndex:(id)arg4 localState:(id)arg5 ;
-(BOOL)fullResync;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(id)init;
-(id<VCSpotlightSyncOperationDelegate>)delegate;
-(NSObject*<OS_os_transaction>)transaction;
-(void)start;
-(void)cleanupAndExitWithRequestToRelaunch:(BOOL)arg1 ;
-(NSSet *)identifiersToRemove;
-(id)initWithReferences:(id)arg1 forceFullResync:(BOOL)arg2 spotlightIndex:(id)arg3 localState:(id)arg4 ;
-(void)setDelegate:(id<VCSpotlightSyncOperationDelegate>)arg1 ;
-(NSDictionary *)keyedReferences;
-(VCSpotlightState *)localState;
-(NSDictionary *)searchableItemRegistry;
-(void)saveLocalState;
-(void)clearLocalStateAndExit;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)deleteSpotlightFileAndCleanup;
-(void)indexSearchableItems;
@end

