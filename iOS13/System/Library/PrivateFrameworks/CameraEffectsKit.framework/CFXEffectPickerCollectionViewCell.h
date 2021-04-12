/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <UIKitCore/UICollectionViewCell.h>

@class CFXEffect, NSString, JTImageView, JTImage;

@interface CFXEffectPickerCollectionViewCell : UICollectionViewCell {

	CFXEffect* _effect;
	NSString* _effectIdentifier;
	JTImageView* _imageView;

}

@property (nonatomic,retain) JTImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) JTImage * image; 
@property (nonatomic,retain) CFXEffect * effect;                       //@synthesize effect=_effect - In the implementation block
@property (nonatomic,retain) NSString * effectIdentifier;              //@synthesize effectIdentifier=_effectIdentifier - In the implementation block
-(void)prepareForReuse;
-(JTImage *)image;
-(void)setImage:(JTImage *)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setEffect:(CFXEffect *)arg1 ;
-(JTImageView *)imageView;
-(CFXEffect *)effect;
-(void)awakeFromNib;
-(void)setImageView:(JTImageView *)arg1 ;
-(void)setEffectIdentifier:(NSString *)arg1 ;
-(NSString *)effectIdentifier;
-(void)configureCellAppearence;
@end

