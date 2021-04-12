/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/


@class NSArray, CUTResult;

@interface ENAsyncReducerState : NSObject {

	NSArray* _visitedItems;
	NSArray* _pendingItems;
	id _currentItem;
	CUTResult* _currentResult;
	/*^block*/id _cancelBlock;
	/*^block*/id _continueBlock;
	/*^block*/id _stopBlock;

}

@property (nonatomic,retain) NSArray * visitedItems;                 //@synthesize visitedItems=_visitedItems - In the implementation block
@property (nonatomic,retain) NSArray * pendingItems;                 //@synthesize pendingItems=_pendingItems - In the implementation block
@property (nonatomic,retain) id currentItem;                         //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,retain) CUTResult * currentResult;              //@synthesize currentResult=_currentResult - In the implementation block
@property (nonatomic,copy) id cancelBlock;                           //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,copy) id continueBlock;                         //@synthesize continueBlock=_continueBlock - In the implementation block
@property (nonatomic,copy) id stopBlock;                             //@synthesize stopBlock=_stopBlock - In the implementation block
-(void)cancelWithError:(id)arg1 ;
-(id)currentItem;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(id)stopBlock;
-(void)setCurrentItem:(id)arg1 ;
-(void)setVisitedItems:(NSArray *)arg1 ;
-(void)setPendingItems:(NSArray *)arg1 ;
-(void)setCurrentResult:(CUTResult *)arg1 ;
-(void)setStopBlock:(id)arg1 ;
-(void)setContinueBlock:(id)arg1 ;
-(id)continueBlock;
-(void)stopWithResult:(id)arg1 ;
-(NSArray *)visitedItems;
-(NSArray *)pendingItems;
-(CUTResult *)currentResult;
-(void)continueWithResult:(id)arg1 ;
@end

