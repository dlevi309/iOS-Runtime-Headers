/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setImage:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateImage;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlightOrSelectedImage:(UIImage *)arg1 ;
-(UIImage *)highlightOrSelectedImage;
@end

