/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIView, UILabel;

@interface HUQuickControlStepperSegmentView : UIView {

	BOOL _isSegmentViewHighlighted;
	NSString* _title;
	unsigned long long _segmentLocation;
	double _cornerRadius;
	unsigned long long _reachabilityState;
	UIView* _highlightedOverlayView;
	UILabel* _titleLabel;
	unsigned long long _style;
	unsigned long long _orientation;
	unsigned long long _controlSize;

}

@property (nonatomic,retain) UIView * highlightedOverlayView;                   //@synthesize highlightedOverlayView=_highlightedOverlayView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) unsigned long long style;                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long orientation;                    //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) unsigned long long controlSize;                    //@synthesize controlSize=_controlSize - In the implementation block
@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL isSegmentViewHighlighted;                     //@synthesize isSegmentViewHighlighted=_isSegmentViewHighlighted - In the implementation block
@property (assign,nonatomic) unsigned long long segmentLocation;                //@synthesize segmentLocation=_segmentLocation - In the implementation block
@property (assign,nonatomic) double cornerRadius;                               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) unsigned long long reachabilityState;              //@synthesize reachabilityState=_reachabilityState - In the implementation block
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)orientation;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setOrientation:(unsigned long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(double)cornerRadius;
-(unsigned long long)controlSize;
-(void)setControlSize:(unsigned long long)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateTitleLabel;
-(unsigned long long)reachabilityState;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 orientation:(unsigned long long)arg2 controlSize:(unsigned long long)arg3 ;
-(void)setSegmentLocation:(unsigned long long)arg1 ;
-(void)setIsSegmentViewHighlighted:(BOOL)arg1 ;
-(void)_createTitleLabelIfNecessary;
-(void)_updateUIHighlightedOverlayView;
-(UIView *)highlightedOverlayView;
-(BOOL)isSegmentViewHighlighted;
-(unsigned long long)segmentLocation;
-(void)setHighlightedOverlayView:(UIView *)arg1 ;
@end

