/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUGridCellProtocol.h>

@class HUGridStatusBannerCellLayoutOptions, HFItem, UIButton, UIImageView, UILabel, UIView, NSArray, NSString;

@interface HUStatusBannerCell : UICollectionViewCell <HUGridCellProtocol> {

	BOOL _cellContentsHidden;
	HUGridStatusBannerCellLayoutOptions* _layoutOptions;
	HFItem* _item;
	UIButton* _continueButton;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIView* _lineView;
	UIView* _lipView;
	UILabel* _continueLabel;
	NSArray* _layoutConstraints;

}

@property (nonatomic,retain) UIImageView * iconImageView;                                       //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                        //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                                 //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) UIView * lipView;                                                  //@synthesize lipView=_lipView - In the implementation block
@property (nonatomic,retain) UILabel * continueLabel;                                           //@synthesize continueLabel=_continueLabel - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                                         //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                       //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,retain) HUGridStatusBannerCellLayoutOptions * layoutOptions;               //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                     //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (assign,getter=areCellContentsHidden,nonatomic) BOOL cellContentsHidden;              //@synthesize cellContentsHidden=_cellContentsHidden - In the implementation block
@property (assign,getter=isRearranging,nonatomic) BOOL rearranging; 
+(BOOL)requiresConstraintBasedLayout;
+(Class)layoutOptionsClass;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(HUGridStatusBannerCellLayoutOptions *)layoutOptions;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setContinueButton:(UIButton *)arg1 ;
-(UIButton *)continueButton;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UIView *)lineView;
-(void)setLineView:(UIView *)arg1 ;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)setLayoutOptions:(HUGridStatusBannerCellLayoutOptions *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(BOOL)areCellContentsHidden;
-(void)setCellContentsHidden:(BOOL)arg1 ;
-(void)layoutOptionsDidChange;
-(void)_setupCommonCellAppearance;
-(UIView *)lipView;
-(UILabel *)continueLabel;
-(void)_configureBannerForUnfinishedOnboardingFlowKeyPath:(id)arg1 ;
-(BOOL)_isCellSizeSubclassSmallPhone;
-(void)setLipView:(UIView *)arg1 ;
-(void)setContinueLabel:(UILabel *)arg1 ;
@end

