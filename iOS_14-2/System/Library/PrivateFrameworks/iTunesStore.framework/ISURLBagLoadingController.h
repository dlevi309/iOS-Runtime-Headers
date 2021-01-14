/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableArray, NSError, NSHashTable, SSURLBag;

@interface ISURLBagLoadingController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	BOOL _hasSuccessfullyLoadedBag;
	NSDictionary* _bagDictionary;
	NSMutableArray* _bagAccessRequestBlocks;
	NSError* _bagLoadingError;
	NSHashTable* _bagObservers;
	SSURLBag* _URLBag;
	BOOL _loadingBag;

}

@property (nonatomic,readonly) NSDictionary * bagDictionary; 
@property (getter=isLoadingBag,nonatomic,readonly) BOOL loadingBag;              //@synthesize loadingBag=_loadingBag - In the implementation block
+(id)sharedBagLoadingController;
-(id)init;
-(NSDictionary *)bagDictionary;
-(void)dealloc;
-(void)addBagObserver:(id)arg1 ;
-(void)removeBagObserver:(id)arg1 ;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(void)_reloadURLBagAllowingUpdateUsingExistingBagDictionary:(BOOL)arg1 ;
-(void)_handleNetworkReachabilityFlagsDidChangeNotification:(id)arg1 ;
-(void)_handleStoreFrontDidChangeNotification:(id)arg1 ;
-(void)_updateBagWithDictionary:(id)arg1 error:(id)arg2 ;
-(void)_didCompleteLoadingBagDictionary:(id)arg1 withError:(id)arg2 ;
-(void)requestAccessToBagUsingBlock:(/*^block*/id)arg1 ;
-(void)reloadBag;
-(BOOL)isLoadingBag;
@end

