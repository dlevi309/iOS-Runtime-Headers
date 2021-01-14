/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class IKColor, NSString, NSMutableDictionary;

@interface TVAppStyle : NSObject {

	IKColor* _backgroundColor;
	NSString* _prototype;
	NSMutableDictionary* _valuesByStyle;
	SCD_Struct_TV10 _width;
	SCD_Struct_TV10 _minWidth;
	SCD_Struct_TV10 _maxWidth;
	SCD_Struct_TV10 _height;
	SCD_Struct_TV10 _minHeight;
	SCD_Struct_TV10 _maxHeight;
	SCD_Struct_TV10 _padding;
	SCD_Struct_TV10 _margin;
	SCD_Struct_TV10 _interitemSpacing;
	SCD_Struct_TV10 _fontSize;
	SCD_Struct_TV10 _borderRadius;

}

@property (nonatomic,readonly) NSMutableDictionary * valuesByStyle;              //@synthesize valuesByStyle=_valuesByStyle - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV11 width;                              //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV11 minWidth;                           //@synthesize minWidth=_minWidth - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV11 maxWidth;                           //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV11 height;                             //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV11 minHeight;                          //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV11 maxHeight;                          //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV11 padding;                            //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV11 margin;                             //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV11 interitemSpacing;                   //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV11 fontSize;                           //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV11 borderRadius;                       //@synthesize borderRadius=_borderRadius - In the implementation block
@property (nonatomic,retain) IKColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * prototype;                                 //@synthesize prototype=_prototype - In the implementation block
-(void)setHeight:(SCD_Struct_TV11)arg1 ;
-(void)setMargin:(SCD_Struct_TV11)arg1 ;
-(SCD_Struct_TV11)fontSize;
-(SCD_Struct_TV11)margin;
-(SCD_Struct_TV11)width;
-(void)setPrototype:(NSString *)arg1 ;
-(void)setMaxHeight:(SCD_Struct_TV11)arg1 ;
-(SCD_Struct_TV11)maxWidth;
-(SCD_Struct_TV11)minWidth;
-(void)setWidth:(SCD_Struct_TV11)arg1 ;
-(SCD_Struct_TV11)interitemSpacing;
-(void)setMinWidth:(SCD_Struct_TV11)arg1 ;
-(SCD_Struct_TV11)height;
-(void)setBackgroundColor:(IKColor *)arg1 ;
-(IKColor *)backgroundColor;
-(void)setFontSize:(SCD_Struct_TV11)arg1 ;
-(SCD_Struct_TV11)minHeight;
-(SCD_Struct_TV11)padding;
-(void)setPadding:(SCD_Struct_TV11)arg1 ;
-(SCD_Struct_TV11)maxHeight;
-(void)setInteritemSpacing:(SCD_Struct_TV11)arg1 ;
-(void)setMaxWidth:(SCD_Struct_TV11)arg1 ;
-(void)setMinHeight:(SCD_Struct_TV11)arg1 ;
-(id)valueForStyle:(id)arg1 ;
-(void)setBorderRadius:(SCD_Struct_TV11)arg1 ;
-(SCD_Struct_TV11)borderRadius;
-(NSString *)prototype;
-(void)_setValue:(id)arg1 forStyle:(id)arg2 ;
-(NSMutableDictionary *)valuesByStyle;
@end

