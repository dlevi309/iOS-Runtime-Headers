/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSMutableArray, NSLock, NSMutableDictionary, AMSLazyPromise;

@interface AMSPurchaseBatch : NSObject {

	BOOL _isComplete;
	NSMutableArray* _contexts;
	NSLock* _lock;
	NSMutableDictionary* _contextMap;
	NSMutableArray* _results;
	AMSLazyPromise* _promise;

}

@property (nonatomic,readonly) NSMutableArray * contexts;                     //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                   //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * contextMap;              //@synthesize contextMap=_contextMap - In the implementation block
@property (assign,nonatomic) BOOL isComplete;                                 //@synthesize isComplete=_isComplete - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                      //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) AMSLazyPromise * promise;                      //@synthesize promise=_promise - In the implementation block
-(NSLock *)lock;
-(NSMutableArray *)results;
-(void)setLock:(NSLock *)arg1 ;
-(AMSLazyPromise *)promise;
-(BOOL)isComplete;
-(NSMutableArray *)contexts;
-(id)initWithContexts:(id)arg1 weakPromise:(id)arg2 ;
-(id)contextForPurchaseId:(id)arg1 ;
-(BOOL)finishContext:(id)arg1 withError:(id)arg2 ;
-(BOOL)finishContext:(id)arg1 withResult:(id)arg2 ;
-(id)nextPurchaseContext;
-(NSMutableDictionary *)contextMap;
-(void)setIsComplete:(BOOL)arg1 ;
@end

