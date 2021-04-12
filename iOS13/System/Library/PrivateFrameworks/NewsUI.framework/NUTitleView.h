/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NUTitleViewStyler, NUTitleViewDelegate, OS_dispatch_semaphore;
@class NUCrossFadeTitleView, NUSlideViewAnimator, NUFadeViewAnimator, NUAnimationQueue, NSObject;

@interface NUTitleView : UIView {

	id<NUTitleViewStyler> _styler;
	id<NUTitleViewDelegate> _delegate;
	NUCrossFadeTitleView* _titleView;
	NUCrossFadeTitleView* _incomingTitleView;
	NUSlideViewAnimator* _slideAnimator;
	NUFadeViewAnimator* _fadeAnimator;
	NUAnimationQueue* _animationQueue;
	NSObject*<OS_dispatch_semaphore> _lingerSemaphore;

}

@property (nonatomic,retain) NUCrossFadeTitleView * titleView;                              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NUCrossFadeTitleView * incomingTitleView;                      //@synthesize incomingTitleView=_incomingTitleView - In the implementation block
@property (nonatomic,readonly) NUSlideViewAnimator * slideAnimator;                         //@synthesize slideAnimator=_slideAnimator - In the implementation block
@property (nonatomic,readonly) NUFadeViewAnimator * fadeAnimator;                           //@synthesize fadeAnimator=_fadeAnimator - In the implementation block
@property (nonatomic,readonly) NUAnimationQueue * animationQueue;                           //@synthesize animationQueue=_animationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> lingerSemaphore;              //@synthesize lingerSemaphore=_lingerSemaphore - In the implementation block
@property (nonatomic,retain) id<NUTitleViewStyler> styler;                                  //@synthesize styler=_styler - In the implementation block
@property (assign,nonatomic,__weak) id<NUTitleViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<NUTitleViewDelegate>)delegate;
-(void)setDelegate:(id<NUTitleViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NUCrossFadeTitleView *)titleView;
-(void)setTitleView:(NUCrossFadeTitleView *)arg1 ;
-(id)initWithStyler:(id)arg1 ;
-(void)applyTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2 ;
-(void)setStyler:(id<NUTitleViewStyler>)arg1 ;
-(id<NUTitleViewStyler>)styler;
-(void)relayoutWithAnimation:(BOOL)arg1 ;
-(void)titleViewHandleTapGuesture;
-(NUSlideViewAnimator *)slideAnimator;
-(NUCrossFadeTitleView *)incomingTitleView;
-(NUAnimationQueue *)animationQueue;
-(NSObject*<OS_dispatch_semaphore>)lingerSemaphore;
-(void)setLingerSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)finishDisplayingTitleViewUpdate:(id)arg1 finished:(/*^block*/id)arg2 ;
-(NUFadeViewAnimator *)fadeAnimator;
-(void)setIncomingTitleView:(NUCrossFadeTitleView *)arg1 ;
-(id)createMaskingLayerForTranslation;
@end

