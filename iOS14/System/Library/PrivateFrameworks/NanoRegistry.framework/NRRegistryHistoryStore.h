/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NRRegistry.h>

@class NSMutableDictionary, NRDeviceCollectionHistory;

@interface NRRegistryHistoryStore : NRRegistry {

	NSMutableDictionary* _diffIndexObservers;
	int _keyBagStatusChangedNotificationToken;
	NRDeviceCollectionHistory* _history;

}

@property (nonatomic,readonly) NRDeviceCollectionHistory * history; 
+(id)sharedInstance;
-(void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg1 secureProperties:(id)arg2 ;
-(NRDeviceCollectionHistory *)history;
-(id)collection;
-(void)setCollection:(id)arg1 ;
-(void)removeDiffIndexObserver:(id)arg1 ;
-(id)addDiffIndexObserverWithWriteBlock:(/*^block*/id)arg1 ;
-(void)_notifyDiffIndexObserversWithHistoryEntry:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3 ;
-(void)grabHistoryWithWriteBlock:(/*^block*/id)arg1 ;
-(void)syncGrabHistoryWithWriteBlock:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)grabHistoryWithReadBlock:(/*^block*/id)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)dealloc;
-(void)syncGrabHistoryWithReadBlock:(/*^block*/id)arg1 ;
@end

