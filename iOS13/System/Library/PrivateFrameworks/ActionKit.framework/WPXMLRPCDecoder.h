/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, WPXMLRPCDecoderDelegate, NSData, NSMutableString, NSString;

@interface WPXMLRPCDecoder : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	WPXMLRPCDecoderDelegate* _delegate;
	BOOL _isFault;
	NSData* _body;
	NSData* _originalData;
	id _object;
	NSMutableString* _methodName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFault;
-(id)object;
-(id)initWithData:(id)arg1 ;
-(id)error;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parse;
-(void)abortParsing;
-(long long)faultCode;
-(id)faultString;
@end

