/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@interface _UIImageCGSVGDocumentContent : _UIImageContent {

	CGSVGDocumentRef _svgDocumentRef;

}
-(CGSize)sizeInPixels;
-(CGSVGDocumentRef)CGSVGDocument;
-(BOOL)canProvideFullResCGImage;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCGSVGDocument:(CGSVGDocumentRef)arg1 scale:(double)arg2 ;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)isCGSVGDocument;
-(id)initWithScale:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

