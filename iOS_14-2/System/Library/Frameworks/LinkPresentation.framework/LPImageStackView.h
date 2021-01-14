/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class NSArray, LPImageViewStyle, NSMutableArray;

@interface LPImageStackView : LPComponentView {

	NSArray* _images;
	LPImageViewStyle* _style;
	NSMutableArray* _imageViews;

}
-(void)layoutComponentView;
-(id)init;
-(id)initWithImages:(id)arg1 style:(id)arg2 ;
-(CGSize)_layoutImagesForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

