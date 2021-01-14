/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CATextLayer : CALayer {

	CATextLayerPrivateRef _state;

}

@property (copy) id truncationString; 
@property (getter=isTruncated,readonly) BOOL truncated; 
@property (copy) id string; 
@property (assign) const void* font; 
@property (assign) double fontSize; 
@property (assign) CGColorRef foregroundColor; 
@property (getter=isWrapped) BOOL wrapped; 
@property (copy) NSString * truncationMode; 
@property (copy) NSString * alignmentMode; 
@property (assign) BOOL allowsFontSubpixelQuantization; 
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)needsDisplayForKey:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(void)mt_applyVisualStying:(id)arg1 ;
-(double)fontSize;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(BOOL)isTruncated;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(id)init;
-(CGColorRef)foregroundColor;
-(void)setFont:(const void*)arg1 ;
-(BOOL)wrapped;
-(void)didChangeValueForKey:(id)arg1 ;
-(BOOL)CA_validateValue:(id)arg1 forKey:(id)arg2 ;
-(void)setAlignmentMode:(NSString *)arg1 ;
-(void)setWrapped:(BOOL)arg1 ;
-(NSString *)alignmentMode;
-(id)_createStringDict;
-(CTTypesetterRef)_retainTypesetter;
-(CTLineRef)_createTruncationToken;
-(void)_applyLinesToFunction:(/*function pointer*/void*)arg1 info:(void*)arg2 ;
-(void)_applyLinesToFunction:(/*function pointer*/void*)arg1 info:(void*)arg2 truncated:(BOOL*)arg3 ;
-(void)_drawLine:(CTLineRef)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 ;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(BOOL)allowsFontSubpixelQuantization;
-(void)setAllowsFontSubpixelQuantization:(BOOL)arg1 ;
-(id)truncationString;
-(void)setTruncationString:(id)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(BOOL)isWrapped;
-(id)string;
-(void)setString:(id)arg1 ;
-(CGSize)_preferredSize;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setTruncationMode:(NSString *)arg1 ;
-(NSString *)truncationMode;
-(void)dealloc;
-(const void*)font;
@end

