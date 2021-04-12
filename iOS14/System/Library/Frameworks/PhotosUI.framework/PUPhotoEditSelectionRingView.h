/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface PUPhotoEditSelectionRingView : UIView {

	UIColor* _selectionRingColor;
	double _strokeWidth;

}

@property (nonatomic,retain) UIColor * selectionRingColor;              //@synthesize selectionRingColor=_selectionRingColor - In the implementation block
@property (assign,nonatomic) double strokeWidth;                        //@synthesize strokeWidth=_strokeWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)strokeWidth;
-(void)setSelectionRingColor:(UIColor *)arg1 ;
-(UIColor *)selectionRingColor;
-(void)setStrokeWidth:(double)arg1 ;
@end

