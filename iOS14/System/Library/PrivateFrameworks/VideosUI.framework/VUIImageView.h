/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIImageView.h>

@class UIImage;

@interface VUIImageView : UIImageView {

	BOOL _selected;
	UIImage* _flatImage;
	UIImage* _highlightOrSelectedImage;

}

@property (nonatomic,retain) UIImage * highlightOrSelectedImage;              //@synthesize highlightOrSelectedImage=_highlightOrSelectedImage - In the implementation block
+(id)imageWithImage:(id)arg1 existingImageView:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setImage:(id)arg1 ;
-(void)_updateImage;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlightOrSelectedImage:(UIImage *)arg1 ;
-(UIImage *)highlightOrSelectedImage;
@end

