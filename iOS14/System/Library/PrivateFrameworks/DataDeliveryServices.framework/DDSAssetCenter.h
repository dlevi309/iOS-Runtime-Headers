/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/DDSManagingDelegate.h>
#import <libobjc.A.dylib/DDSAssetObservingDelegate.h>

@protocol DDSAssetProviding, DDSManaging, OS_dispatch_queue, DDSAssetObserving;
@class NSMutableSet, NSObject, NSString;

@interface DDSAssetCenter : NSObject <DDSManagingDelegate, DDSAssetObservingDelegate> {

	id<DDSAssetProviding> _provider;
	id<DDSManaging> _managerInterface;
	NSMutableSet* _delegates;
	NSObject*<OS_dispatch_queue> _queue;
	id<DDSAssetObserving> _assetObserver;

}

@property (nonatomic,readonly) id<DDSAssetProviding> provider;                   //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) id<DDSManaging> managerInterface;                 //@synthesize managerInterface=_managerInterface - In the implementation block
@property (nonatomic,readonly) NSMutableSet * delegates;                         //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<DDSAssetObserving> assetObserver;              //@synthesize assetObserver=_assetObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSMutableSet *)delegates;
-(id)init;
-(id<DDSAssetProviding>)provider;
-(id<DDSManaging>)managerInterface;
-(id)assetsForQuery:(id)arg1 error:(id*)arg2 ;
-(id)initWithProvider:(id)arg1 managerInterface:(id)arg2 ;
-(void)serverDidUpdateAssetsWithType:(id)arg1 ;
-(void)removeAssertionWithIdentifier:(id)arg1 ;
-(id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2 ;
-(void)triggerUpdate;
-(void)triggerDump;
-(id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<DDSAssetObserving>)assetObserver;
-(id)assertionIDsForClientID:(id)arg1 ;
-(void)unregisterDelegate:(id)arg1 ;
-(void)registerDelegate:(id)arg1 ;
-(void)addAssertionForAssetsWithQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4 ;
@end

