/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <libobjc.A.dylib/NFLPipeSegment.h>

@class NFLSubBatchLayout;

@interface NFLDealerPipeSegment : NSObject <NFLPipeSegment> {

	unsigned long long _pipeSegmentType;
	NFLSubBatchLayout* _subBatchLayout;
	/*^block*/id _segmentTypeDescriptionProvider;

}

@property (assign,nonatomic) unsigned long long pipeSegmentType;              //@synthesize pipeSegmentType=_pipeSegmentType - In the implementation block
@property (nonatomic,retain) NFLSubBatchLayout * subBatchLayout;              //@synthesize subBatchLayout=_subBatchLayout - In the implementation block
@property (nonatomic,copy) id segmentTypeDescriptionProvider;                 //@synthesize segmentTypeDescriptionProvider=_segmentTypeDescriptionProvider - In the implementation block
-(void)setSubBatchLayout:(NFLSubBatchLayout *)arg1 ;
-(id)init;
-(void)setSegmentTypeDescriptionProvider:(id)arg1 ;
-(NFLSubBatchLayout *)subBatchLayout;
-(id)segmentTypeDescriptionProvider;
-(id)description;
-(unsigned long long)pipeSegmentType;
-(void)setPipeSegmentType:(unsigned long long)arg1 ;
-(id)initWithSegmentType:(unsigned long long)arg1 subBatchLayout:(id)arg2 segmentTypeDescriptionProvider:(/*^block*/id)arg3 ;
@end

