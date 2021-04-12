/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIView, UIImageView;

@interface SLSheetBevelledImageView : SLSheetImagePreviewView {

	UIView* _placeholderPreviewView;
	UIImageView* _placeholderGlyphView;
	BOOL _needsURLPlaceholderImage;

}

@property (assign,nonatomic) BOOL needsURLPlaceholderImage;              //@synthesize needsURLPlaceholderImage=_needsURLPlaceholderImage - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)setImage:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(BOOL)needsURLPlaceholderImage;
-(BOOL)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)setNeedsURLPlaceholderImage:(BOOL)arg1 ;
@end

