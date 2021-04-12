/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSHashTable;

@interface SKUIToggleStateCenter : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _itemStates;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;

}
+(id)defaultCenter;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)itemForIdentifier:(id)arg1 ;
-(BOOL)updateItem:(id)arg1 ;
-(void)_notifyObserversOfStateChanges:(id)arg1 ;
-(void)clearAll;
-(void)_accountStoreChangeNotification:(id)arg1 ;
@end

