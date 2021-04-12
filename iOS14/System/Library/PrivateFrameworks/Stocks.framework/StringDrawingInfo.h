/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


#import <Stocks/Stocks-Structs.h>
@class NSString, UIColor, UIFont;

@interface StringDrawingInfo : NSObject {

	NSString* _string;
	UIColor* _color;
	UIFont* _font;
	CGSize _size;

}

@property (nonatomic,retain) NSString * string;              //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) UIColor * color;                //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIFont * font;                  //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) CGSize size;                    //@synthesize size=_size - In the implementation block
+(id)stringDrawingInfoWithString:(id)arg1 color:(id)arg2 font:(id)arg3 size:(CGSize)arg4 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIColor *)color;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(UIFont *)font;
@end

