/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)endLocation;
-(NSString *)tagName;
-(void)setEndLocation:(unsigned long long)arg1 ;
-(id)recursiveDescription;
-(_MFParsedHTMLNode *)nextSibling;
-(void)setHtmlString:(NSString *)arg1 ;
-(void)appendChild:(id)arg1 ;
-(BOOL)hasChildNodes;
-(NSString *)htmlString;
-(unsigned long long)startLocation;
-(void)setStartLocation:(unsigned long long)arg1 ;
-(void)setParentNode:(_MFParsedHTMLNode *)arg1 ;
-(_MFParsedHTMLNode *)lastChild;
-(_MFParsedHTMLNode *)parentNode;
-(_MFParsedHTMLNode *)firstChild;
-(void)collectDescendanceIntoArray:(id)arg1 ;
-(void)setNextSibling:(_MFParsedHTMLNode *)arg1 ;
-(void)addRecursiveDescriptionWithLevel:(unsigned long long)arg1 toString:(id)arg2 ;
-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(void)dealloc;
@end

