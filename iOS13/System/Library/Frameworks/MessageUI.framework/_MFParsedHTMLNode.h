/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <libobjc.A.dylib/MFMessageBodyTreeNode.h>
#import <libobjc.A.dylib/MFMessageBodyConsumableInnerTextNode.h>

@class NSMutableArray, NSString;

@interface _MFParsedHTMLNode : NSObject <MFMessageBodyTreeNode, MFMessageBodyConsumableInnerTextNode> {

	NSMutableArray* _childNodes;
	_MFParsedHTMLNode* _parentNode;
	_MFParsedHTMLNode* _nextSibling;
	NSString* _htmlString;
	unsigned long long _startLocation;
	unsigned long long _endLocation;

}

@property (assign,nonatomic,__weak) _MFParsedHTMLNode * parentNode;               //@synthesize parentNode=_parentNode - In the implementation block
@property (assign,nonatomic,__weak) _MFParsedHTMLNode * nextSibling;              //@synthesize nextSibling=_nextSibling - In the implementation block
@property (nonatomic,readonly) BOOL hasChildNodes; 
@property (nonatomic,readonly) _MFParsedHTMLNode * firstChild; 
@property (nonatomic,readonly) _MFParsedHTMLNode * lastChild; 
@property (nonatomic,readonly) NSString * tagName; 
@property (nonatomic,retain) NSString * htmlString;                               //@synthesize htmlString=_htmlString - In the implementation block
@property (assign,nonatomic) unsigned long long startLocation;                    //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) unsigned long long endLocation;                      //@synthesize endLocation=_endLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(_MFParsedHTMLNode *)parentNode;
-(void)setParentNode:(_MFParsedHTMLNode *)arg1 ;
-(unsigned long long)startLocation;
-(unsigned long long)endLocation;
-(_MFParsedHTMLNode *)firstChild;
-(_MFParsedHTMLNode *)nextSibling;
-(NSString *)tagName;
-(BOOL)hasChildNodes;
-(void)appendChild:(id)arg1 ;
-(id)recursiveDescription;
-(void)setStartLocation:(unsigned long long)arg1 ;
-(void)setEndLocation:(unsigned long long)arg1 ;
-(_MFParsedHTMLNode *)lastChild;
-(NSString *)htmlString;
-(void)setHtmlString:(NSString *)arg1 ;
-(void)collectDescendanceIntoArray:(id)arg1 ;
-(void)setNextSibling:(_MFParsedHTMLNode *)arg1 ;
-(void)addRecursiveDescriptionWithLevel:(unsigned long long)arg1 toString:(id)arg2 ;
-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
@end

