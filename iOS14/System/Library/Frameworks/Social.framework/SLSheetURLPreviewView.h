/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(BOOL)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)_generateAutomaticPreviewForURL:(id)arg1 ;
@end

