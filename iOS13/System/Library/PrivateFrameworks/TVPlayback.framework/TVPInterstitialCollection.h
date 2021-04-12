/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSArray;

@interface TVPInterstitialCollection : NSObject {

	NSArray* _interstitials;
	NSArray* _interstitialsWithAdjacentsMerged;
	id _backingData;

}

@property (nonatomic,retain) NSArray * interstitials;                                 //@synthesize interstitials=_interstitials - In the implementation block
@property (nonatomic,retain) NSArray * interstitialsWithAdjacentsMerged;              //@synthesize interstitialsWithAdjacentsMerged=_interstitialsWithAdjacentsMerged - In the implementation block
@property (nonatomic,retain) id backingData;                                          //@synthesize backingData=_backingData - In the implementation block
-(void)setInterstitials:(NSArray *)arg1 ;
-(NSArray *)interstitials;
-(NSArray *)interstitialsWithAdjacentsMerged;
-(id)initWithInterstitials:(id)arg1 ;
-(double)timeAdjustedByRemovingInterstitials:(double)arg1 ;
-(double)timeAdjustedByIncludingInterstitials:(double)arg1 ;
-(id)interstitialForTime:(double)arg1 ;
-(id)mergedInterstitialForTime:(double)arg1 ;
-(void)setInterstitialsWithAdjacentsMerged:(NSArray *)arg1 ;
-(id)backingData;
-(void)setBackingData:(id)arg1 ;
@end

