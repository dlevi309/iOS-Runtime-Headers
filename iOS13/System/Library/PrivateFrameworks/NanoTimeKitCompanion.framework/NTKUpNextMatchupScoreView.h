/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class UIImageView, NTKColoringLabel, NSDate, CLKFont, UILayoutGuide, NSArray, NSString;

@interface NTKUpNextMatchupScoreView : UIView <CLKMonochromeComplicationView> {

	UIImageView* _homeLogoImageView;
	NTKColoringLabel* _homeNameLabel;
	NTKColoringLabel* _homeDescriptionLabel;
	UIImageView* _awayLogoIamgeView;
	NTKColoringLabel* _awayNameLabel;
	NTKColoringLabel* _awayDescriptionLabel;
	NTKColoringLabel* _statusLabel;
	NTKColoringLabel* _timeLabel;
	NSDate* _timeForLabel;
	CLKFont* _boldMatchupFont;
	CLKFont* _regularMatchupFont;
	CLKFont* _statusFont;
	UILayoutGuide* _logoLayoutGuide;
	UILayoutGuide* _descriptionLayoutGuide;
	NSArray* _withLogoLayoutConstraints;
	NSArray* _withoutDateLayoutConstraints;
	BOOL _paused;
	id<CLKMonochromeFilterProvider> _filterProvider;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused;                                        //@synthesize paused=_paused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
+(id)_timeStringForFetchDate:(id)arg1 ;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)updateTimeLabel;
-(void)configureWithMatchup:(id)arg1 ;
@end

