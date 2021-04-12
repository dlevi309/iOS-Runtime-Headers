/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPRMHeading : NSObject {

	CGPDFNodeRef _node;
	CGPDFPageRef _page;
	SCD_Struct_CP17 _textRange;

}

@property (readonly) CGPDFPageRef page; 
@property (assign) SCD_Struct_CP17 textRange;              //@synthesize textRange=_textRange - In the implementation block
-(CGRect)bounds;
-(CGPDFPageRef)page;
-(SCD_Struct_CP17)textRange;
-(void)setTextRange:(SCD_Struct_CP17)arg1 ;
-(id)initWithNode:(CGPDFNodeRef)arg1 onPage:(CGPDFPageRef)arg2 ;
@end

