/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addLayoutInfo:(id)arg1 ;
-(id)init;
-(NSMutableArray *)layoutInfos;
-(void)setLayoutInfos:(NSMutableArray *)arg1 ;
-(void)setBatchContext:(NFLBatchContext *)arg1 ;
-(void)addLayoutInfos:(id)arg1 ;
-(double)batchHeight;
-(void)setBatchHeight:(double)arg1 ;
-(NFLBatchContext *)batchContext;
@end

