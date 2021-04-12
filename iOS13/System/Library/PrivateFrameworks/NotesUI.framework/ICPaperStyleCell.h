/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(UIImageView *)imageView;
-(void)setSelected:(BOOL)arg1 ;
-(UIView *)selectionView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setSelectionView:(UIView *)arg1 ;
-(void)setupCell;
-(id)preferredTintColor;
@end

