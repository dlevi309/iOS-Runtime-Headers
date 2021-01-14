/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)nodeType;
-(IKDOMNode *)nextSibling;
-(IKDOMNode *)previousSibling;
-(id)appendChild:(id)arg1;
-(BOOL)hasChildNodes;
-(NSString *)nodeName;
-(IKDOMNode *)lastChild;
-(NSString *)textContent;
-(IKDOMNode *)parentNode;
-(BOOL)contains:(id)arg1;
-(IKDOMNode *)firstChild;
-(id)removeChild:(id)arg1;
-(void)setTextContent:(id)arg1;
-(IKDOMNodeList *)childNodes;
-(NSString *)nodeValue;
-(BOOL)isSameNode:(id)arg1;
-(IKDOMDocument *)ownerDocument;
-(void)setNodeValue:(id)arg1;
-(id)cloneNode:(BOOL)arg1;
-(BOOL)isEqualNode:(id)arg1;
-(id)insertBefore:(id)arg1 :(id)arg2;
-(id)replaceChild:(id)arg1 :(id)arg2;
-(void)setDataItem:(id)arg1;
-(JSValue *)dataItem;
-(id)getFeature:(id)arg1 :(id)arg2;

@end

