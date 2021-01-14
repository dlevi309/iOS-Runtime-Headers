/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/


@class UIColor, UIFont;

@interface PRXTextStyleDefinition : NSObject {

	long long _style;
	UIColor* _textColor;
	long long _numberOfLines;
	UIFont* _font;
	long long _textAlignment;
	unsigned long long _accessibilityTraits;

}

@property (nonatomic,readonly) long long style;                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) long long numberOfLines;                             //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,readonly) UIFont * font;                                       //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) long long textAlignment;                             //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) unsigned long long accessibilityTraits;              //@synthesize accessibilityTraits=_accessibilityTraits - In the implementation block
-(UIColor *)textColor;
-(id)initWithStyle:(long long)arg1 ;
-(long long)textAlignment;
-(unsigned long long)accessibilityTraits;
-(long long)numberOfLines;
-(long long)style;
-(UIFont *)font;
@end

