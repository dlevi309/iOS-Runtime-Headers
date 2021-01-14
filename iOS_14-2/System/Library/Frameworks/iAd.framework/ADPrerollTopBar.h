/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIView.h>

@protocol ADPrerollTopBarDelegate;
@class UIStatusBar, ADPrerollButton, ADProgressView;

@interface ADPrerollTopBar : UIView {

	BOOL _isFullscreen;
	BOOL _layoutForExpandedSize;
	id<ADPrerollTopBarDelegate> _delegate;
	UIStatusBar* _statusBar;
	ADPrerollButton* _doneButton;
	ADProgressView* _progressView;

}

@property (nonatomic,retain) UIStatusBar * statusBar;                                  //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) ADPrerollButton * doneButton;                             //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) ADProgressView * progressView;                            //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) id<ADPrerollTopBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFullscreen;                                        //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (assign,nonatomic) BOOL layoutForExpandedSize;                               //@synthesize layoutForExpandedSize=_layoutForExpandedSize - In the implementation block
-(ADPrerollButton *)doneButton;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(void)setDoneButton:(ADPrerollButton *)arg1 ;
-(BOOL)isFullscreen;
-(double)requiredHeight;
-(UIStatusBar *)statusBar;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<ADPrerollTopBarDelegate>)delegate;
-(void)setDelegate:(id<ADPrerollTopBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setProgressView:(ADProgressView *)arg1 ;
-(ADProgressView *)progressView;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)setElapsedTime:(double)arg1 totalTime:(double)arg2 ;
-(void)_scaleToFillButtonTapped:(id)arg1 ;
-(void)_scaleToFitButtonTapped:(id)arg1 ;
-(void)setLayoutForExpandedSize:(BOOL)arg1 ;
-(BOOL)layoutForExpandedSize;
@end

