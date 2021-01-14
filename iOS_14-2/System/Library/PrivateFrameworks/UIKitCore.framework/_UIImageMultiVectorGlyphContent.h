/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@class NSArray;

@interface _UIImageMultiVectorGlyphContent : _UIImageContent {

	NSArray* _glyphs;
	NSArray* _colors;
	NSArray* _offsets;
	NSArray* _scaleFactors;
	CGSize _sizeInPixels;
	CGPoint _anchorPoint;

}
-(BOOL)isCGImage;
-(CGSize)sizeInPixels;
-(id)initWithSize:(CGSize)arg1 glyphs:(id)arg2 colors:(id)arg3 offsets:(id)arg4 scaleFactors:(id)arg5 anchorPoint:(CGPoint)arg6 ;
-(BOOL)canProvideCGImage;
-(BOOL)canProvideFullResCGImage;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)description;
-(BOOL)isVectorGlyph;
-(id)initWithScale:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 effect:(id)arg3 ;
-(double)vectorScale;
@end

