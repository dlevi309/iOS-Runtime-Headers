/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	CGRect _lastLayoutBounds;

}

@property (nonatomic,retain) NUCrossFadeTitleView * titleView;                              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NUCrossFadeTitleView * incomingTitleView;                      //@synthesize incomingTitleView=_incomingTitleView - In the implementation block
@property (nonatomic,readonly) NUSlideViewAnimator * slideAnimator;                         //@synthesize slideAnimator=_slideAnimator - In the implementation block
@property (nonatomic,readonly) NUFadeViewAnimator * fadeAnimator;                           //@synthesize fadeAnimator=_fadeAnimator - In the implementation block
@property (nonatomic,readonly) NUAnimationQueue * animationQueue;                           //@synthesize animationQueue=_animationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> lingerSemaphore;              //@synthesize lingerSemaphore=_lingerSemaphore - In the implementation block
@property (assign,nonatomic) CGRect lastLayoutBounds;                                       //@synthesize lastLayoutBounds=_lastLayoutBounds - In the implementation block
@property (nonatomic,retain) id<NUTitleViewStyler> styler;                                  //@synthesize styler=_styler - In the implementation block
@property (assign,nonatomic,__weak) id<NUTitleViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
-(id<NUTitleViewStyler>)styler;
-(id)initWithStyler:(id)arg1 ;
-(NUCrossFadeTitleView *)titleView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<NUTitleViewDelegate>)delegate;
-(void)applyTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2 ;
-(void)setTitleView:(NUCrossFadeTitleView *)arg1 ;
-(void)setDelegate:(id<NUTitleViewDelegate>)arg1 ;
-(NUSlideViewAnimator *)slideAnimator;
-(void)layoutSubviews;
-(NUAnimationQueue *)animationQueue;
-(NSObject*<OS_dispatch_semaphore>)lingerSemaphore;
-(id)createMaskingLayerForTranslation;
-(NUFadeViewAnimator *)fadeAnimator;
-(id)initWithCoder:(id)arg1 ;
-(void)finishDisplayingTitleViewUpdate:(id)arg1 finished:(/*^block*/id)arg2 ;
-(NUCrossFadeTitleView *)incomingTitleView;
-(void)relayoutWithAnimation:(BOOL)arg1 ;
-(void)setLingerSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setStyler:(id<NUTitleViewStyler>)arg1 ;
-(void)setLastLayoutBounds:(CGRect)arg1 ;
-(void)setIncomingTitleView:(NUCrossFadeTitleView *)arg1 ;
-(CGRect)lastLayoutBounds;
-(void)titleViewHandleTapGuesture;
@end

