/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBApplicationDataStoreRepository.h>

@protocol FBApplicationDataStoreRepositoryDelegate, OS_dispatch_queue;
@class NSURL, NSMutableDictionary, NSObject, NSString;

@interface FBPlistApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {

	NSURL* _storeURL;
	NSMutableDictionary* _state;
	BOOL _dirty;
	unsigned long long _batchCount;
	int _autoFlushDuration;
	id<FBApplicationDataStoreRepositoryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _writeQueue;

}

@property (assign,nonatomic,__weak) id<FBApplicationDataStoreRepositoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDirty;
-(id)allObjectsForKeys:(id)arg1 ;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2 ;
-(id<FBApplicationDataStoreRepositoryDelegate>)delegate;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 ;
-(void)close;
-(id)location;
-(void)endBatchedUpdate;
-(void)beginBatchedUpdate;
-(id)keysForApplication:(id)arg1 ;
-(void)setDelegate:(id<FBApplicationDataStoreRepositoryDelegate>)arg1 ;
-(id)initWithStorePath:(id)arg1 ;
-(BOOL)containsKey:(id)arg1 forApplication:(id)arg2 ;
-(void)removeAllObjectsForApplication:(id)arg1 ;
-(BOOL)_isEligibleForSaving:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2 ;
-(void)_load;
-(void)flushSynchronously;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 ;
-(void)dealloc;
-(id)applicationIdentifiersWithState;
-(id)_stateQueue_storeForIdentifier:(id)arg1 ;
-(id)_stateQueue_objectForKey:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_stateQueue_objectsForKeys:(id)arg1 ;
-(id)_stateQueue_addStoreForIdentifierIfNecessary:(id)arg1 ;
-(void)_stateQueue_markDirty;
-(void)_stateQueue_removeStoreForIdentifier:(id)arg1 ;
-(void)_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2 ;
-(void)_writeQueue_flushSynchronously;
-(void)_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1 ;
@end

