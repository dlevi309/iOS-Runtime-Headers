/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@interface _UIImageCGImageContent : _UIImageContent {

	A{CGImage}* _imageRef;

}
-(BOOL)isCGImage;
-(CGSize)sizeInPixels;
-(BOOL)hasCGImage;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)description;
-(id)renditionApplyingEffect:(id)arg1 ;
-(unsigned long long)hash;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
-(id)contentWithCGImage:(CGImageRef)arg1 ;
-(CGImageRef)CGImage;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

