/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIKBTextStyle : NSObject <NSCopying> {

	BOOL _ignoreTextMarginOnKey;
	NSString* _fontName;
	double _fontSize;
	double _imageScale;
	double _minFontSize;
	double _kerning;
	double _textOpacity;
	NSString* _textColor;
	NSString* _etchColor;
	long long _alignment;
	double _pathWeight;
	double _fontWeight;
	unsigned long long _anchorCorner;
	long long _selector;
	CGPoint _textOffset;
	CGPoint _etchOffset;

}

@property (nonatomic,retain) NSString * fontName;                          //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double fontSize;                              //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double imageScale;                            //@synthesize imageScale=_imageScale - In the implementation block
@property (assign,nonatomic) double minFontSize;                           //@synthesize minFontSize=_minFontSize - In the implementation block
@property (assign,nonatomic) double kerning;                               //@synthesize kerning=_kerning - In the implementation block
@property (assign,nonatomic) double textOpacity;                           //@synthesize textOpacity=_textOpacity - In the implementation block
@property (nonatomic,retain) NSString * textColor;                         //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSString * etchColor;                         //@synthesize etchColor=_etchColor - In the implementation block
@property (assign,nonatomic) long long alignment;                          //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) CGPoint textOffset;                           //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) CGPoint etchOffset;                           //@synthesize etchOffset=_etchOffset - In the implementation block
@property (assign,nonatomic) double pathWeight;                            //@synthesize pathWeight=_pathWeight - In the implementation block
@property (assign,nonatomic) double fontWeight;                            //@synthesize fontWeight=_fontWeight - In the implementation block
@property (assign,nonatomic) unsigned long long anchorCorner;              //@synthesize anchorCorner=_anchorCorner - In the implementation block
@property (assign,nonatomic) long long selector;                           //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) BOOL ignoreTextMarginOnKey;                   //@synthesize ignoreTextMarginOnKey=_ignoreTextMarginOnKey - In the implementation block
+(id)styleWithFontName:(id)arg1 withFontSize:(double)arg2 ;
+(id)styleWithTextColor:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)selector;
-(void)setSelector:(long long)arg1 ;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(NSString *)fontName;
-(void)setFontName:(NSString *)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(void)setTextColor:(NSString *)arg1 ;
-(NSString *)textColor;
-(void)setTextOffset:(CGPoint)arg1 ;
-(CGPoint)textOffset;
-(unsigned long long)anchorCorner;
-(double)minFontSize;
-(void)setMinFontSize:(double)arg1 ;
-(double)kerning;
-(void)setKerning:(double)arg1 ;
-(void)setFontWeight:(double)arg1 ;
-(void)setTextOpacity:(double)arg1 ;
-(double)textOpacity;
-(void)setAnchorCorner:(unsigned long long)arg1 ;
-(void)setImageScale:(double)arg1 ;
-(void)setIgnoreTextMarginOnKey:(BOOL)arg1 ;
-(void)setPathWeight:(double)arg1 ;
-(double)fontWeight;
-(NSString *)etchColor;
-(CGPoint)etchOffset;
-(double)pathWeight;
-(BOOL)ignoreTextMarginOnKey;
-(void)setEtchColor:(NSString *)arg1 ;
-(void)setEtchOffset:(CGPoint)arg1 ;
-(void)overlayWithStyle:(id)arg1 ;
-(double)imageScale;
@end

