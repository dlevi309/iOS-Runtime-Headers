/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clearTimer;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isTimerInstalled;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(void)showNowInSuperView:(id)arg1 atOrigin:(CGPoint)arg2 withText:(id)arg3 animated:(BOOL)arg4 ;
-(void)setText:(id)arg1 ;
-(double)_fadeOutDuration;
-(unsigned long long)currentPageIndex;
-(double)_fadeOutDelay;
-(void)fadeOut;
-(void)sizeToFit;
-(void)dealloc;
@end

