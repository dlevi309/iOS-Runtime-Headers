/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NRRegistry.h>

@class NSMutableDictionary, NRDeviceCollectionHistory;

@interface NRRegistryHistoryStore : NRRegistry {

	NSMutableDictionary* _diffIndexObservers;
	int _keyBagStatusChangedNotificationToken;
	NRDeviceCollectionHistory* _history;

}

@property (nonatomic,retain) NRDeviceCollectionHistory * history;                   //@synthesize history=_history - In the implementation block
@property (assign,nonatomic) int keyBagStatusChangedNotificationToken;              //@synthesize keyBagStatusChangedNotificationToken=_keyBagStatusChangedNotificationToken - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)invalidate;
-(id)collection;
-(id)initWithParameters:(id)arg1 ;
-(NRDeviceCollectionHistory *)history;
-(void)setHistory:(NRDeviceCollectionHistory *)arg1 ;
-(void)setCollection:(id)arg1 ;
-(void)grabHistoryWithReadBlock:(/*^block*/id)arg1 ;
-(void)grabHistoryWithWriteBlock:(/*^block*/id)arg1 ;
-(void)syncGrabHistoryWithReadBlock:(/*^block*/id)arg1 ;
-(void)syncGrabHistoryWithWriteBlock:(/*^block*/id)arg1 ;
-(id)addDiffIndexObserverWithWriteBlock:(/*^block*/id)arg1 ;
-(void)removeDiffIndexObserver:(id)arg1 ;
-(void)_loadAndNotifySecureProperties;
-(void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg1 secureProperties:(id)arg2 ;
-(void)_removeUnreferencedSecureProperties;
-(void)_persistCollection:(id)arg1 secureProperties:(id)arg2 ;
-(void)_notifyDiffIndexObserversWithHistoryEntry:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3 ;
-(int)keyBagStatusChangedNotificationToken;
-(void)setKeyBagStatusChangedNotificationToken:(int)arg1 ;
@end

