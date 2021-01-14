/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTextRange:(SCD_Struct_CP17)arg1 ;
-(SCD_Struct_CP17)textRange;
-(id)initWithNode:(CGPDFNodeRef)arg1 onPage:(CGPDFPageRef)arg2 ;
@end

