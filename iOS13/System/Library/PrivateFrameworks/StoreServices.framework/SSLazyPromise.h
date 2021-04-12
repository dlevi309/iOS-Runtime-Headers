/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)resultWithError:(id*)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(BOOL)_runBlock;
-(BOOL)executedBlock;
-(void)setExecutedBlock:(BOOL)arg1 ;
-(NSLock *)executeBlockLock;
-(void)setExecuteBlockLock:(NSLock *)arg1 ;
@end

