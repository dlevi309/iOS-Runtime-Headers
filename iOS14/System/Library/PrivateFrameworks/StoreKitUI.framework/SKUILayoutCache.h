/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUILayoutCacheDelegate, OS_dispatch_queue;
#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, NSObject;

@interface SKUILayoutCache : NSObject {

	NSMutableArray* _batchedRequests;
	id<SKUILayoutCacheDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _layouts;
	NSMutableArray* _requests;

}

@property (assign,nonatomic,__weak) id<SKUILayoutCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_populateCache;
-(id)init;
-(id<SKUILayoutCacheDelegate>)delegate;
-(void)setDelegate:(id<SKUILayoutCacheDelegate>)arg1 ;
-(void)commitLayoutRequests;
-(NSRange)populateCacheWithLayoutRequests:(id)arg1 ;
-(id)layoutForIndex:(long long)arg1 forced:(BOOL)arg2 ;
-(void)_layoutRequestsInRange:(NSRange)arg1 ;
-(void)_addLayoutBatch:(id)arg1 ;
-(NSRange)addLayoutRequests:(id)arg1 ;
-(id)layoutForIndex:(long long)arg1 ;
@end

