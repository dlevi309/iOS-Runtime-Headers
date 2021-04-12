/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCollectionView:(JTCollectionView *)arg1 ;
-(JTCollectionView *)collectionView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setCollectionViewLayout:(JTCollectionViewFlowLayout *)arg1 ;
-(JTCollectionViewFlowLayout *)collectionViewLayout;
-(UIView *)contentView;
-(void)subviewsDidLoad;
-(id)effectPickerNibName;
-(id)effectPickerCellNibName;
-(id)effectPickerCellReuseIdentifier;
-(void)updateThumbnailColumnSizeForCollectionSize;
-(void)didResizeCollectionViewToSize:(CGSize)arg1 ;
@end

