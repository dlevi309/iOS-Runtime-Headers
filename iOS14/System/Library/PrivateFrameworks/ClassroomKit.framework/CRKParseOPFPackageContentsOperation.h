/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, NSString, CRKOPFPackageContents, NSMutableString;

@interface CRKParseOPFPackageContentsOperation : CATOperation <NSXMLParserDelegate> {

	NSXMLParser* mOPFParser;
	NSString* mOPFFilePath;
	CRKOPFPackageContents* mPackageContents;
	NSMutableString* mCurrentText;
	NSString* mCoverItemID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(BOOL)isAsynchronous;
-(void)main;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(id)initWithOPFFilePath:(id)arg1 identifierType:(id)arg2 identifier:(id)arg3 ;
@end

