/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSPromise.h>

@class NSLock;

@interface SSLazyPromise : SSPromise {

	BOOL _executedBlock;
	/*^block*/id _block;
	NSLock* _executeBlockLock;

}

@property (nonatomic,copy) id block;                                 //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSLock * executeBlockLock;              //@synthesize executeBlockLock=_executeBlockLock - In the implementation block
@property (assign,nonatomic) BOOL executedBlock;                     //@synthesize executedBlock=_executedBlock - In the implementation block
-(id)resultWithError:(id*)arg1 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(id)block;
-(void)setExecutedBlock:(BOOL)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)executedBlock;
-(BOOL)_runBlock;
-(NSLock *)executeBlockLock;
-(void)setExecuteBlockLock:(NSLock *)arg1 ;
@end

