/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage, NSMutableDictionary, UIColor;

@interface UIKeyboardBIUImageGenerator : NSObject {

	BOOL _useButtonShapes;
	UIImage* _biuBoldImage;
	UIImage* _biuItalicImage;
	UIImage* _biuUnderlineImage;
	NSMutableDictionary* _imageCache;
	UIColor* _tintColor;
	UIColor* _normalColor;

}

@property (nonatomic,retain) UIColor * tintColor;                //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * normalColor;              //@synthesize normalColor=_normalColor - In the implementation block
-(id)BIUImageForBold:(BOOL)arg1 italic:(BOOL)arg2 underline:(BOOL)arg3 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)init;
-(void)_accessibilitySettingsChanged:(id)arg1 ;
-(void)_invalidateCache;
-(void)setNormalColor:(UIColor *)arg1 ;
-(void)_drawBIUAtSize:(CGSize)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 underline:(BOOL)arg4 ;
-(UIColor *)tintColor;
-(UIColor *)normalColor;
@end

