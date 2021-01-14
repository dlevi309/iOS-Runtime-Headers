/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(CUTResult *)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(id)init;
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(CUTResult *)result;
-(void)setResultBlocks:(NSMutableArray *)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)resultBlocks;
-(void)_fulfillWithResult:(id)arg1 ;
@end

