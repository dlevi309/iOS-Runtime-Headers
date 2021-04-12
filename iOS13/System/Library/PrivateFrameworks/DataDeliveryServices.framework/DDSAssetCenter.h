/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/DDSManagingDelegate.h>

@protocol DDSAssetProviding, DDSManaging, OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface DDSAssetCenter : NSObject <DDSManagingDelegate> {

	id<DDSAssetProviding> _provider;
	id<DDSManaging> _managerInterface;
	NSMutableSet* _delegates;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<DDSAssetProviding> provider;                  //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) id<DDSManaging> managerInterface;                //@synthesize managerInterface=_managerInterface - In the implementation block
@property (nonatomic,readonly) NSMutableSet * delegates;                        //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<DDSAssetProviding>)provider;
-(NSMutableSet *)delegates;
-(id<DDSManaging>)managerInterface;
-(void)registerDelegate:(id)arg1 ;
-(id)assetsForQuery:(id)arg1 error:(id*)arg2 ;
-(void)unregisterDelegate:(id)arg1 ;
-(void)didUpdateAssetsWithType:(id)arg1 ;
-(void)removeAssertionWithIdentifier:(id)arg1 ;
-(id)assertionIDsForClientID:(id)arg1 ;
-(void)addAssertionForAssetsWithQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4 ;
-(id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2 ;
-(id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2 ;
-(id)initWithProvider:(id)arg1 managerInterface:(id)arg2 ;
@end

