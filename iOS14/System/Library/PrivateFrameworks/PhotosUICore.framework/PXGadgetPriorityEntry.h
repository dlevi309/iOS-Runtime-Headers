/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXForYouRankable;
@class NSDate;

@interface PXGadgetPriorityEntry : NSObject {

	id<PXForYouRankable> _rankable;
	NSDate* _cachedPriorityDate;
	long long _currentRank;

}

@property (nonatomic,retain) id<PXForYouRankable> rankable;              //@synthesize rankable=_rankable - In the implementation block
@property (nonatomic,retain) NSDate * cachedPriorityDate;                //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (assign,nonatomic) long long currentRank;                      //@synthesize currentRank=_currentRank - In the implementation block
-(id<PXForYouRankable>)rankable;
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
-(void)setRankable:(id<PXForYouRankable>)arg1 ;
-(long long)currentRank;
-(void)setCurrentRank:(long long)arg1 ;
@end

