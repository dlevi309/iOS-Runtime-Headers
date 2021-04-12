/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)setPreviewImage:(id)arg1 forAttachment:(id)arg2 ;
-(NSArray *)principalAttachments;
-(void)setPrincipalAttachments:(NSArray *)arg1 ;
@end

