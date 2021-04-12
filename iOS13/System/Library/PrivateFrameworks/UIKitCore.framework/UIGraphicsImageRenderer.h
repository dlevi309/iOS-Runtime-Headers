/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRenderer.h>

@interface UIGraphicsImageRenderer : UIGraphicsRenderer
+(Class)rendererContextClass;
+(CGContextRef)contextWithFormat:(id)arg1 ;
+(void)prepareCGContext:(CGContextRef)arg1 withRendererContext:(id)arg2 ;
-(id)init;
-(id)initWithSize:(CGSize)arg1 ;
-(id)initWithSize:(CGSize)arg1 format:(id)arg2 ;
-(id)imageWithActions:(/*^block*/id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 format:(id)arg2 ;
-(void)pushContext:(id)arg1 ;
-(void)_prepareContextForReuse:(CGContextRef)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(BOOL)allowsImageOutput;
-(id)PNGDataWithActions:(/*^block*/id)arg1 ;
-(id)JPEGDataWithCompressionQuality:(double)arg1 actions:(/*^block*/id)arg2 ;
@end

