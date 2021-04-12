/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TVRowHosting.h>

@class UIView, UIVisualEffectView, NSString;

@interface VUIUpNextBannerView : UIView <TVRowHosting> {

	struct {
		BOOL respondsToRowMetricsForExpectedWidth;
		BOOL respondsToShouldBindRowsTogether;
		BOOL respondsToShowcaseRowMetricsForExpectedWidth;
	}  _shelfViewFlags;
	UIView* _shelfView;
	UIVisualEffectView* _backgroundVisualEffectView;

}

@property (nonatomic,retain) UIView * shelfView;                                           //@synthesize shelfView=_shelfView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundVisualEffectView;              //@synthesize backgroundVisualEffectView=_backgroundVisualEffectView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateAppearance;
-(UIVisualEffectView *)backgroundVisualEffectView;
-(void)setBackgroundVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setShelfView:(UIView *)arg1 ;
-(UIView *)shelfView;
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 ;
-(BOOL)shouldBindRowsTogether;
-(id)initWithFrame:(CGRect)arg1 addBlurBackground:(BOOL)arg2 ;
@end

