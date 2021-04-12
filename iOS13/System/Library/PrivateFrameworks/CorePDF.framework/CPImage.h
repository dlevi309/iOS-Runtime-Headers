/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>

@interface CPImage : CPGraphicObject {

	CPPDFImage* imageData;
	BOOL renderedBoundsComputed;

}
-(CGRect)bounds;
-(BOOL)isVisible;
-(id)initWithBounds:(CGRect)arg1 ;
-(CPPDFImage*)imageData;
-(id)initWithPDFImage:(CPPDFImage*)arg1 ;
-(long long)zOrder;
-(CGRect)renderedBounds;
-(void)accept:(id)arg1 ;
-(void)recomputeRenderedBounds;
@end

