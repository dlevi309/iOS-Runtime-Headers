/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIImage, SLURLPreviewGenerator, UIView, UIImageView;

@interface SLSheetURLPreviewView : SLSheetImagePreviewView {

	UIImage* _shadowImage;
	SLURLPreviewGenerator* _webPreviewGenerator;
	UIView* _placeholderPreviewView;
	UIImageView* _placeholderGlyphView;

}
-(id)init;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)_generateAutomaticPreviewForURL:(id)arg1 ;
@end

