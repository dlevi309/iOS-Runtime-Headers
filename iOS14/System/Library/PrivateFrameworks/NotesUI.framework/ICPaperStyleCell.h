/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UIView;

@interface ICPaperStyleCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIView* _selectionView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * selectionView;               //@synthesize selectionView=_selectionView - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(id)preferredTintColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelectionView:(UIView *)arg1 ;
-(BOOL)isAccessibilityElement;
-(UIImageView *)imageView;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(unsigned long long)accessibilityTraits;
-(UIView *)selectionView;
-(id)accessibilityHint;
-(void)setupCell;
@end

