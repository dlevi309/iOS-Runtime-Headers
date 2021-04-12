/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


#import <ContentKit/ContentKit-Structs.h>
@class WFPDFContentStream, NSDictionary, WFPDFDocument, NSString;

@interface WFPDFPage : NSObject {

	WFPDFContentStream* _contentStream;
	NSDictionary* _dictionary;
	CGPDFPageRef _pageRef;
	WFPDFDocument* _document;

}

@property (nonatomic,readonly) CGPDFPageRef pageRef;                            //@synthesize pageRef=_pageRef - In the implementation block
@property (nonatomic,__weak,readonly) WFPDFDocument * document;                 //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) int rotation; 
@property (nonatomic,readonly) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) WFPDFContentStream * contentStream;              //@synthesize contentStream=_contentStream - In the implementation block
@property (nonatomic,readonly) NSString * text; 
-(void)dealloc;
-(NSDictionary *)dictionary;
-(NSString *)text;
-(int)rotation;
-(WFPDFDocument *)document;
-(CGRect)boundsForBox:(int)arg1 ;
-(CGPDFPageRef)pageRef;
-(void)drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)initWithPageRef:(CGPDFPageRef)arg1 document:(id)arg2 ;
-(CGAffineTransform)drawingTransformForBox:(int)arg1 rect:(CGRect)arg2 rotation:(int)arg3 preservingAspectRatio:(BOOL)arg4 ;
-(WFPDFContentStream *)contentStream;
@end

