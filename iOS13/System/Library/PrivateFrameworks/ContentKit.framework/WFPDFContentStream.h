/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


#import <ContentKit/ContentKit-Structs.h>
@class NSMutableDictionary, NSArray;

@interface WFPDFContentStream : NSObject {

	CGPDFContentStreamRef _contentStreamRef;
	NSMutableDictionary* _operatorBlocks;
	CGPDFOperatorTableRef _operatorTableRef;
	NSArray* _textContainers;

}

@property (nonatomic,retain) NSMutableDictionary * operatorBlocks;                  //@synthesize operatorBlocks=_operatorBlocks - In the implementation block
@property (assign,nonatomic) CGPDFOperatorTableRef operatorTableRef;                //@synthesize operatorTableRef=_operatorTableRef - In the implementation block
@property (nonatomic,retain) NSArray * textContainers;                              //@synthesize textContainers=_textContainers - In the implementation block
@property (nonatomic,readonly) CGPDFContentStreamRef contentStreamRef;              //@synthesize contentStreamRef=_contentStreamRef - In the implementation block
-(void)dealloc;
-(NSArray *)textContainers;
-(id)initWithContentStreamRef:(CGPDFContentStreamRef)arg1 ;
-(CGPDFOperatorTableRef)operatorTableRef;
-(id)textInRect:(CGRect)arg1 ;
-(CGPDFContentStreamRef)contentStreamRef;
-(NSMutableDictionary *)operatorBlocks;
-(void)setOperatorBlocks:(NSMutableDictionary *)arg1 ;
-(void)setOperatorTableRef:(CGPDFOperatorTableRef)arg1 ;
-(void)setTextContainers:(NSArray *)arg1 ;
@end

