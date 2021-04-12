/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)imageSize;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)image;
-(void)setPlaceholder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)placeholder;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)_updateInnerImageView;
-(void)setImagePadding:(UIEdgeInsets)arg1 ;
@end

