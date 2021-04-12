/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/CFXEffectPickerView.h>
#import <libobjc.A.dylib/JTCollectionViewDelegate.h>

@class UIView, JTCollectionView, JTCollectionViewFlowLayout, NSString;

@interface CFXOverlayEffectPickerView : CFXEffectPickerView <JTCollectionViewDelegate> {

	UIView* _contentView;
	JTCollectionView* _collectionView;
	JTCollectionViewFlowLayout* _collectionViewLayout;

}

@property (assign,nonatomic,__weak) UIView * contentView;                                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) JTCollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) JTCollectionViewFlowLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(JTCollectionView *)collectionView;
-(void)setCollectionViewLayout:(JTCollectionViewFlowLayout *)arg1 ;
-(void)setCollectionView:(JTCollectionView *)arg1 ;
-(JTCollectionViewFlowLayout *)collectionViewLayout;
-(void)subviewsDidLoad;
-(id)effectPickerNibName;
-(id)effectPickerCellNibName;
-(id)effectPickerCellReuseIdentifier;
-(void)updateThumbnailColumnSizeForCollectionSize;
-(void)didResizeCollectionViewToSize:(CGSize)arg1 ;
@end

