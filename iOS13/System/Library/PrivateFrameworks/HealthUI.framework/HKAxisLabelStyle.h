/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HKNumberFormatter;
@class UIColor, UIFont;

@interface HKAxisLabelStyle : NSObject <NSCopying> {

	UIColor* _textColor;
	UIFont* _font;
	long long _horizontalAlignment;
	long long _verticalAlignment;
	id<HKNumberFormatter> _numberFormatter;

}

@property (nonatomic,copy) UIColor * textColor;                                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                      //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) long long horizontalAlignment;                      //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                        //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,retain) id<HKNumberFormatter> numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
+(id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 ;
+(id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 numberFormatter:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNumberFormatter:(id<HKNumberFormatter>)arg1 ;
-(id<HKNumberFormatter>)numberFormatter;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(long long)horizontalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
@end

