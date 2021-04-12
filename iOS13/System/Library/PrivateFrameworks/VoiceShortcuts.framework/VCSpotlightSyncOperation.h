/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol VCSpotlightSyncOperationDelegate, OS_dispatch_queue, OS_os_transaction;
@class NSDictionary, NSSet, NSObject, CSSearchableIndex;

@interface VCSpotlightSyncOperation : NSObject {

	BOOL _fullResync;
	id<VCSpotlightSyncOperationDelegate> _delegate;
	NSDictionary* _searchableItemRegistry;
	NSSet* _identifiersToRemove;
	NSDictionary* _keyedReferences;
	NSObject*<OS_dispatch_queue> _queue;
	CSSearchableIndex* _index;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,readonly) NSDictionary * searchableItemRegistry;                           //@synthesize searchableItemRegistry=_searchableItemRegistry - In the implementation block
@property (nonatomic,readonly) NSSet * identifiersToRemove;                                     //@synthesize identifiersToRemove=_identifiersToRemove - In the implementation block
@property (nonatomic,readonly) NSDictionary * keyedReferences;                                  //@synthesize keyedReferences=_keyedReferences - In the implementation block
@property (nonatomic,readonly) BOOL fullResync;                                                 //@synthesize fullResync=_fullResync - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) CSSearchableIndex * index;                                       //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;                          //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic,__weak) id<VCSpotlightSyncOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)spotlightDiffFileURL;
+(id)getSpotlightLocalState;
+(void)_fillIdentifiersToRemove:(id*)arg1 searchableItemRegistry:(id*)arg2 withMaximumUpdatedItems:(long long)arg3 references:(id)arg4 localState:(id)arg5 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<VCSpotlightSyncOperationDelegate>)delegate;
-(void)setDelegate:(id<VCSpotlightSyncOperationDelegate>)arg1 ;
-(CSSearchableIndex *)index;
-(void)start;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(id)initWithReferences:(id)arg1 clientState:(unsigned long long)arg2 spotlightIndex:(id)arg3 forceFullResync:(BOOL)arg4 ;
-(void)indexSearchableItems;
-(void)saveLocalState;
-(void)clearLocalStateAndExit;
-(void)deleteSpotlightFileAndCleanup;
-(void)cleanupAndExitWithRequestToRelaunch:(BOOL)arg1 ;
-(NSDictionary *)searchableItemRegistry;
-(NSSet *)identifiersToRemove;
-(NSDictionary *)keyedReferences;
-(BOOL)fullResync;
@end

