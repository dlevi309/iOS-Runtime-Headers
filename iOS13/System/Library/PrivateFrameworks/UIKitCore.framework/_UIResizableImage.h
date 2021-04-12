/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isResizable;
-(UIEdgeInsets)capInsets;
-(BOOL)_suppressesAccessibilityHairlineThickening;
-(id)_resizableImageWithCapMask:(int)arg1 ;
-(void)_configureImage:(id)arg1 assumePreconfigured:(BOOL)arg2 ;
-(void)_setCapInsets:(UIEdgeInsets)arg1 ;
-(void)_setAlwaysStretches:(BOOL)arg1 ;
-(CGRect)_contentStretchInPixels;
-(CGRect)_contentInsetsInPixels:(UIEdgeInsets)arg1 emptySizeFallback:(/*^block*/id)arg2 ;
-(CGRect)_contentRectInPixels;
-(long long)resizingMode;
-(id)initWithImage:(id)arg1 capInsets:(UIEdgeInsets)arg2 ;
-(void)_setSubimageInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_isSubimage;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
@end

