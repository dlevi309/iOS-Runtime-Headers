/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)currentParser;
+(void)setCurrentParser:(id)arg1 ;
-(BOOL)parse;
-(unsigned long long)externalEntityResolvingPolicy;
-(id)initWithStream:(id)arg1 ;
-(BOOL)parseData:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id<NSXMLParserDelegate>)delegate;
-(long long)lineNumber;
-(void)setShouldContinueAfterFatalError:(BOOL)arg1 ;
-(void)setAllowedExternalEntityURLs:(NSSet *)arg1 ;
-(BOOL)parseFromStream;
-(id)publicID;
-(void)setExternalEntityResolvingPolicy:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(xmlParserInput*)_xmlExternalEntityWithURL:(const char*)arg1 identifier:(const char*)arg2 context:(xmlParserCtxt*)arg3 originalLoaderFunction:(/*function pointer*/void*)arg4 ;
-(BOOL)shouldContinueAfterFatalError;
-(void)setDelegate:(id<NSXMLParserDelegate>)arg1 ;
-(NSSet *)allowedExternalEntityURLs;
-(void)_pushNamespaces:(id)arg1 ;
-(id)initForIncrementalParsing;
-(void)_setParserError:(long long)arg1 ;
-(BOOL)shouldResolveExternalEntities;
-(id)systemID;
-(void)_popNamespaces;
-(BOOL)finishIncrementalParse;
-(void)setShouldResolveExternalEntities:(BOOL)arg1 ;
-(BOOL)shouldProcessNamespaces;
-(void)abortParsing;
-(NSError *)parserError;
-(void)setShouldReportNamespacePrefixes:(BOOL)arg1 ;
-(void)setShouldProcessNamespaces:(BOOL)arg1 ;
-(BOOL)shouldReportNamespacePrefixes;
-(long long)columnNumber;
-(BOOL)_handleParseResult:(long long)arg1 ;
-(void)_setExpandedParserError:(id)arg1 ;
-(void)dealloc;
-(void)_initializeSAX2Callbacks;
@end

