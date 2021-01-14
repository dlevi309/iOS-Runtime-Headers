/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImage.h>

@interface _UIResizableImage : UIImage {

	BOOL _alwaysStretches;
	BOOL _isSubimage;
	UIEdgeInsets _subimageInsets;
	UIEdgeInsets _capInsets;

}
+(BOOL)supportsSecureCoding;
-(BOOL)_isResizable;
-(void)_configureImage:(id)arg1 assumePreconfigured:(BOOL)arg2 ;
-(void)_setCapInsets:(UIEdgeInsets)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(CGRect)_contentInsetsInPixels:(UIEdgeInsets)arg1 emptySizeFallback:(/*^block*/id)arg2 ;
-(long long)resizingMode;
-(void)_setSubimageInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_isSubimage;
-(BOOL)_suppressesAccessibilityHairlineThickening;
-(CGRect)_contentStretchInPixels;
-(CGRect)_contentRectInPixels;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithImage:(id)arg1 capInsets:(UIEdgeInsets)arg2 ;
-(id)_resizableImageWithCapMask:(int)arg1 ;
-(void)_setAlwaysStretches:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIEdgeInsets)capInsets;
@end

