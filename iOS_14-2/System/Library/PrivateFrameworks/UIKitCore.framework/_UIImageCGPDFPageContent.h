/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@interface _UIImageCGPDFPageContent : _UIImageContent {

	CGPDFPageRef _pdfPageRef;

}
-(CGSize)sizeInPixels;
-(BOOL)isCGPDFPage;
-(BOOL)canProvideFullResCGImage;
-(id)description;
-(CGPDFPageRef)CGPDFPage;
-(unsigned long long)hash;
-(id)initWithCGPDFPage:(CGPDFPageRef)arg1 scale:(double)arg2 ;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)initWithScale:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

