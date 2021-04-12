/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class SKUIClientContext, NSObject;

@interface SKUISyncWishlistOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _resultBlock;

}

@property (copy) id resultBlock; 
-(id)init;
-(void)main;
-(id)resultBlock;
-(void)setResultBlock:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)_sendLocalChangesForWishlist:(id)arg1 ;
-(BOOL)_loadRemoteItemsForWishlist:(id)arg1 didChange:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)_mergeItems:(id)arg1 wishlist:(id)arg2 didChange:(BOOL*)arg3 error:(id*)arg4 ;
@end

