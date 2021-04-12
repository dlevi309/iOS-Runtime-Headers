/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSDictionary *)bagDictionary;
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

