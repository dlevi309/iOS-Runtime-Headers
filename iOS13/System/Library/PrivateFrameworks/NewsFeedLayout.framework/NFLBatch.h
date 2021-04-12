/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@class NFLBatchContext, NSMutableArray;

@interface NFLBatch : NSObject {

	double _batchHeight;
	NFLBatchContext* _batchContext;
	NSMutableArray* _layoutInfos;

}

@property (assign,nonatomic) double batchHeight;                        //@synthesize batchHeight=_batchHeight - In the implementation block
@property (nonatomic,retain) NSMutableArray * layoutInfos;              //@synthesize layoutInfos=_layoutInfos - In the implementation block
@property (nonatomic,copy) NFLBatchContext * batchContext;              //@synthesize batchContext=_batchContext - In the implementation block
-(id)init;
-(void)setBatchContext:(NFLBatchContext *)arg1 ;
-(void)addLayoutInfos:(id)arg1 ;
-(NSMutableArray *)layoutInfos;
-(double)batchHeight;
-(void)setBatchHeight:(double)arg1 ;
-(void)addLayoutInfo:(id)arg1 ;
-(NFLBatchContext *)batchContext;
-(void)setLayoutInfos:(NSMutableArray *)arg1 ;
@end

