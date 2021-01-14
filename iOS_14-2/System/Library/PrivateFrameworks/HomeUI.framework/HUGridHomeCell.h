/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCell.h>

@class HFItem, UIImageView, UILabel, UIStackView, UIImage, UIVisualEffectView, NSArray, HUCCInfoMosaicGridView, HUMosaicLayoutGeometry;

@interface HUGridHomeCell : HUGridCell {

	BOOL _shouldShowHomeName;
	BOOL _shouldShowAsEmptyHome;
	HFItem* _item;
	UIImageView* _iconView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIStackView* _verticalStackView;
	UIImage* _homeImage;
	UIVisualEffectView* _secondaryLabelEffectView;
	NSArray* _cellConstraints;
	HUCCInfoMosaicGridView* _infoView;

}

@property (nonatomic,retain) UIImageView * iconView;                                     //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIImage * homeImage;                                        //@synthesize homeImage=_homeImage - In the implementation block
@property (nonatomic,retain) UIStackView * verticalStackView;                            //@synthesize verticalStackView=_verticalStackView - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                                     //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * secondaryLabelEffectView;              //@synthesize secondaryLabelEffectView=_secondaryLabelEffectView - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                                   //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) NSArray * cellConstraints;                                  //@synthesize cellConstraints=_cellConstraints - In the implementation block
@property (nonatomic,retain) HUCCInfoMosaicGridView * infoView;                          //@synthesize infoView=_infoView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowHomeName;                                    //@synthesize shouldShowHomeName=_shouldShowHomeName - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAsEmptyHome;                                 //@synthesize shouldShowAsEmptyHome=_shouldShowAsEmptyHome - In the implementation block
@property (nonatomic,retain) HUMosaicLayoutGeometry * mosaicLayoutGeometry; 
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_invalidateConstraints;
-(id)item;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)prepareForReuse;
-(UILabel *)primaryLabel;
-(void)setItem:(id)arg1 ;
-(void)updateConstraints;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(UIStackView *)verticalStackView;
-(void)_updatePrimaryLabel;
-(void)setVerticalStackView:(UIStackView *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(HUCCInfoMosaicGridView *)infoView;
-(UILabel *)secondaryLabel;
-(void)layoutOptionsDidChange;
-(UIVisualEffectView *)secondaryLabelEffectView;
-(void)setSecondaryLabelEffectView:(UIVisualEffectView *)arg1 ;
-(HUMosaicLayoutGeometry *)mosaicLayoutGeometry;
-(void)setMosaicLayoutGeometry:(HUMosaicLayoutGeometry *)arg1 ;
-(void)_setupCell;
-(void)setShouldShowHomeName:(BOOL)arg1 ;
-(void)setShouldShowAsEmptyHome:(BOOL)arg1 ;
-(BOOL)shouldShowAsEmptyHome;
-(void)setInfoView:(HUCCInfoMosaicGridView *)arg1 ;
-(BOOL)shouldShowHomeName;
-(NSArray *)cellConstraints;
-(void)setCellConstraints:(NSArray *)arg1 ;
-(id)cellLayoutOptions;
-(UIImage *)homeImage;
-(void)setHomeImage:(UIImage *)arg1 ;
@end

