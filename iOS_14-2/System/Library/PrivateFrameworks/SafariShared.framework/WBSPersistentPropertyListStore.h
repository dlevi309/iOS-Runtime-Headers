/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSMutableDictionary, WBSCoalescedAsynchronousWriter;

@interface WBSPersistentPropertyListStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _backingStoreURL;
	NSMutableDictionary* _store;
	WBSCoalescedAsynchronousWriter* _writer;
	/*^block*/id _createEmptyStoreHandler;
	/*^block*/id _validateLoadedStoreHandler;

}

@property (nonatomic,copy) id createEmptyStoreHandler;                 //@synthesize createEmptyStoreHandler=_createEmptyStoreHandler - In the implementation block
@property (nonatomic,copy) id validateLoadedStoreHandler;              //@synthesize validateLoadedStoreHandler=_validateLoadedStoreHandler - In the implementation block
-(id)numberForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)_dataRepresentation;
-(id)objectForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)_prepareEmptyStore;
-(id)_objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)initWithBackingStoreURL:(id)arg1 fileResourceValues:(id)arg2 ;
-(void)setCreateEmptyStoreHandler:(id)arg1 ;
-(void)saveStoreSynchronously;
-(id)_existingSavedData;
-(void)_loadDataIfNecessary;
-(void)clearStoreSynchronously;
-(id)createEmptyStoreHandler;
-(id)validateLoadedStoreHandler;
-(void)setValidateLoadedStoreHandler:(id)arg1 ;
-(void)saveAndCloseStoreSynchronously;
-(id)initWithBackingStoreURL:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

