/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TVRowHosting.h>

@class UIView, UIVisualEffectView, UIFocusGuide, NSString;

@interface VUIUpNextBannerView : UIView <TVRowHosting> {

	struct {
		BOOL respondsToRowMetricsForExpectedWidth;
		BOOL respondsToShouldBindRowsTogether;
		BOOL respondsToShowcaseRowMetricsForExpectedWidth;
	}  _shelfViewFlags;
	BOOL _isHostWatchNow;
	UIView* _shelfView;
	UIVisualEffectView* _backgroundVisualEffectView;
	UIFocusGuide* _focusGuide;

}

@property (nonatomic,retain) UIView * shelfView;                                           //@synthesize shelfView=_shelfView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundVisualEffectView;              //@synthesize backgroundVisualEffectView=_backgroundVisualEffectView - In the implementation block
@property (nonatomic,retain) UIFocusGuide * focusGuide;                                    //@synthesize focusGuide=_focusGuide - In the implementation block
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIVisualEffectView *)backgroundVisualEffectView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setShelfView:(UIView *)arg1 ;
-(UIView *)shelfView;
-(void)_updateAppearance;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBackgroundVisualEffectView:(UIVisualEffectView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 addBlurBackground:(BOOL)arg2 isHostWatchNow:(BOOL)arg3 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 ;
-(BOOL)shouldBindRowsTogether;
-(UIFocusGuide *)focusGuide;
-(void)setFocusGuide:(UIFocusGuide *)arg1 ;
@end

