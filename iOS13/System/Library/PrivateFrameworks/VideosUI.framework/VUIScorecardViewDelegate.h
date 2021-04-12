/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIScorecardViewDelegate <NSObject>
@optional
-(id)backgroundImageForScorecardViewMaterial:(id)arg1;
-(int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;

@required
-(long long)styleForScorecardView:(id)arg1;
-(long long)numberOfRowsInScorecardView:(id)arg1;
-(long long)numberOfScoreValuesForScorecardView:(id)arg1 inRow:(long long)arg2;
-(id)scoreValue:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
-(double)maximumWidthForScorecardView:(id)arg1;

@end

