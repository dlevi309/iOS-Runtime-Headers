/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)needsDisplayForKey:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)mt_applyVisualStying:(id)arg1 ;
-(id)init;
-(id)string;
-(void)dealloc;
-(void)setString:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(void)setFont:(const void*)arg1 ;
-(CGSize)_preferredSize;
-(const void*)font;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setAlignmentMode:(NSString *)arg1 ;
-(CGColorRef)foregroundColor;
-(id)_createStringDict;
-(CTTypesetterRef)_retainTypesetter;
-(CTLineRef)_createTruncationToken;
-(BOOL)isTruncated;
-(void)_applyLinesToFunction:(/*function pointer*/void*)arg1 info:(void*)arg2 ;
-(void)_applyLinesToFunction:(/*function pointer*/void*)arg1 info:(void*)arg2 truncated:(BOOL*)arg3 ;
-(void)_drawLine:(CTLineRef)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 ;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(BOOL)isWrapped;
-(void)setWrapped:(BOOL)arg1 ;
-(NSString *)truncationMode;
-(void)setTruncationMode:(NSString *)arg1 ;
-(NSString *)alignmentMode;
-(BOOL)allowsFontSubpixelQuantization;
-(void)setAllowsFontSubpixelQuantization:(BOOL)arg1 ;
-(id)truncationString;
-(BOOL)wrapped;
-(void)setTruncationString:(id)arg1 ;
@end

