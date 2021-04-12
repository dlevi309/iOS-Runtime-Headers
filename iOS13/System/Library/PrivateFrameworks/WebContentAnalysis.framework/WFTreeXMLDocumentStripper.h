/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/

#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
#import <libobjc.A.dylib/WFWebPageProtocol.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface WFTreeXMLDocumentStripper : NSObject <WFWebPageProtocol> {

	xmlDoc* xmlDocument;
	NSString* pageTitle;
	NSMutableDictionary* metaTagsLabeled;
	NSMutableArray* metaTagsUnlabeled;
	NSMutableArray* scriptBlocks;
	NSMutableArray* images;
	NSString* pageContent;
	NSMutableArray* links;
	BOOL hasFrameset;
	BOOL hasShortRefresh;

}
+(id)treeStripperWithXMLDocument:(xmlDoc*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)images;
-(id)URLString;
-(id)links;
-(id)pageTitle;
-(void)setPageTitle:(id)arg1 ;
-(id)pageContent;
-(id)initWithXMLDocument:(xmlDoc*)arg1 ;
-(void)setXMLDocument:(xmlDoc*)arg1 ;
-(void)strip;
-(void)processXMLDocument:(xmlDoc*)arg1 ;
-(id)processXMLDocument:(xmlDoc*)arg1 blockComments:(BOOL)arg2 ;
-(id)metaTagDescription;
-(id)metaTagKeywords;
-(id)metaTagsLabeled;
-(id)metaTagsUnlabeled;
-(id)scriptBlocks;
-(BOOL)hasFrameset;
-(BOOL)hasShortRefresh;
-(id)metaTagRating;
@end

