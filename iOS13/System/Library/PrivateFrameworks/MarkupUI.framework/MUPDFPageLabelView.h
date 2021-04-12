/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
*/

#import <MarkupUI/MarkupUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIVisualEffectView, UIBlurEffect, NSTimer;

@interface MUPDFPageLabelView : UIView {

	UILabel* _label;
	UIVisualEffectView* _blurView;
	UIBlurEffect* _blurEffect;
	NSTimer* _timer;
	unsigned long long currentPageIndex;

}

@property (getter=isTimerInstalled,nonatomic,readonly) BOOL timerInstalled; 
@property (assign,nonatomic) unsigned long long currentPageIndex; 
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)clearTimer;
-(double)_fadeOutDuration;
-(void)fadeOut;
-(BOOL)isTimerInstalled;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(void)showNowInSuperView:(id)arg1 atOrigin:(CGPoint)arg2 withText:(id)arg3 animated:(BOOL)arg4 ;
-(double)_fadeOutDelay;
@end

