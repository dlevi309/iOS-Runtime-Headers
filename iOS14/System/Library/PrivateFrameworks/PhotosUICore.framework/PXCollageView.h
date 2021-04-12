/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, PXLayoutPerformerOutput, NSArray, NSPointerArray, PXRoundedCornerOverlayView;

@interface PXCollageView : UIView {

	double _spacing;
	long long _numberOfItems;
	double _cornerRadius;
	UIColor* _cornerBackgroundColor;
	double _imageCornerRadius;
	PXLayoutPerformerOutput* _layoutOutput;
	NSArray* __imageViews;
	NSPointerArray* __imageSizes;
	PXRoundedCornerOverlayView* __roundedCornerOverlayView;

}

@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput;                              //@synthesize layoutOutput=_layoutOutput - In the implementation block
@property (nonatomic,readonly) NSArray * _imageViews;                                             //@synthesize _imageViews=__imageViews - In the implementation block
@property (nonatomic,readonly) NSPointerArray * _imageSizes;                                      //@synthesize _imageSizes=__imageSizes - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * _roundedCornerOverlayView;              //@synthesize _roundedCornerOverlayView=__roundedCornerOverlayView - In the implementation block
@property (assign,nonatomic) double spacing;                                                      //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) long long numberOfItems;                                             //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                 //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,copy) UIColor * cornerBackgroundColor;                                       //@synthesize cornerBackgroundColor=_cornerBackgroundColor - In the implementation block
@property (assign,nonatomic) double imageCornerRadius;                                            //@synthesize imageCornerRadius=_imageCornerRadius - In the implementation block
+(long long)maximumNumberOfItems;
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)numberOfItems;
-(NSPointerArray *)_imageSizes;
-(double)cornerRadius;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)layoutSubviews;
-(void)setNumberOfItems:(long long)arg1 ;
-(PXLayoutPerformerOutput *)layoutOutput;
-(void)setLayoutOutput:(PXLayoutPerformerOutput *)arg1 ;
-(NSArray *)_imageViews;
-(CGSize)imageSizeForItemAtIndex:(long long)arg1 ;
-(void)_updateImageViews;
-(void)_updateRoundedCornerOverlayView;
-(PXRoundedCornerOverlayView *)_roundedCornerOverlayView;
-(void)setImageCornerRadius:(double)arg1 ;
-(void)setCornerBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)cornerBackgroundColor;
-(double)imageCornerRadius;
-(void)set_roundedCornerOverlayView:(PXRoundedCornerOverlayView *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setImageSize:(CGSize)arg1 forItemAtIndex:(long long)arg2 ;
@end

