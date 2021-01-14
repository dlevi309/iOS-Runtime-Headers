/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRenderer.h>

@interface UIGraphicsImageRenderer : UIGraphicsRenderer
+(void)prepareCGContext:(CGContextRef)arg1 withRendererContext:(id)arg2 ;
+(CGContextRef)contextWithFormat:(id)arg1 ;
+(Class)rendererContextClass;
-(id)PNGDataWithActions:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithSize:(CGSize)arg1 ;
-(id)JPEGDataWithCompressionQuality:(double)arg1 actions:(/*^block*/id)arg2 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)pushContext:(id)arg1 ;
-(id)imageWithActions:(/*^block*/id)arg1 ;
-(void)_prepareContextForReuse:(CGContextRef)arg1 ;
-(id)initWithSize:(CGSize)arg1 format:(id)arg2 ;
-(id)initWithBounds:(CGRect)arg1 format:(id)arg2 ;
-(BOOL)allowsImageOutput;
@end

