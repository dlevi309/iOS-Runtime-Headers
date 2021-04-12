/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@class _UILegibilitySettings, SBIconPageIndicatorImageSetResult;

@interface SBIconPageIndicatorImageSetCache : NSObject {

	_UILegibilitySettings* _legibilitySettings;
	SBIconPageIndicatorImageSetResult* _indicatorImageSetResults;
	SBIconPageIndicatorImageSetResult* _searchImageSetResults;
	SBIconPageIndicatorImageSetResult* _cameraImageSetResults;

}

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)pageIndicatorImageSetForLegibilitySettings:(id)arg1 ;
-(id)searchIndicatorImageSetForLegibilitySettings:(id)arg1 ;
-(id)_emptyPageIndicatorSet;
-(id)cameraIndicatorImageSetForLegibilitySettings:(id)arg1 ;
@end

