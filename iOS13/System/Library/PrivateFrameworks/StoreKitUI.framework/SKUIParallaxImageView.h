/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageView.h>
#import <libobjc.A.dylib/SKUIPerspectiveView.h>

@class SKUIImageView, NSString;

@interface SKUIParallaxImageView : SKUIImageView <SKUIPerspectiveView> {

	UIEdgeInsets _imagePadding;
	CGSize _imageSize;
	SKUIImageView* _innerImageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(CGSize)imageSize;
-(id)placeholder;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(void)_updateInnerImageView;
-(void)setImagePadding:(UIEdgeInsets)arg1 ;
@end

