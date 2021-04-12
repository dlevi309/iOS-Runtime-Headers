/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<PKDiscoveryDataSourceDelegate>)delegate;
-(void)setDelegate:(id<PKDiscoveryDataSourceDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)updateArticleLayouts;
-(void)_updateArticlesWithCompletion:(/*^block*/id)arg1 ;
-(id)_articleLayoutForItemIdentifier:(id)arg1 ;
-(void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_queue_updateArticleLayouts:(id)arg1 ;
-(NSArray *)articleLayouts;
-(void)displayedDiscoveryItemWithIdentifier:(id)arg1 ;
-(void)_addDismissActionToArticleLayouts:(id)arg1 ;
-(void)setArticleLayouts:(NSArray *)arg1 ;
-(void)discoveryService:(id)arg1 receivedUpdatedDiscoveryArticleLayouts:(id)arg2 ;
-(id)cachedDiscoveryArticleLayoutForItemWithIdentifier:(id)arg1 ;
@end

