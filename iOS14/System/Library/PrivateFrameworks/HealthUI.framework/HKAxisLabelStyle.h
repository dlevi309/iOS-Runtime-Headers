/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 numberFormatter:(id)arg5 ;
+(id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 ;
-(void)setNumberFormatter:(id<HKNumberFormatter>)arg1 ;
-(id<HKNumberFormatter>)numberFormatter;
-(UIColor *)textColor;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(long long)horizontalAlignment;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(UIFont *)font;
@end

