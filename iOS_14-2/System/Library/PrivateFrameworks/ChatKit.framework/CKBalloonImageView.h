/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, NSString;

@interface CKBalloonImageView : UIView {

	BOOL _imageHidden;
	UIImage* _image;
	UIImage* _invisibleInkEffectImage;
	NSString* _stickerAccessibilityDescription;

}

@property (nonatomic,retain) UIImage * image;                                         //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * invisibleInkEffectImage;                       //@synthesize invisibleInkEffectImage=_invisibleInkEffectImage - In the implementation block
@property (assign,nonatomic) BOOL imageHidden;                                        //@synthesize imageHidden=_imageHidden - In the implementation block
@property (nonatomic,retain) NSString * stickerAccessibilityDescription;              //@synthesize stickerAccessibilityDescription=_stickerAccessibilityDescription - In the implementation block
-(void)setInvisibleInkEffectImage:(UIImage *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForReuse;
-(BOOL)imageHidden;
-(void)setBounds:(CGRect)arg1 ;
-(UIImage *)image;
-(NSString *)stickerAccessibilityDescription;
-(void)layoutSubviews;
-(void)setImageHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStickerAccessibilityDescription:(NSString *)arg1 ;
-(UIImage *)invisibleInkEffectImage;
@end

