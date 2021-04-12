/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/

#import <CommonUtilities/CUTUnsafePromise.h>

@class CUTResult, NSMutableArray;

@interface _CUTUnsafePromise : CUTUnsafePromise {

	BOOL _done;
	CUTResult* _result;
	NSMutableArray* _resultBlocks;

}

@property (assign,nonatomic) BOOL done;                                  //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) CUTResult * result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultBlocks;              //@synthesize resultBlocks=_resultBlocks - In the implementation block
-(id)init;
-(CUTResult *)result;
-(void)setResult:(CUTResult *)arg1 ;
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(void)_fulfillWithResult:(id)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)resultBlocks;
-(void)setResultBlocks:(NSMutableArray *)arg1 ;
@end

