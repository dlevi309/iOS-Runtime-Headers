/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class VSKeychainStore, NSUndoManager, NSMutableSet, NSSet;

@interface VSKeychainEditingContext : NSObject {

	VSKeychainStore* _keychainStore;
	NSUndoManager* _undoManager;
	NSMutableSet* _items;

}

@property (nonatomic,retain) NSMutableSet * items;                         //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) VSKeychainStore * keychainStore;              //@synthesize keychainStore=_keychainStore - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                  //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,readonly) NSSet * insertedItems; 
@property (nonatomic,readonly) NSSet * updatedItems; 
@property (nonatomic,readonly) NSSet * deletedItems; 
@property (nonatomic,readonly) NSSet * registeredItems; 
-(BOOL)save:(id*)arg1 ;
-(void)insertItem:(id)arg1 ;
-(void)setItems:(NSMutableSet *)arg1 ;
-(id)init;
-(NSUndoManager *)undoManager;
-(NSMutableSet *)items;
-(NSSet *)deletedItems;
-(NSSet *)updatedItems;
-(VSKeychainStore *)keychainStore;
-(void)setKeychainStore:(VSKeychainStore *)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)deleteItem:(id)arg1 ;
-(void)fulfillFault:(id)arg1 ;
-(void)_populateQuery:(CFDictionaryRef)arg1 usingPredicate:(id)arg2 withItemKind:(id)arg3 ;
-(id)_findOrCreateItemForCommittedValues:(id)arg1 withItemKind:(id)arg2 ;
-(id)_queryForItemValues:(id)arg1 withItemKind:(id)arg2 ;
-(void)_populateResult:(id)arg1 forRequest:(id)arg2 fromMatch:(id)arg3 ;
-(id)_subsetOfRegisteredItemsWithKeyPath:(id)arg1 ;
-(NSSet *)insertedItems;
-(void)_populateErrors:(id)arg1 withError:(id)arg2 affectingItem:(id)arg3 ;
-(NSSet *)registeredItems;
@end

