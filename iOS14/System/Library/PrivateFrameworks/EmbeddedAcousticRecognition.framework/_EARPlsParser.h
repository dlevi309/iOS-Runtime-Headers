/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, NSMutableDictionary, NSMutableString, NSMutableArray, NSString;

@interface _EARPlsParser : NSObject <NSXMLParserDelegate> {

	NSXMLParser* parser;
	NSMutableDictionary* lexeme;
	NSMutableString* elementValue;
	NSMutableArray* _lexemes;

}

@property (nonatomic,copy) NSMutableArray * lexemes;                //@synthesize lexemes=_lexemes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(id)initWithData:(id)arg1 ;
-(NSMutableArray *)lexemes;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(id)initWithFilePath:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)setLexemes:(NSMutableArray *)arg1 ;
@end

