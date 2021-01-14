/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@class CIImage;

@interface _UIImageCIImageContent : _UIImageContent {

	CIImage* _ciImage;

}
-(CGSize)sizeInPixels;
-(id)CIImage;
-(BOOL)canProvideFullResCGImage;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)description;
-(BOOL)isCIImage;
-(unsigned long long)hash;
-(id)initWithCIImage:(id)arg1 scale:(double)arg2 ;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)initWithScale:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

