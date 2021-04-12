/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;

@interface CKEditableSearchResultCell : UICollectionViewCell {

	BOOL __ck_editing;
	UIImageView* _checkmarkView;
	UIImageView* _imageView;
	UIImageView* _selectionOverlay;

}

@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing;              //@synthesize _ck_editing=__ck_editing - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                                               //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * selectionOverlay;                                            //@synthesize selectionOverlay=_selectionOverlay - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(BOOL)_ck_isEditing;
-(void)_ck_setEditing:(BOOL)arg1 ;
-(UIImageView *)selectionOverlay;
-(void)setSelectionOverlay:(UIImageView *)arg1 ;
@end

