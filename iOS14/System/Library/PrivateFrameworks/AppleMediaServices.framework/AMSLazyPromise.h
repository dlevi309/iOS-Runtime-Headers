/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSPromise.h>

@interface AMSLazyPromise : AMSPromise {

	BOOL _executedBlock;
	/*^block*/id _block;
	double _timeout;

}

@property (nonatomic,copy) id block;                          //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL executedBlock;              //@synthesize executedBlock=_executedBlock - In the implementation block
@property (assign,nonatomic) double timeout;                  //@synthesize timeout=_timeout - In the implementation block
-(id)resultWithError:(id*)arg1 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(id)block;
-(void)setExecutedBlock:(BOOL)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)executedBlock;
-(BOOL)_runBlock;
-(id)initWithTimeout:(double)arg1 block:(/*^block*/id)arg2 ;
@end

