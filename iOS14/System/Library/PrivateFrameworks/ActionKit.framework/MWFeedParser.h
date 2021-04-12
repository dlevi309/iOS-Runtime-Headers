/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<MWFeedParserDelegate> delegate; 
@property (assign,nonatomic) int feedParseType; 
@property (getter=isStopped,nonatomic,readonly) BOOL stopped; 
@property (getter=didFail,nonatomic,readonly) BOOL failed; 
@property (getter=isParsing,nonatomic,readonly) BOOL parsing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)parse;
-(MWFeedInfo *)info;
-(NSURLSessionDataTask *)urlTask;
-(id)init;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(id<MWFeedParserDelegate>)delegate;
-(MWFeedItem *)item;
-(BOOL)isStopped;
-(NSString *)currentPath;
-(void)setCurrentPath:(NSString *)arg1 ;
-(NSURL *)url;
-(NSURLRequest *)request;
-(void)setItem:(MWFeedItem *)arg1 ;
-(void)setDelegate:(id<MWFeedParserDelegate>)arg1 ;
-(void)parser:(id)arg1 validationErrorOccurred:(id)arg2 ;
-(void)setCurrentText:(NSMutableString *)arg1 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(NSMutableString *)currentText;
-(void)setInfo:(MWFeedInfo *)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(void)reset;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(BOOL)didFail;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)setUrlTask:(NSURLSessionDataTask *)arg1 ;
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
@end

