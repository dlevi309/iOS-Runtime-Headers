/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIImageView, UIImage;

@interface _NTKCPhotoListCell : UICollectionViewCell {

	UIView* _selectionOverlayView;
	UIImageView* _selectionBadge;
	UIView* _highlightOverlayView;
	UIView* _content;
	UIImageView* _contentImageView;
	CGRect _crop;

}

@property (nonatomic,retain) UIImage * photo; 
@property (assign,nonatomic) CGRect crop;                  //@synthesize crop=_crop - In the implementation block
+(id)reuseIdentifier;
-(CGRect)crop;
-(void)setCrop:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)photo;
-(void)setPhoto:(UIImage *)arg1 ;
@end

