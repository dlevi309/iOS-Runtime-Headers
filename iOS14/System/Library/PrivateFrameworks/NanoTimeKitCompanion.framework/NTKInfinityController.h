/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NTKInfinityDataSource, NSMutableOrderedSet, NSArray, NTKInfinityListing;

@interface NTKInfinityController : NSObject {

	BOOL _shouldForceActionForTap;
	NTKInfinityDataSource* _dataSource;
	unsigned long long _currentCharacter;
	NSMutableOrderedSet* _recentlyPlayedActions;
	NSMutableOrderedSet* _recentlyPlayedMagicMoments;
	long long _currentReviewListingIndex;
	unsigned long long _reviewDirection;
	NSArray* _reviewModeListings;
	unsigned long long _controllerMode;
	unsigned long long _currentStyle;
	NTKInfinityListing* _currentListing;
	NTKInfinityListing* _preparedListing;

}

@property (assign,nonatomic) unsigned long long currentStyle;                   //@synthesize currentStyle=_currentStyle - In the implementation block
@property (nonatomic,retain) NTKInfinityListing * currentListing;               //@synthesize currentListing=_currentListing - In the implementation block
@property (nonatomic,retain) NTKInfinityListing * preparedListing;              //@synthesize preparedListing=_preparedListing - In the implementation block
@property (assign,nonatomic) unsigned long long controllerMode;                 //@synthesize controllerMode=_controllerMode - In the implementation block
-(unsigned long long)currentStyle;
-(unsigned long long)controllerMode;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setCurrentStyle:(unsigned long long)arg1 ;
-(void)setControllerMode:(unsigned long long)arg1 ;
-(id)initForDevice:(id)arg1 ;
-(NTKInfinityListing *)currentListing;
-(void)setCurrentListing:(NTKInfinityListing *)arg1 ;
-(id)_nextToyboxListing;
-(id)_nextReviewListing;
-(id)_listingsOfTypes:(id)arg1 ;
-(id)nextListing;
-(id)_recentlyPlayedListings;
-(void)invalidateCurrentListing;
-(unsigned long long)_maxRecentlyPlayedMagicMoments;
-(unsigned long long)_maxRecentlyPlayedActions;
-(unsigned long long)characterFromStyle:(unsigned long long)arg1 ;
-(unsigned long long)_modeFromStyle:(unsigned long long)arg1 ;
-(id)posterImageForStyle:(unsigned long long)arg1 ;
-(id)currentStyleComplicationColor;
-(id)complicationColorForStyle:(unsigned long long)arg1 ;
-(void)prepareListing;
-(id)nextQueueListing;
-(void)prepareUserTapAction;
-(void)invalidatePreparedListing;
-(void)startedPlayingListing:(id)arg1 ;
-(id)currentPosterImage;
-(id)currentComplicationColor;
-(void)setSequentialDirection:(unsigned long long)arg1 ;
-(unsigned long long)totalReviewListings;
-(long long)currentReviewIndex;
-(NTKInfinityListing *)preparedListing;
-(void)setPreparedListing:(NTKInfinityListing *)arg1 ;
@end

