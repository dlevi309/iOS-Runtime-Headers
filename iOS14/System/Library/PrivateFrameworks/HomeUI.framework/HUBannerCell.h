/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HUGridCellProtocol.h>
#import <libobjc.A.dylib/HUBannerCellProtocol.h>

@protocol HUBannerCellDelegate;
@class UIButton, HUGridStatusBannerCellLayoutOptions, HFItem, UIImageView, UILabel, UIView, NSArray, NSString;

@interface HUBannerCell : UICollectionViewCell <UIGestureRecognizerDelegate, HUGridCellProtocol, HUBannerCellProtocol> {

	BOOL _cellContentsHidden;
	UIButton* _dismissButton;
	HUGridStatusBannerCellLayoutOptions* _layoutOptions;
	HFItem* _item;
	id<HUBannerCellDelegate> _delegate;
	UIButton* _continueButton;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIView* _lineView;
	UIView* _footerView;
	UILabel* _footerViewLabel;
	NSArray* _layoutConstraints;

}

@property (nonatomic,retain) UIImageView * iconImageView;                                                    //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                     //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                                              //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                            //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UILabel * footerViewLabel;                                                      //@synthesize footerViewLabel=_footerViewLabel - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                                                      //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                                    //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<HUBannerCellDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                                       //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) HUGridStatusBannerCellLayoutOptions * layoutOptions;                            //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=areCellContentsHidden,nonatomic) BOOL cellContentsHidden;                           //@synthesize cellContentsHidden=_cellContentsHidden - In the implementation block
@property (assign,getter=isRearranging,nonatomic) BOOL rearranging; 
@property (assign,getter=isPointerInteractionEnabled,nonatomic) BOOL pointerInteractionEnabled; 
@property (assign,nonatomic) double pointerRegionMargin; 
@property (nonatomic,retain) HFItem * item;                                                                  //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
+(BOOL)requiresConstraintBasedLayout;
+(Class)layoutOptionsClass;
-(UILabel *)titleLabel;
-(UIImageView *)iconImageView;
-(UIView *)footerView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HUBannerCellDelegate>)delegate;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(UIView *)lineView;
-(void)setDelegate:(id<HUBannerCellDelegate>)arg1 ;
-(NSString *)description;
-(void)updateConstraints;
-(void)setDismissButton:(UIButton *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(HUGridStatusBannerCellLayoutOptions *)layoutOptions;
-(void)setFooterView:(UIView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIButton *)continueButton;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIButton *)dismissButton;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setContinueButton:(UIButton *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_dismissButtonTapped:(id)arg1 ;
-(void)setLineView:(UIView *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setLayoutOptions:(HUGridStatusBannerCellLayoutOptions *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutOptionsDidChange;
-(BOOL)areCellContentsHidden;
-(void)setCellContentsHidden:(BOOL)arg1 ;
-(UILabel *)footerViewLabel;
-(BOOL)isCellSizeSubclassSmallPhone;
-(void)setupCustomCellAppearence;
-(void)setBackgroundColor;
-(void)_setupCommonCellAppearance;
-(void)_footerViewTapped:(id)arg1 ;
-(void)setFooterViewLabel:(UILabel *)arg1 ;
@end

