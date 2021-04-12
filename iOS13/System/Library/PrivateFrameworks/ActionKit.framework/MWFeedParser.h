/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@protocol MWFeedParserDelegate;
@class NSURLSessionDataTask, NSXMLParser, NSDateFormatter, NSURL, NSString, NSMutableString, NSDictionary, MWFeedItem, MWFeedInfo, NSURLRequest;

@interface MWFeedParser : NSObject <NSXMLParserDelegate> {

	id<MWFeedParserDelegate> delegate;
	NSURLSessionDataTask* urlTask;
	int feedParseType;
	NSXMLParser* feedParser;
	int feedType;
	NSDateFormatter* dateFormatterRFC822;
	NSDateFormatter* dateFormatterRFC3339;
	NSURL* url;
	BOOL aborted;
	BOOL parsing;
	BOOL stopped;
	BOOL failed;
	BOOL parsingComplete;
	BOOL hasEncounteredItems;
	NSString* pathOfElementWithXHTMLType;
	BOOL parseStructureAsContent;
	NSString* currentPath;
	NSMutableString* currentText;
	NSDictionary* currentElementAttributes;
	MWFeedItem* item;
	MWFeedInfo* info;
	NSURLRequest* request;

}

@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,retain) NSURLRequest * request; 
@property (nonatomic,retain) NSURLSessionDataTask * urlTask; 
@property (nonatomic,retain) NSXMLParser * feedParser; 
@property (nonatomic,retain) NSString * currentPath; 
@property (nonatomic,retain) NSMutableString * currentText; 
@property (nonatomic,retain) NSDictionary * currentElementAttributes; 
@property (nonatomic,retain) MWFeedItem * item; 
@property (nonatomic,retain) MWFeedInfo * info; 
@property (nonatomic,copy) NSString * pathOfElementWithXHTMLType; 
@property (assign,nonatomic) id<MWFeedParserDelegate> delegate; 
@property (assign,nonatomic) int feedParseType; 
@property (getter=isStopped,nonatomic,readonly) BOOL stopped; 
@property (getter=didFail,nonatomic,readonly) BOOL failed; 
@property (getter=isParsing,nonatomic,readonly) BOOL parsing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<MWFeedParserDelegate>)delegate;
-(void)setDelegate:(id<MWFeedParserDelegate>)arg1 ;
-(BOOL)isStopped;
-(MWFeedItem *)item;
-(void)setItem:(MWFeedItem *)arg1 ;
-(NSURL *)url;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(BOOL)parse;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(void)reset;
-(MWFeedInfo *)info;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)request;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)currentPath;
-(void)setCurrentPath:(NSString *)arg1 ;
-(void)setInfo:(MWFeedInfo *)arg1 ;
-(NSMutableString *)currentText;
-(void)setCurrentText:(NSMutableString *)arg1 ;
-(NSURLSessionDataTask *)urlTask;
-(void)setUrlTask:(NSURLSessionDataTask *)arg1 ;
-(void)parser:(id)arg1 validationErrorOccurred:(id)arg2 ;
-(BOOL)isParsing;
-(int)feedParseType;
-(NSXMLParser *)feedParser;
-(NSString *)pathOfElementWithXHTMLType;
-(NSDictionary *)currentElementAttributes;
-(id)initWithFeedURL:(id)arg1 ;
-(id)initWithFeedRequest:(id)arg1 ;
-(void)startParsingData:(id)arg1 textEncodingName:(id)arg2 ;
-(void)abortParsingEarly;
-(void)stopParsing;
-(void)parsingFinished;
-(void)parsingFailedWithErrorCode:(int)arg1 andDescription:(id)arg2 ;
-(void)dispatchFeedInfoToDelegate;
-(void)dispatchFeedItemToDelegate;
-(BOOL)createEnclosureFromAttributes:(id)arg1 andAddToItem:(id)arg2 ;
-(BOOL)processAtomLink:(id)arg1 andAddToMWObject:(id)arg2 ;
-(void)setFeedParseType:(int)arg1 ;
-(void)setFeedParser:(NSXMLParser *)arg1 ;
-(void)setCurrentElementAttributes:(NSDictionary *)arg1 ;
-(void)setPathOfElementWithXHTMLType:(NSString *)arg1 ;
-(BOOL)didFail;
@end

