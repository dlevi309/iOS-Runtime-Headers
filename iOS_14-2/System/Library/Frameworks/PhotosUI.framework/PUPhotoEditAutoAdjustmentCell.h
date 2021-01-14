/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditBaseAdjustmentCell.h>

@protocol PUPhotoEditBaseAdjustmentCellDelegate;
@class UITapGestureRecognizer;

@interface PUPhotoEditAutoAdjustmentCell : PUPhotoEditBaseAdjustmentCell {

	id<PUPhotoEditBaseAdjustmentCellDelegate> _delegate;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoEditBaseAdjustmentCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PUPhotoEditBaseAdjustmentCellDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setImageName:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)handleButton:(id)arg1 ;
-(void)setDelegate:(id<PUPhotoEditBaseAdjustmentCellDelegate>)arg1 ;
-(void)_configureContainerButton;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id)initWithCoder:(id)arg1 ;
@end

