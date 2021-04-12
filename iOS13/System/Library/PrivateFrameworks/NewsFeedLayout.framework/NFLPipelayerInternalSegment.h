/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@protocol NFLPipeSegment, NFLPipelayerDelegate;
@class NSObject;

@interface NFLPipelayerInternalSegment : NSObject {

	unsigned long long _pipeSegmentType;
	unsigned long long _cumulativeHeadlinesUsedCount;
	NSObject*<NFLPipeSegment> _pipeSegment;
	id<NFLPipelayerDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long pipeSegmentType;                           //@synthesize pipeSegmentType=_pipeSegmentType - In the implementation block
@property (assign,nonatomic) unsigned long long cumulativeHeadlinesUsedCount;              //@synthesize cumulativeHeadlinesUsedCount=_cumulativeHeadlinesUsedCount - In the implementation block
@property (nonatomic,retain) NSObject*<NFLPipeSegment> pipeSegment;                        //@synthesize pipeSegment=_pipeSegment - In the implementation block
@property (assign,nonatomic,__weak) id<NFLPipelayerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
-(id)description;
-(id<NFLPipelayerDelegate>)delegate;
-(void)setDelegate:(id<NFLPipelayerDelegate>)arg1 ;
-(unsigned long long)cumulativeHeadlinesUsedCount;
-(NSObject*<NFLPipeSegment>)pipeSegment;
-(unsigned long long)pipeSegmentType;
-(void)setPipeSegmentType:(unsigned long long)arg1 ;
-(void)setCumulativeHeadlinesUsedCount:(unsigned long long)arg1 ;
-(void)setPipeSegment:(NSObject*<NFLPipeSegment>)arg1 ;
@end

