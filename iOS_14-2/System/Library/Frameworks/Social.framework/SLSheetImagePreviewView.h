/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, NSArray;

@interface SLSheetImagePreviewView : UIView {

	UIImage* _image;
	UIImageView* _imageView;
	NSArray* _principalAttachments;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImageView * imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSArray * principalAttachments;              //@synthesize principalAttachments=_principalAttachments - In the implementation block
+(id)fallbackPreviewImage;
-(void)setImageView:(UIImageView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(UIImage *)image;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)setPreviewImage:(id)arg1 forAttachment:(id)arg2 ;
-(NSArray *)principalAttachments;
-(void)setPrincipalAttachments:(NSArray *)arg1 ;
@end

