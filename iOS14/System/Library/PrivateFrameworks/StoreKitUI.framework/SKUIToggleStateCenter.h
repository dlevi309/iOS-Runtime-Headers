/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)clearAll;
-(void)removeObserver:(id)arg1 ;
-(id)itemForIdentifier:(id)arg1 ;
-(BOOL)updateItem:(id)arg1 ;
-(void)dealloc;
-(void)_notifyObserversOfStateChanges:(id)arg1 ;
-(void)_accountStoreChangeNotification:(id)arg1 ;
@end

