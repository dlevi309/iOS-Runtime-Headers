/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class WFColor, NSData;

@interface WFWorkflowIconDrawer : NSObject {

	BOOL _drawBackground;
	BOOL _useCustomImage;
	BOOL _rounded;
	unsigned short _glyphCharacter;
	WFColor* _backgroundColor;
	NSData* _customImageData;
	WFColor* _glyphColor;
	double _cornerRadius;
	CGSize _glyphSize;

}

@property (assign,nonatomic) unsigned short glyphCharacter;              //@synthesize glyphCharacter=_glyphCharacter - In the implementation block
@property (nonatomic,retain) WFColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSData * customImageData;                     //@synthesize customImageData=_customImageData - In the implementation block
@property (nonatomic,retain) WFColor * glyphColor;                       //@synthesize glyphColor=_glyphColor - In the implementation block
@property (assign,nonatomic) CGSize glyphSize;                           //@synthesize glyphSize=_glyphSize - In the implementation block
@property (assign,nonatomic) BOOL drawBackground;                        //@synthesize drawBackground=_drawBackground - In the implementation block
@property (assign,nonatomic) BOOL useCustomImage;                        //@synthesize useCustomImage=_useCustomImage - In the implementation block
@property (assign,nonatomic) BOOL rounded;                               //@synthesize rounded=_rounded - In the implementation block
@property (assign,nonatomic) double cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(id)imageWithIcon:(id)arg1 size:(CGSize)arg2 ;
+(id)glyphImageWithIcon:(id)arg1 size:(CGSize)arg2 ;
+(id)pngDataForImageWithIcon:(id)arg1 size:(CGSize)arg2 ;
-(id)init;
-(WFColor *)backgroundColor;
-(void)setBackgroundColor:(WFColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setIcon:(id)arg1 ;
-(double)cornerRadius;
-(CGSize)glyphSize;
-(void)setGlyphColor:(WFColor *)arg1 ;
-(WFColor *)glyphColor;
-(id)imageWithSize:(CGSize)arg1 ;
-(id)initWithIcon:(id)arg1 ;
-(unsigned short)glyphCharacter;
-(NSData *)customImageData;
-(void)setCustomImageData:(NSData *)arg1 ;
-(void)setUseCustomImage:(BOOL)arg1 ;
-(id)initWithHomeScreenIcon:(id)arg1 ;
-(void)drawInContext:(id)arg1 inRect:(CGRect)arg2 ;
-(void)setGlyphCharacter:(unsigned short)arg1 ;
-(void)setGlyphSize:(CGSize)arg1 ;
-(BOOL)drawBackground;
-(void)setDrawBackground:(BOOL)arg1 ;
-(BOOL)useCustomImage;
-(BOOL)rounded;
-(void)setRounded:(BOOL)arg1 ;
@end

