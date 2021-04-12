/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@interface _UIImageCGPDFPageContent : _UIImageContent {

	CGPDFPageRef _pdfPageRef;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)canProvideFullResCGImage;
-(id)initWithScale:(double)arg1 ;
-(BOOL)isCGPDFPage;
-(CGPDFPageRef)CGPDFPage;
-(CGSize)sizeInPixels;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)initWithCGPDFPage:(CGPDFPageRef)arg1 scale:(double)arg2 ;
@end

