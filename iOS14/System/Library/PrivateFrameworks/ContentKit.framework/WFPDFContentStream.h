/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)textContainers;
-(void)dealloc;
-(id)initWithContentStreamRef:(CGPDFContentStreamRef)arg1 ;
-(CGPDFOperatorTableRef)operatorTableRef;
-(id)textInRect:(CGRect)arg1 ;
-(CGPDFContentStreamRef)contentStreamRef;
-(NSMutableDictionary *)operatorBlocks;
-(void)setOperatorBlocks:(NSMutableDictionary *)arg1 ;
-(void)setOperatorTableRef:(CGPDFOperatorTableRef)arg1 ;
-(void)setTextContainers:(NSArray *)arg1 ;
@end

