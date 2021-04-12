/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUTitleViewStyler.h>

@class UIColor, NSString;

@interface NUTitleViewStyler : NSObject <NUTitleViewStyler> {

	UIColor* _textColor;

}

@property (nonatomic,readonly) UIColor * textColor;                 //@synthesize textColor=_textColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIColor *)textColor;
-(id)styleTitleText:(id)arg1 styleType:(unsigned long long)arg2 boundingSize:(CGSize)arg3 ;
-(id)styleTextAsMessage:(id)arg1 boundingSize:(CGSize)arg2 ;
-(id)styleTextAsTitle:(id)arg1 boundingSize:(CGSize)arg2 ;
-(id)messageLargeFont;
-(id)messageSmallFont;
-(id)titleParagraphStyleWithWrapping:(BOOL)arg1 ;
-(id)initWithTextColor:(id)arg1 ;
-(id)messageParagraphStyle;
-(id)titleLargeFont;
-(id)titleSmallFont;
@end

