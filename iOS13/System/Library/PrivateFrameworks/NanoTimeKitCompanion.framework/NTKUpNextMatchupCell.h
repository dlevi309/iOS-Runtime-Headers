/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class NTKUpNextMatchupScoreView, NTKUpNextMatchupUpcomingView, UILayoutGuide;

@interface NTKUpNextMatchupCell : NTKUpNextBaseCell {

	NTKUpNextMatchupScoreView* _scoreView;
	NTKUpNextMatchupUpcomingView* _upcomingView;
	UILayoutGuide* _scoreLayoutGuide;
	UILayoutGuide* _upcomingLayoutGuide;

}
-(void)prepareForReuse;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)configureWithContent:(id)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)setFilterProvider:(id)arg1 ;
-(void)updateTimeLabel;
@end

