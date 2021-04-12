/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString, IKDOMNode, IKDOMNodeList, IKDOMDocument, JSValue;


@protocol IKJSDOMNode <JSExport>
@property (nonatomic,retain,readonly) NSString * nodeName; 
@property (nonatomic,retain) NSString * nodeValue; 
@property (nonatomic,readonly) long long nodeType; 
@property (nonatomic,__weak,readonly) IKDOMNode * parentNode; 
@property (nonatomic,retain,readonly) IKDOMNodeList * childNodes; 
@property (nonatomic,retain,readonly) IKDOMNode * firstChild; 
@property (nonatomic,retain,readonly) IKDOMNode * lastChild; 
@property (nonatomic,__weak,readonly) IKDOMNode * previousSibling; 
@property (nonatomic,__weak,readonly) IKDOMNode * nextSibling; 
@property (nonatomic,__weak,readonly) IKDOMDocument * ownerDocument; 
@property (nonatomic,retain) NSString * textContent; 
@property (assign,nonatomic,__weak) JSValue * dataItem; 
@required
-(IKDOMNode *)parentNode;
-(BOOL)contains:(id)arg1;
-(IKDOMNode *)firstChild;
-(IKDOMNode *)nextSibling;
-(IKDOMDocument *)ownerDocument;
-(long long)nodeType;
-(BOOL)hasChildNodes;
-(id)removeChild:(id)arg1;
-(id)appendChild:(id)arg1;
-(NSString *)textContent;
-(void)setTextContent:(id)arg1;
-(BOOL)isSameNode:(id)arg1;
-(IKDOMNode *)lastChild;
-(IKDOMNodeList *)childNodes;
-(IKDOMNode *)previousSibling;
-(NSString *)nodeValue;
-(NSString *)nodeName;
-(void)setNodeValue:(id)arg1;
-(id)cloneNode:(BOOL)arg1;
-(BOOL)isEqualNode:(id)arg1;
-(id)insertBefore:(id)arg1 :(id)arg2;
-(id)replaceChild:(id)arg1 :(id)arg2;
-(void)setDataItem:(id)arg1;
-(JSValue *)dataItem;
-(id)getFeature:(id)arg1 :(id)arg2;

@end

