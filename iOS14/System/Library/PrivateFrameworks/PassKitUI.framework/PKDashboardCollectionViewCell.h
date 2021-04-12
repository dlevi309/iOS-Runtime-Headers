/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface PKDashboardCollectionViewCell : UICollectionViewCell {

	UIView* _separatorView;
	BOOL _showsBottomSeparator;
	BOOL _bottomSeparatorVisible;
	unsigned long long _maskType;
	CGRect _previousMaskBounds;
	unsigned long long _previousMaskType;
	BOOL _customHorizontalInset;
	double _horizontalInset;
	BOOL _wantsCustomAppearance;
	BOOL _wantsDefaultHighlightBehavior;

}

@property (assign,nonatomic) BOOL wantsCustomAppearance;                      //@synthesize wantsCustomAppearance=_wantsCustomAppearance - In the implementation block
@property (assign,nonatomic) BOOL wantsDefaultHighlightBehavior;              //@synthesize wantsDefaultHighlightBehavior=_wantsDefaultHighlightBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long maskType; 
@property (assign,nonatomic) BOOL showsBottomSeparator;                       //@synthesize showsBottomSeparator=_showsBottomSeparator - In the implementation block
@property (assign,nonatomic) double horizontalInset; 
+(double)defaultHorizontalInset;
+(id)defaultBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMaskType:(unsigned long long)arg1 ;
-(void)updateMask;
-(double)_bottomSeparatorAlpha;
-(void)setBottomSeparatorVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)wantsCustomAppearance;
-(BOOL)wantsDefaultHighlightBehavior;
-(BOOL)showsBottomSeparator;
-(void)prepareForReuse;
-(void)setWantsDefaultHighlightBehavior:(BOOL)arg1 ;
-(void)setWantsCustomAppearance:(BOOL)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)maskType;
-(double)horizontalInset;
-(void)setHorizontalInset:(double)arg1 ;
-(void)setShowsBottomSeparator:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

