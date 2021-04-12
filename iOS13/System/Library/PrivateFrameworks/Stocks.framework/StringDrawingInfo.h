/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(CGSize)size;
-(UIColor *)color;
-(void)setSize:(CGSize)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
@end

