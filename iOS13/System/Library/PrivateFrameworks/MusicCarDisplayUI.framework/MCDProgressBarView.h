/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface MCDProgressBarView : UIView {

	UIView* _overallBarView;
	UIView* _progressBarView;
	double _progress;

}

@property (nonatomic,retain) UIView * overallBarView;               //@synthesize overallBarView=_overallBarView - In the implementation block
@property (nonatomic,retain) UIView * progressBarView;              //@synthesize progressBarView=_progressBarView - In the implementation block
@property (assign,nonatomic) double progress;                       //@synthesize progress=_progress - In the implementation block
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)overallBarView;
-(UIView *)progressBarView;
-(void)setOverallBarView:(UIView *)arg1 ;
-(void)setProgressBarView:(UIView *)arg1 ;
@end

