/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CFXEffectPickerCollectionViewCell.h>

@class UILabel, UIView;

@interface CFXFilterPickerCollectionViewCell : CFXEffectPickerCollectionViewCell {

	BOOL _compactMode;
	UILabel* _titleView;
	UIView* _selectionView;

}

@property (retain) UILabel * titleView;                                            //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic,__weak) UIView * selectionView;                        //@synthesize selectionView=_selectionView - In the implementation block
@property (assign,getter=isInCompactMode,nonatomic) BOOL compactMode;              //@synthesize compactMode=_compactMode - In the implementation block
+(id)selectionColor;
-(void)setEffect:(id)arg1 ;
-(UILabel *)titleView;
-(void)setSelectionView:(UIView *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setTitleView:(UILabel *)arg1 ;
-(UIView *)selectionView;
-(BOOL)isInCompactMode;
-(void)setCompactMode:(BOOL)arg1 ;
-(void)CFX_updateLayerProperties;
-(void)CFX_updateTitle;
-(void)CFX_updateSelectionView;
-(void)configureCellAppearence;
@end

