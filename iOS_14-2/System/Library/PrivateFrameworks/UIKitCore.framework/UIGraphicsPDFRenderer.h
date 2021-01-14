/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRenderer.h>

@interface UIGraphicsPDFRenderer : UIGraphicsRenderer
+(void)prepareCGContext:(CGContextRef)arg1 withRendererContext:(id)arg2 ;
+(CGContextRef)contextWithFormat:(id)arg1 ;
+(Class)rendererContextClass;
-(BOOL)writePDFToURL:(id)arg1 withActions:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)initWithBounds:(CGRect)arg1 ;
-(id)PDFDataWithActions:(/*^block*/id)arg1 ;
-(void)pushContext:(id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 format:(id)arg2 ;
-(void)popContext:(id)arg1 ;
@end

