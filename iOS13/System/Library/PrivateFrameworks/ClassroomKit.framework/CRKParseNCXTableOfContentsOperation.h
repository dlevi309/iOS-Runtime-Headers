/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, NSString, CRKOPFPackageContents, NSMutableArray, CRKChapter, NSMutableString;

@interface CRKParseNCXTableOfContentsOperation : CATOperation <NSXMLParserDelegate> {

	NSXMLParser* mNCXParser;
	NSString* mNCXFilePath;
	CRKOPFPackageContents* mPackageContents;
	NSMutableArray* mChapters;
	CRKChapter* mCurrentChapter;
	NSMutableArray* mParentChapters;
	NSMutableString* mCurrentText;
	NSString* mCurrentElementName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(BOOL)isAsynchronous;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 packageContents:(id)arg2 ;
@end

