/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCFetchedValueManager.h>

@class FCFetchedValueObservable, FCBundleSubscriptionManager, NSString;

@interface FCBundlePurchaseIDsFetchedValueManager : NSObject <FCBundleSubscriptionChangeObserver, FCFetchedValueManager> {

	FCFetchedValueObservable* _observable;
	FCBundleSubscriptionManager* _bundleSubscriptionManager;

}

@property (nonatomic,readonly) FCFetchedValueObservable * observable;                                //@synthesize observable=_observable - In the implementation block
@property (nonatomic,readonly) FCBundleSubscriptionManager * bundleSubscriptionManager;              //@synthesize bundleSubscriptionManager=_bundleSubscriptionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NFCopying> value; 
+(id)_valueWithBundleSubscriptionManager:(id)arg1 ;
-(FCFetchedValueObservable *)observable;
-(void)addObserver:(id)arg1 ;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchValueWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(FCBundleSubscriptionManager *)bundleSubscriptionManager;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(id)initWithBundleSubscriptionManager:(id)arg1 ;
-(void)_bundleSubscriptionMayHaveChanged;
-(void)removeObserver:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2 ;
-(id<NFCopying>)value;
@end

