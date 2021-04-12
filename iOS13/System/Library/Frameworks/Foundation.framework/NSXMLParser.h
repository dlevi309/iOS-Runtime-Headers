/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSError, NSMutableArray, NSData, NSSet, NSURL;

@interface NSXMLParser : NSObject {

	id _reserved0;
	id _delegate;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	xmlSAXHandler* _saxHandler;
	xmlParserCtxt* _parserContext;
	unsigned long long _parserFlags;
	NSError* _error;
	NSMutableArray* _namespaces;
	CFDictionaryRef _slowStringMap;
	BOOL _delegateAborted;
	BOOL _haveDetectedEncoding;
	NSData* _bomChunk;
	unsigned long long _chunkSize;
	NSSet* _allowedEntityURLs;
	NSURL* _url;
	unsigned long long _externalEntityResolvingPolicy;

}

@property (assign) id<NSXMLParserDelegate> delegate; 
@property (assign) BOOL shouldProcessNamespaces; 
@property (assign) BOOL shouldReportNamespacePrefixes; 
@property (assign) unsigned long long externalEntityResolvingPolicy; 
@property (copy) NSSet * allowedExternalEntityURLs; 
@property (copy,readonly) NSError * parserError; 
@property (assign) BOOL shouldResolveExternalEntities; 
+(void)setCurrentParser:(id)arg1 ;
+(id)currentParser;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id<NSXMLParserDelegate>)delegate;
-(void)setDelegate:(id<NSXMLParserDelegate>)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)initWithStream:(id)arg1 ;
-(void)_initializeSAX2Callbacks;
-(id)initForIncrementalParsing;
-(unsigned long long)externalEntityResolvingPolicy;
-(NSSet *)allowedExternalEntityURLs;
-(void)_setExpandedParserError:(id)arg1 ;
-(void)_setParserError:(long long)arg1 ;
-(BOOL)shouldResolveExternalEntities;
-(BOOL)parseData:(id)arg1 ;
-(BOOL)_handleParseResult:(long long)arg1 ;
-(BOOL)finishIncrementalParse;
-(BOOL)parseFromStream;
-(void)setShouldProcessNamespaces:(BOOL)arg1 ;
-(void)setShouldReportNamespacePrefixes:(BOOL)arg1 ;
-(void)setShouldResolveExternalEntities:(BOOL)arg1 ;
-(void)setAllowedExternalEntityURLs:(NSSet *)arg1 ;
-(void)setExternalEntityResolvingPolicy:(unsigned long long)arg1 ;
-(xmlParserInput*)_xmlExternalEntityWithURL:(const char*)arg1 identifier:(const char*)arg2 context:(xmlParserCtxt*)arg3 originalLoaderFunction:(/*function pointer*/void*)arg4 ;
-(BOOL)shouldProcessNamespaces;
-(BOOL)shouldReportNamespacePrefixes;
-(void)setShouldContinueAfterFatalError:(BOOL)arg1 ;
-(BOOL)shouldContinueAfterFatalError;
-(BOOL)parse;
-(void)abortParsing;
-(NSError *)parserError;
-(id)publicID;
-(id)systemID;
-(long long)lineNumber;
-(long long)columnNumber;
-(void)_pushNamespaces:(id)arg1 ;
-(void)_popNamespaces;
@end

