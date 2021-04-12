/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@interface _UIImageCGImageContent : _UIImageContent {

	A{CGImage}* _imageRef;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CGImageRef)CGImage;
-(CGSize)sizeInPixels;
-(BOOL)hasCGImage;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)isCGImage;
-(id)contentWithCGImage:(CGImageRef)arg1 ;
-(id)renditionApplyingEffect:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
@end

