/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(void)setEffect:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)titleView;
-(void)setTitleView:(UILabel *)arg1 ;
-(UIView *)selectionView;
-(void)setSelectionView:(UIView *)arg1 ;
-(void)setCompactMode:(BOOL)arg1 ;
-(void)CFX_updateLayerProperties;
-(BOOL)isInCompactMode;
-(void)CFX_updateTitle;
-(void)CFX_updateSelectionView;
-(void)configureCellAppearence;
@end

