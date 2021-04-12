/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@class CIImage;

@interface _UIImageCIImageContent : _UIImageContent {

	CIImage* _ciImage;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_context;
-(BOOL)canProvideFullResCGImage;
-(id)initWithScale:(double)arg1 ;
-(CGSize)sizeInPixels;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)CIImage;
-(BOOL)isCIImage;
-(id)initWithCIImage:(id)arg1 scale:(double)arg2 ;
@end

