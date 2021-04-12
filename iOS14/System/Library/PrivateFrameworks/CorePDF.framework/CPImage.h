/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>

@interface CPImage : CPGraphicObject {

	CPPDFImage* imageData;
	BOOL renderedBoundsComputed;

}
-(CGRect)bounds;
-(long long)zOrder;
-(id)initWithBounds:(CGRect)arg1 ;
-(BOOL)isVisible;
-(CPPDFImage*)imageData;
-(void)accept:(id)arg1 ;
-(id)initWithPDFImage:(CPPDFImage*)arg1 ;
-(CGRect)renderedBounds;
-(void)recomputeRenderedBounds;
@end

