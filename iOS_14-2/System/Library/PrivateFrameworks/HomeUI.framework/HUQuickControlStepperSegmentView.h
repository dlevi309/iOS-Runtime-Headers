/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIView, UIVisualEffectView, UILabel;

@interface HUQuickControlStepperSegmentView : UIView {

	BOOL _isSegmentViewHighlighted;
	NSString* _title;
	unsigned long long _segmentLocation;
	double _cornerRadius;
	unsigned long long _reachabilityState;
	UIView* _highlightedOverlayView;
	UIVisualEffectView* _titleLabelEffectView;
	UILabel* _titleLabel;
	unsigned long long _style;
	unsigned long long _orientation;
	unsigned long long _controlSize;

}

@property (nonatomic,retain) UIView * highlightedOverlayView;                        //@synthesize highlightedOverlayView=_highlightedOverlayView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * titleLabelEffectView;              //@synthesize titleLabelEffectView=_titleLabelEffectView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) unsigned long long style;                               //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long orientation;                         //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) unsigned long long controlSize;                         //@synthesize controlSize=_controlSize - In the implementation block
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL isSegmentViewHighlighted;                          //@synthesize isSegmentViewHighlighted=_isSegmentViewHighlighted - In the implementation block
@property (assign,nonatomic) unsigned long long segmentLocation;                     //@synthesize segmentLocation=_segmentLocation - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) unsigned long long reachabilityState;                   //@synthesize reachabilityState=_reachabilityState - In the implementation block
-(UILabel *)titleLabel;
-(void)setControlSize:(unsigned long long)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(unsigned long long)controlSize;
-(void)setTintColor:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(unsigned long long)orientation;
-(void)_updateTitleLabel;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)style;
-(NSString *)title;
-(void)dealloc;
-(void)setOrientation:(unsigned long long)arg1 ;
-(unsigned long long)reachabilityState;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 orientation:(unsigned long long)arg2 controlSize:(unsigned long long)arg3 ;
-(void)setSegmentLocation:(unsigned long long)arg1 ;
-(void)setIsSegmentViewHighlighted:(BOOL)arg1 ;
-(void)_createTitleLabelIfNecessary;
-(void)_updateUIHighlightedOverlayView;
-(UIView *)highlightedOverlayView;
-(UIVisualEffectView *)titleLabelEffectView;
-(void)setTitleLabelEffectView:(UIVisualEffectView *)arg1 ;
-(BOOL)isSegmentViewHighlighted;
-(unsigned long long)segmentLocation;
-(void)setHighlightedOverlayView:(UIView *)arg1 ;
@end

