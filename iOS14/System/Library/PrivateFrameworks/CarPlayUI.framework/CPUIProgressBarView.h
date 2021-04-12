/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface CPUIProgressBarView : UIView {

	UIView* _overallBarView;
	UIView* _progressBarView;
	double _progress;

}

@property (nonatomic,retain) UIView * overallBarView;               //@synthesize overallBarView=_overallBarView - In the implementation block
@property (nonatomic,retain) UIView * progressBarView;              //@synthesize progressBarView=_progressBarView - In the implementation block
@property (assign,nonatomic) double progress;                       //@synthesize progress=_progress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(UIView *)overallBarView;
-(UIView *)progressBarView;
-(void)setOverallBarView:(UIView *)arg1 ;
-(void)setProgressBarView:(UIView *)arg1 ;
@end

