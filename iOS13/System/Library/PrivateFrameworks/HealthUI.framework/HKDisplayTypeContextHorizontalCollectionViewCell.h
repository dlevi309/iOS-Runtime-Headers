/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol HKDisplayTypeContextHorizontalCollectionViewCellDelegate;
@class UILabel, UIButton, HKUIMetricColors, NSArray, HKDisplayTypeContextItem;

@interface HKDisplayTypeContextHorizontalCollectionViewCell : UICollectionViewCell {

	UILabel* _titleLabel;
	UIButton* _infoButton;
	UILabel* _valueLabel;
	UILabel* _unitLabel;
	UILabel* _dateLabel;
	HKUIMetricColors* _currentMetricColors;
	NSArray* _horizontalConstraints;
	HKDisplayTypeContextItem* _contextItem;
	id<HKDisplayTypeContextHorizontalCollectionViewCellDelegate> _delegate;

}

@property (nonatomic,retain) HKDisplayTypeContextItem * contextItem;                                                    //@synthesize contextItem=_contextItem - In the implementation block
@property (assign,nonatomic,__weak) id<HKDisplayTypeContextHorizontalCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)reuseIdentifier;
-(id<HKDisplayTypeContextHorizontalCollectionViewCellDelegate>)delegate;
-(void)setDelegate:(id<HKDisplayTypeContextHorizontalCollectionViewCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)infoButtonTapped:(id)arg1 ;
-(id)_titleLabelFont;
-(void)updateUI:(BOOL)arg1 ;
-(id)_dateLabelFont;
-(void)setContextItem:(HKDisplayTypeContextItem *)arg1 ;
-(id)_valueLabelFont;
-(id)_unitLabelFont;
-(id)_buildHorizontalConstraints;
-(void)_applyHorizontalDesign;
-(double)_titleLabelBaselineOffsetFromTop;
-(double)_valueLabelBaselineOffsetFromDateLabel;
-(double)_dateBaselineOffsetFromValue;
-(double)_bottomOffsetFromDateBaseline;
-(void)_setActiveForConstraints:(id)arg1 active:(BOOL)arg2 ;
-(void)updateMetricColors:(BOOL)arg1 ;
-(void)updateUIColors;
-(void)_unapplyHorizontalDesign;
-(HKDisplayTypeContextItem *)contextItem;
@end

