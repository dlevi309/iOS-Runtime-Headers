/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class NSArray, LPImageViewStyle, NSMutableArray;

@interface LPMultipleImageView : LPComponentView {

	NSArray* _images;
	LPImageViewStyle* _style;
	NSMutableArray* _imageViews;

}
-(void)layoutComponentView;
-(id)init;
-(void)ensureImageViews;
-(CGSize)_availableSizeForImageNumber:(unsigned long long)arg1 withLayout:(unsigned long long)arg2 withinSize:(CGSize)arg3 ;
-(CGRect)_computeRectForImageAtIndex:(unsigned long long)arg1 fittingSize:(CGSize*)arg2 width:(double*)arg3 height:(double*)arg4 size:(CGSize)arg5 multipleImageLayout:(unsigned long long)arg6 ;
-(CGSize)layoutImagesForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
-(id)initWithImages:(id)arg1 style:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

