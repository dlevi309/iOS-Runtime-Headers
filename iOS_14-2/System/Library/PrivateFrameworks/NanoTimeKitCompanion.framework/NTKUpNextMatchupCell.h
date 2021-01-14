/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setFilterProvider:(id)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)configureWithContent:(id)arg1 ;
-(void)updateTimeLabel;
@end

