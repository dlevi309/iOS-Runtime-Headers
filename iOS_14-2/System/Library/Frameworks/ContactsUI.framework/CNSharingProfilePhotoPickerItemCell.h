/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CNSharingProfilePhotoPickerItem, CAShapeLayer, UIImageView;

@interface CNSharingProfilePhotoPickerItemCell : UICollectionViewCell {

	BOOL _isSmallScreen;
	CNSharingProfilePhotoPickerItem* _pickerItem;
	CAShapeLayer* _selectionStrokeLayer;
	UIImageView* _imageView;
	CGSize _originalSize;

}

@property (nonatomic,retain) CAShapeLayer * selectionStrokeLayer;                       //@synthesize selectionStrokeLayer=_selectionStrokeLayer - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) CGSize originalSize;                                       //@synthesize originalSize=_originalSize - In the implementation block
@property (assign,nonatomic) BOOL isSmallScreen;                                        //@synthesize isSmallScreen=_isSmallScreen - In the implementation block
@property (nonatomic,retain) CNSharingProfilePhotoPickerItem * pickerItem;              //@synthesize pickerItem=_pickerItem - In the implementation block
+(id)reuseIdentifier;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CNSharingProfilePhotoPickerItem *)pickerItem;
-(UIImageView *)imageView;
-(BOOL)isSmallScreen;
-(void)setPickerItem:(CNSharingProfilePhotoPickerItem *)arg1 ;
-(void)updateWithImage:(id)arg1 ;
-(id)selectionBezierPath;
-(void)setIsSmallScreen:(BOOL)arg1 ;
-(CAShapeLayer *)selectionStrokeLayer;
-(void)setSelectionStrokeLayer:(CAShapeLayer *)arg1 ;
-(void)setOriginalSize:(CGSize)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)originalSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

