/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIImageView, UIImage;

@interface NTKCPhotoListCell : UICollectionViewCell {

	UIView* _selectionOverlayView;
	UIImageView* _selectionBadge;
	UIView* _highlightOverlayView;
	UIView* _content;
	UIImageView* _contentImageView;
	unsigned long long _index;
	CGRect _crop;

}

@property (nonatomic,retain) UIImage * photo; 
@property (assign,nonatomic) CGRect crop;                           //@synthesize crop=_crop - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)reuseIdentifier;
-(void)setPhoto:(UIImage *)arg1 ;
-(unsigned long long)index;
-(CGRect)crop;
-(UIImage *)photo;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setCrop:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

