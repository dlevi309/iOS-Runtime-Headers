/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <UIKitCore/UICollectionViewCell.h>

@class CFXEffect, NSString, JFXImageView, JTImage;

@interface CFXEffectPickerCollectionViewCell : UICollectionViewCell {

	CFXEffect* _effect;
	NSString* _effectIdentifier;
	JFXImageView* _imageView;

}

@property (nonatomic,retain) JFXImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) JTImage * image; 
@property (nonatomic,retain) CFXEffect * effect;                       //@synthesize effect=_effect - In the implementation block
@property (nonatomic,retain) NSString * effectIdentifier;              //@synthesize effectIdentifier=_effectIdentifier - In the implementation block
-(void)setEffect:(CFXEffect *)arg1 ;
-(void)setImageView:(JFXImageView *)arg1 ;
-(id)accessibilityLabel;
-(CFXEffect *)effect;
-(void)setImage:(JTImage *)arg1 ;
-(BOOL)isAccessibilityElement;
-(JFXImageView *)imageView;
-(void)prepareForReuse;
-(JTImage *)image;
-(unsigned long long)accessibilityTraits;
-(void)awakeFromNib;
-(void)setEffectIdentifier:(NSString *)arg1 ;
-(NSString *)effectIdentifier;
-(void)configureCellAppearence;
@end

