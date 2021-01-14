/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSLock, AMSLazyPromise, NSMutableArray, NSMutableDictionary;

@interface AMSPurchaseBatch : NSObject {

	BOOL _isComplete;
	NSLock* _lock;
	AMSLazyPromise* _promise;
	NSMutableArray* _purchases;
	NSMutableDictionary* _purchaseMap;
	NSMutableArray* _results;

}

@property (assign,nonatomic) BOOL isComplete;                                  //@synthesize isComplete=_isComplete - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                    //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) AMSLazyPromise * promise;                       //@synthesize promise=_promise - In the implementation block
@property (nonatomic,readonly) NSMutableArray * purchases;                     //@synthesize purchases=_purchases - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * purchaseMap;              //@synthesize purchaseMap=_purchaseMap - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                       //@synthesize results=_results - In the implementation block
-(BOOL)isComplete;
-(NSMutableArray *)results;
-(NSMutableArray *)purchases;
-(NSLock *)lock;
-(void)setLock:(NSLock *)arg1 ;
-(id)nextPurchase;
-(id)purchaseForPurchaseId:(id)arg1 ;
-(id)initWithPurchases:(id)arg1 weakPromise:(id)arg2 ;
-(BOOL)finishPurchase:(id)arg1 withError:(id)arg2 ;
-(void)setIsComplete:(BOOL)arg1 ;
-(BOOL)finishPurchase:(id)arg1 withResult:(id)arg2 ;
-(AMSLazyPromise *)promise;
-(NSMutableDictionary *)purchaseMap;
@end

