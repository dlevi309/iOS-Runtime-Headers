/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol CKAppMenuCollectionViewCellDelegate;
@class UILabel, UIImageView, UIView;

@interface CKAppMenuCollectionViewCell : UICollectionViewCell {

	UILabel* _titleLabel;
	UIImageView* _imageView;
	id<CKAppMenuCollectionViewCellDelegate> _delegate;
	UIView* _selectionView;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * selectionView;                                               //@synthesize selectionView=_selectionView - In the implementation block
@property (assign,nonatomic,__weak) id<CKAppMenuCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelectionView:(UIView *)arg1 ;
-(UIImageView *)imageView;
-(id<CKAppMenuCollectionViewCellDelegate>)delegate;
-(void)setSelected:(BOOL)arg1 ;
-(void)setDelegate:(id<CKAppMenuCollectionViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(UIView *)selectionView;
-(void)didHoverOverCell:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
@end

