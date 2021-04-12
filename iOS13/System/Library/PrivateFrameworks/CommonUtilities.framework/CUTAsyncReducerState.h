/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


@class NSArray, CUTResult;

@interface CUTAsyncReducerState : NSObject {

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
-(void)setVisitedItems:(NSArray *)arg1 ;
-(void)setPendingItems:(NSArray *)arg1 ;
-(void)setCurrentItem:(id)arg1 ;
-(void)setCurrentResult:(CUTResult *)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
-(void)setStopBlock:(id)arg1 ;
-(void)setContinueBlock:(id)arg1 ;
-(id)continueBlock;
-(id)cancelBlock;
-(id)stopBlock;
-(void)continueWithResult:(id)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(void)stopWithResult:(id)arg1 ;
-(NSArray *)visitedItems;
-(NSArray *)pendingItems;
-(id)currentItem;
-(CUTResult *)currentResult;
@end

