/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRenderer.h>

@interface UIGraphicsPDFRenderer : UIGraphicsRenderer
+(Class)rendererContextClass;
+(CGContextRef)contextWithFormat:(id)arg1 ;
+(void)prepareCGContext:(CGContextRef)arg1 withRendererContext:(id)arg2 ;
-(id)init;
-(id)initWithBounds:(CGRect)arg1 format:(id)arg2 ;
-(void)pushContext:(id)arg1 ;
-(void)popContext:(id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(BOOL)writePDFToURL:(id)arg1 withActions:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)PDFDataWithActions:(/*^block*/id)arg1 ;
@end

