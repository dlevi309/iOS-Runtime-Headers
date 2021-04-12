/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/

#import <CommonUtilities/CUTPromise.h>

@class NSRecursiveLock, CUTResult, NSMutableArray;

@interface _CUTLockingPromise : CUTPromise {

	NSRecursiveLock* _lock;
	BOOL _done;
	CUTResult* _result;
	NSMutableArray* _resultBlocks;

}

@property (nonatomic,retain) NSRecursiveLock * lock;                     //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) BOOL done;                                  //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) CUTResult * result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultBlocks;              //@synthesize resultBlocks=_resultBlocks - In the implementation block
-(id)init;
-(NSRecursiveLock *)lock;
-(CUTResult *)result;
-(void)setResult:(CUTResult *)arg1 ;
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(void)_fulfillWithResult:(id)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)resultBlocks;
-(void)setResultBlocks:(NSMutableArray *)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
@end

