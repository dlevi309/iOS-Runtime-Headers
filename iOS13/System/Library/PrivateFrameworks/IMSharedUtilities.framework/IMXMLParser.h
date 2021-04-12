/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, IMXMLParserContext, IMXMLParserFrame, NSMutableArray, NSString;

@interface IMXMLParser : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	IMXMLParserContext* _context;
	IMXMLParserFrame* _topFrame;
	NSMutableArray* _otherFrames;
	TidyDoc* _tidyDoc;
	CFDictionaryRef _framespace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2 ;
-(void)_teardownTidy;
-(void)_setupTidy;
-(id)_newDataByTidyingData:(id)arg1 ;
-(BOOL)parseContext:(id)arg1 ;
@end

