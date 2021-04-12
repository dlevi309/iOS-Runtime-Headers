/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableString, UIPDFAnnotation, NSString;

@interface UIPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate> {

	NSMutableString* _characters;
	BOOL _parseError;
	UIPDFAnnotation* _annotation;

}

@property (nonatomic,retain) UIPDFAnnotation * annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) BOOL parseError;                         //@synthesize parseError=_parseError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(UIPDFAnnotation *)annotation;
-(void)setAnnotation:(UIPDFAnnotation *)arg1 ;
-(BOOL)parseError;
@end

