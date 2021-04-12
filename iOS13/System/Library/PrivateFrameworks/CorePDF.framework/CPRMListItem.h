/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPRMListItem : NSObject {

	CGPDFNode* _paragraphs;
	unsigned long long _count;
	unsigned long long _pos;

}

@property (readonly) CGPDFNode* paragraphNodes;              //@synthesize paragraphs=_paragraphs - In the implementation block
@property (readonly) CGPDFPageRef page; 
-(void)dealloc;
-(id)initWithCount:(unsigned long long)arg1 ;
-(CGRect)bounds;
-(CGPDFPageRef)page;
-(void)addParagraph:(CGPDFNodeRef)arg1 ;
-(CGPDFNode*)paragraphNodes;
@end

