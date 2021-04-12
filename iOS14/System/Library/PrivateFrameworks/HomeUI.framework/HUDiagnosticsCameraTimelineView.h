/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton;

@interface HUDiagnosticsCameraTimelineView : UIView {

	UILabel* _cameraStatusLabel;
	UILabel* _currentPositionLabel;
	UILabel* _currentEventLabel;
	UIButton* _moreButton;
	UILabel* _currentTimelineStateLabel;

}

@property (nonatomic,retain) UILabel * cameraStatusLabel;                      //@synthesize cameraStatusLabel=_cameraStatusLabel - In the implementation block
@property (nonatomic,retain) UILabel * currentPositionLabel;                   //@synthesize currentPositionLabel=_currentPositionLabel - In the implementation block
@property (nonatomic,retain) UILabel * currentEventLabel;                      //@synthesize currentEventLabel=_currentEventLabel - In the implementation block
@property (nonatomic,retain) UILabel * currentTimelineStateLabel;              //@synthesize currentTimelineStateLabel=_currentTimelineStateLabel - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                            //@synthesize moreButton=_moreButton - In the implementation block
-(void)setMoreButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)moreButton;
-(void)updateWithPlaybackEngine:(id)arg1 ;
-(UILabel *)cameraStatusLabel;
-(UILabel *)currentTimelineStateLabel;
-(UILabel *)currentPositionLabel;
-(UILabel *)currentEventLabel;
-(void)setCameraStatusLabel:(UILabel *)arg1 ;
-(void)setCurrentPositionLabel:(UILabel *)arg1 ;
-(void)setCurrentEventLabel:(UILabel *)arg1 ;
-(void)setCurrentTimelineStateLabel:(UILabel *)arg1 ;
@end

