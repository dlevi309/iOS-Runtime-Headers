/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol ENXMLSaxParserDelegate;
#import <ActionKit/ActionKit-Structs.h>
@class NSURLConnection, NSArray;

@interface ENXMLSaxParser : NSObject {

	id<ENXMLSaxParserDelegate> _delegate;
	xmlParserCtxt* _parserContext;
	BOOL _parserHalted;
	BOOL _isHTML;
	NSURLConnection* _urlConnection;
	NSArray* _dtds;

}

@property (assign,nonatomic,__weak) id<ENXMLSaxParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isHTML;                                             //@synthesize isHTML=_isHTML - In the implementation block
-(void)appendBytes:(char*)arg1 length:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(id<ENXMLSaxParserDelegate>)delegate;
-(void)setDelegate:(id<ENXMLSaxParserDelegate>)arg1 ;
-(void)appendData:(id)arg1 ;
-(BOOL)parseData:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(BOOL)parseContentsOfURL:(id)arg1 ;
-(BOOL)isHTML;
-(xmlEntity*)lookupEntity:(const char*)arg1 ;
-(xmlSAXHandler*)saxHandler;
-(void)finalizeParser;
-(BOOL)parseContentsOfFile:(id)arg1 ;
-(BOOL)parseContents:(id)arg1 ;
-(BOOL)parseContentsOfURLWithRequest:(id)arg1 ;
-(void)stopParser;
-(void)_stopAndSendError:(id)arg1 ;
-(void)setIsHTML:(BOOL)arg1 ;
@end

