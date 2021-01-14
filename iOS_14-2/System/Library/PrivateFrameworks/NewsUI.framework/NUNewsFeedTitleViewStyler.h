/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUTitleViewStyler.h>

@class UIColor, NSString;

@interface NUNewsFeedTitleViewStyler : NSObject <NUTitleViewStyler> {

	UIColor* _textColor;
	long long _textAlignment;

}

@property (nonatomic,copy) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) long long textAlignment;              //@synthesize textAlignment=_textAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIColor *)textColor;
-(id)init;
-(id)messageSmallFont;
-(id)styleTextAsMessage:(id)arg1 boundingSize:(CGSize)arg2 ;
-(id)titleParagraphStyleWithWrapping:(BOOL)arg1 ;
-(id)initWithTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)styleTextAsTitle:(id)arg1 boundingSize:(CGSize)arg2 ;
-(id)titleExtraLargeFont;
-(void)updateWithTextColor:(id)arg1 ;
-(id)messageLargeFont;
-(id)styleTitleText:(id)arg1 styleType:(unsigned long long)arg2 boundingSize:(CGSize)arg3 ;
@end

