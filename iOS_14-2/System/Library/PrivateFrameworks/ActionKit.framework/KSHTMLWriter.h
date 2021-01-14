/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/KSXMLWriter.h>

@class NSString, NSMutableSet, NSMutableArray;

@interface KSHTMLWriter : KSXMLWriter {

	NSString* _docType;
	BOOL _isXHTML;
	NSMutableSet* _IDs;
	NSMutableArray* _classNames;

}

@property (nonatomic,copy) NSString * docType;              //@synthesize docType=_docType - In the implementation block
+(BOOL)isDocTypeXHTML:(id)arg1 ;
-(NSString *)docType;
-(void)setDocType:(NSString *)arg1 ;
-(id)currentAttributes;
-(BOOL)isXHTML;
-(id)initWithOutputWriter:(id)arg1 ;
-(id)initWithOutputWriter:(id)arg1 docType:(id)arg2 encoding:(unsigned long long)arg3 ;
-(void)startDocumentWithDocType:(id)arg1 encoding:(unsigned long long)arg2 ;
-(id)currentElementClassName;
-(void)pushClassName:(id)arg1 ;
-(void)pushAttribute:(id)arg1 value:(id)arg2 ;
-(BOOL)hasCurrentAttributes;
-(void)writeHTMLString:(id)arg1 ;
-(void)writeHTMLFormat:(id)arg1 ;
-(void)startElement:(id)arg1 className:(id)arg2 ;
-(void)startElement:(id)arg1 idName:(id)arg2 className:(id)arg3 ;
-(BOOL)isIDValid:(id)arg1 ;
-(void)writeLineBreak;
-(void)startAnchorElementWithHref:(id)arg1 title:(id)arg2 target:(id)arg3 rel:(id)arg4 ;
-(void)writeImageWithSrc:(id)arg1 alt:(id)arg2 width:(id)arg3 height:(id)arg4 ;
-(void)writeLinkWithHref:(id)arg1 type:(id)arg2 rel:(id)arg3 title:(id)arg4 media:(id)arg5 ;
-(void)writeLinkToStylesheet:(id)arg1 title:(id)arg2 media:(id)arg3 ;
-(void)writeJavascriptWithSrc:(id)arg1 encoding:(unsigned long long)arg2 ;
-(void)writeJavascriptWithSrc:(id)arg1 charset:(id)arg2 ;
-(void)writeJavascript:(id)arg1 useCDATA:(BOOL)arg2 ;
-(void)startJavascriptElementWithSrc:(id)arg1 ;
-(void)startJavascriptCDATA;
-(void)endJavascriptCDATA;
-(void)writeParamElementWithName:(id)arg1 value:(id)arg2 ;
-(void)writeStyleElementWithCSSString:(id)arg1 ;
-(void)startStyleElementWithType:(id)arg1 ;
-(BOOL)topElementIsList;
-(BOOL)elementCanBeEmpty:(id)arg1 ;
-(BOOL)canWriteElementInline:(id)arg1 ;
-(BOOL)validateElement:(id)arg1 ;
-(id)validateAttribute:(id)arg1 value:(id)arg2 ofElement:(id)arg3 ;
-(void)startElement:(id)arg1 writeInline:(BOOL)arg2 ;
-(void)closeEmptyElementTag;
@end

