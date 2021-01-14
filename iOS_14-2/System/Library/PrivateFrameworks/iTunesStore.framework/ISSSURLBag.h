/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <StoreServices/SSURLBag.h>

@class ISURLBag, NSMutableArray, ISLoadURLBagOperation;

@interface ISSSURLBag : SSURLBag {

	ISURLBag* _bag;
	NSMutableArray* _completionBlocks;
	BOOL _forceInvalidationForNextLoad;
	ISLoadURLBagOperation* _operation;

}
+(id)URLBagForContext:(id)arg1 ;
-(id)storeFrontIdentifier;
-(void)getTrustForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_enqueueOperationWithContext:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)invalidate;
-(id)existingBagDictionary;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_finishOperationWithURLBag:(id)arg1 error:(id)arg2 ;
@end

