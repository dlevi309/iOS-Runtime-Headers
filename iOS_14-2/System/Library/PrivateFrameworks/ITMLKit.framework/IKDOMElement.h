/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKDOMNode.h>
#import <libobjc.A.dylib/IKJDOMParsingElement.h>
#import <libobjc.A.dylib/IKStyleableElement.h>
#import <libobjc.A.dylib/IKJSDOMElement.h>
#import <libobjc.A.dylib/_IKJSDOMElementProxy.h>
#import <libobjc.A.dylib/_IKJSDOMElement.h>
#import <libobjc.A.dylib/IKJSDOMParentNode.h>

@class NSString, IKViewElementStyleComposer, IKDOMNamedNodeMap, NSMutableDictionary, NSArray, NSDictionary, IKDOMHTMLCollection;

@interface IKDOMElement : IKDOMNode <IKJDOMParsingElement, IKStyleableElement, IKJSDOMElement, _IKJSDOMElementProxy, _IKJSDOMElement, IKJSDOMParentNode> {

	NSMutableDictionary* _metadataDict;
	NSArray* _cachedChildElements;
	NSDictionary* _cachedAttributes;
	IKViewElementStyleComposer* styleComposer;
	IKDOMElement* __aliasOf;

}

@property (nonatomic,retain) NSString * innerHTML; 
@property (nonatomic,retain) NSString * outerHTML; 
@property (nonatomic,readonly) BOOL _isPrototypeElement; 
@property (nonatomic,readonly) BOOL _isPartOfPrototypeElement; 
@property (assign,setter=_setAliasOf:,nonatomic,__weak) IKDOMElement * _aliasOf;                  //@synthesize _aliasOf=__aliasOf - In the implementation block
@property (nonatomic,__weak,readonly) id<IKStyleableElement> parentStyleableElement; 
@property (nonatomic,copy,readonly) NSString * elementName; 
@property (nonatomic,retain) IKViewElementStyleComposer * styleComposer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * tagName; 
@property (nonatomic,copy,readonly) IKDOMNamedNodeMap * attributes; 
@property (nonatomic,readonly) IKDOMHTMLCollection * children; 
@property (nonatomic,readonly) IKDOMElement * firstElementChild; 
@property (nonatomic,readonly) IKDOMElement * lastElementChild; 
@property (nonatomic,readonly) unsigned long long childElementCount; 
+(id)_filteredAttributes;
-(IKDOMHTMLCollection *)children;
-(long long)nodeType;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)hasAttributes;
-(unsigned long long)childElementCount;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)tagName;
-(NSString *)elementName;
-(id)nodeName;
-(IKDOMNamedNodeMap *)attributes;
-(id)getAttribute:(id)arg1 ;
-(id)_attributes;
-(id)getElementsByTagName:(id)arg1 ;
-(NSString *)innerHTML;
-(id)textContent;
-(BOOL)hasAttribute:(id)arg1 ;
-(void)setInnerHTML:(NSString *)arg1 ;
-(void)setTextContent:(id)arg1 ;
-(IKDOMElement *)firstElementChild;
-(void)removeAttribute:(id)arg1 ;
-(IKDOMElement *)lastElementChild;
-(NSString *)outerHTML;
-(void)setOuterHTML:(NSString *)arg1 ;
-(void)setAttribute:(id)arg1 :(id)arg2 ;
-(id)childElementsByTagName:(id)arg1 ;
-(void)_setAliasOf:(id)arg1 ;
-(void)domib_setAppDataSet:(id)arg1 ;
-(id)domib_appDataSet;
-(void)domib_setItemsChangeSet:(id)arg1 ;
-(id)domib_itemsChangeSet;
-(void)domib_setVisibleIndexRange:(NSRange)arg1 ;
-(NSRange)domib_visibleIndexRange;
-(id)childElements;
-(id)ik_templateName;
-(void)childrenUpdatedWithUpdatedChildNodes:(id)arg1 notify:(BOOL)arg2 ;
-(void)setAttributeValue:(id)arg1 withName:(id)arg2 ;
-(void)_markUpdatedForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
-(IKDOMElement *)_aliasOf;
-(BOOL)_isPrototypeElement;
-(BOOL)_isPartOfPrototypeElement;
-(id<IKStyleableElement>)parentStyleableElement;
-(IKViewElementStyleComposer *)styleComposer;
-(void)setStyleComposer:(IKViewElementStyleComposer *)arg1 ;
-(id)asPrivateIKJSDOMElement;
-(id)childElementByTagName:(id)arg1 ;
-(void)domp_setPrototype:(id)arg1 ;
-(id)domp_prototype;
-(void)domp_setDerivativeDOMElementsBySelector:(id)arg1 ;
-(id)domp_derivativeDOMElementsBySelector;
-(void)insertAdjacentHTML:(id)arg1 :(id)arg2 ;
-(id)ik_templateElementCSSSelectorList;
-(id)domb_boundCSSRule;
-(void)domb_setDOMBindingController:(id)arg1 ;
-(id)domb_domBindingController;
-(void)domb_setDataBinding:(id)arg1 ;
-(id)domb_dataBinding;
-(void)domb_setMutationRuleSet:(id)arg1 ;
-(id)domb_mutationRuleSet;
-(void)domb_setBoundCSSRule:(id)arg1 ;
-(void)ikve_setPrototypesID:(id)arg1 ;
-(id)ikve_prototypesID;
-(void)ikve_setRulesID:(id)arg1 ;
-(id)ikve_rulesID;
-(void)dombs_setItems:(id)arg1 ;
-(id)dombs_items;
@end

