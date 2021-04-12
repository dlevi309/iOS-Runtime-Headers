/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)_invalidateCache;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)_accessibilitySettingsChanged:(id)arg1 ;
-(void)_drawBIUAtSize:(CGSize)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 underline:(BOOL)arg4 ;
-(void)setNormalColor:(UIColor *)arg1 ;
-(id)BIUImageForBold:(BOOL)arg1 italic:(BOOL)arg2 underline:(BOOL)arg3 ;
-(UIColor *)normalColor;
@end

