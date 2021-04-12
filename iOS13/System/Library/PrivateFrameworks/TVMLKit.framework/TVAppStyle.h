/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class IKColor, NSString, NSMutableDictionary;

@interface TVAppStyle : NSObject {

	IKColor* _backgroundColor;
	NSString* _prototype;
	NSMutableDictionary* _valuesByStyle;
	SCD_Struct_TV9 _width;
	SCD_Struct_TV9 _minWidth;
	SCD_Struct_TV9 _maxWidth;
	SCD_Struct_TV9 _height;
	SCD_Struct_TV9 _minHeight;
	SCD_Struct_TV9 _maxHeight;
	SCD_Struct_TV9 _padding;
	SCD_Struct_TV9 _margin;
	SCD_Struct_TV9 _interitemSpacing;
	SCD_Struct_TV9 _fontSize;
	SCD_Struct_TV9 _borderRadius;

}

@property (nonatomic,readonly) NSMutableDictionary * valuesByStyle;              //@synthesize valuesByStyle=_valuesByStyle - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV10 width;                              //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV10 minWidth;                           //@synthesize minWidth=_minWidth - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV10 maxWidth;                           //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV10 height;                             //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV10 minHeight;                          //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV10 maxHeight;                          //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV10 padding;                            //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV10 margin;                             //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV10 interitemSpacing;                   //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV10 fontSize;                           //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV10 borderRadius;                       //@synthesize borderRadius=_borderRadius - In the implementation block
@property (nonatomic,retain) IKColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * prototype;                                 //@synthesize prototype=_prototype - In the implementation block
-(SCD_Struct_TV10)width;
-(SCD_Struct_TV10)height;
-(void)setWidth:(SCD_Struct_TV10)arg1 ;
-(void)setHeight:(SCD_Struct_TV10)arg1 ;
-(SCD_Struct_TV10)minWidth;
-(void)setMinWidth:(SCD_Struct_TV10)arg1 ;
-(SCD_Struct_TV10)maxWidth;
-(void)setMaxWidth:(SCD_Struct_TV10)arg1 ;
-(SCD_Struct_TV10)minHeight;
-(void)setMinHeight:(SCD_Struct_TV10)arg1 ;
-(SCD_Struct_TV10)maxHeight;
-(void)setMaxHeight:(SCD_Struct_TV10)arg1 ;
-(SCD_Struct_TV10)fontSize;
-(void)setFontSize:(SCD_Struct_TV10)arg1 ;
-(void)setPadding:(SCD_Struct_TV10)arg1 ;
-(IKColor *)backgroundColor;
-(void)setBackgroundColor:(IKColor *)arg1 ;
-(void)setMargin:(SCD_Struct_TV10)arg1 ;
-(SCD_Struct_TV10)margin;
-(SCD_Struct_TV10)padding;
-(NSString *)prototype;
-(SCD_Struct_TV10)interitemSpacing;
-(void)setInteritemSpacing:(SCD_Struct_TV10)arg1 ;
-(id)valueForStyle:(id)arg1 ;
-(SCD_Struct_TV10)borderRadius;
-(void)_setValue:(id)arg1 forStyle:(id)arg2 ;
-(void)setBorderRadius:(SCD_Struct_TV10)arg1 ;
-(void)setPrototype:(NSString *)arg1 ;
-(NSMutableDictionary *)valuesByStyle;
@end

