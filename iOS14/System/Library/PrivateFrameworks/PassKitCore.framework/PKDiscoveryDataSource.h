/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKDiscoveryObserver.h>

@protocol OS_dispatch_queue, PKDiscoveryDataSourceDelegate;
@class PKDiscoveryService, NSArray, NSObject, NSString;

@interface PKDiscoveryDataSource : NSObject <PKDiscoveryObserver> {

	PKDiscoveryService* _discoveryService;
	os_unfair_lock_s _articleLayoutsLock;
	NSArray* _articleLayouts;
	BOOL _updatingArticles;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<PKDiscoveryDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKDiscoveryDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * articleLayouts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKDiscoveryDataSourceDelegate>)delegate;
-(void)setDelegate:(id<PKDiscoveryDataSourceDelegate>)arg1 ;
-(NSArray *)articleLayouts;
-(void)updateArticleLayouts;
-(void)_updateArticlesWithCompletion:(/*^block*/id)arg1 ;
-(id)_articleLayoutForItemIdentifier:(id)arg1 ;
-(void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setArticleLayouts:(NSArray *)arg1 ;
-(BOOL)_queue_updateArticleLayouts:(id)arg1 ;
-(void)displayedDiscoveryItemWithIdentifier:(id)arg1 ;
-(void)_addDismissActionToArticleLayouts:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)discoveryService:(id)arg1 receivedUpdatedDiscoveryArticleLayouts:(id)arg2 ;
-(id)cachedDiscoveryArticleLayoutForItemWithIdentifier:(id)arg1 ;
-(void)dealloc;
@end

