/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)canProvideFullResCGImage;
-(id)initWithScale:(double)arg1 ;
-(double)vectorScale;
-(CGSize)sizeInPixels;
-(BOOL)canProvideCGImage;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)_drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 effect:(id)arg3 ;
-(BOOL)isCGImage;
-(BOOL)isVectorGlyph;
-(id)initWithSize:(CGSize)arg1 glyphs:(id)arg2 colors:(id)arg3 offsets:(id)arg4 scaleFactors:(id)arg5 anchorPoint:(CGPoint)arg6 ;
@end

