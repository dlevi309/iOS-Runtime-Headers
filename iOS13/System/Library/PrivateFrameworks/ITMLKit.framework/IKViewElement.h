/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKStyleableElement.h>

@protocol IKStyleableElement;
@class NSArray, IKAppDocument, IKViewElementStyleComposer, IKViewElementStyle, NSString, NSDictionary, IKChangeSet, NSMutableDictionary, NSMutableSet, IKDataBinding, IKDOMBindingController;

@interface IKViewElement : NSObject <IKStyleableElement> {

	NSArray* _unfilteredChildren;
	NSArray* _visibleChildren;
	BOOL _isPartOfPrototypeElement;
	BOOL _isProxyElement;
	BOOL _disabled;
	BOOL _impressionable;
	BOOL _didUpdateAutoHighlightIdentifier;
	BOOL _areChildrenBound;
	BOOL _prototypesUpdated;
	IKAppDocument* _appDocument;
	IKViewElementStyleComposer* _styleComposer;
	IKViewElementStyle* _style;
	id<IKStyleableElement> _parentStyleableElement;
	NSString* _elementID;
	unsigned long long _elementType;
	NSString* _elementName;
	IKViewElement* _parent;
	NSDictionary* _attributes;
	NSString* _accessibilityText;
	NSString* _autoHighlightIdentifier;
	NSDictionary* _impressionableAttributes;
	unsigned long long _updateType;
	IKChangeSet* _unfilteredChildrenChangeSet;
	NSArray* _features;
	NSDictionary* _dataDictionary;
	NSString* _classSelector;
	NSMutableDictionary* _metadataDict;
	NSMutableSet* _activeSingularEvents;
	NSString* _itmlID;
	IKDataBinding* _binding;
	IKDOMBindingController* _bindingController;
	NSArray* _aliases;
	unsigned long long _implicitUpdateType;

}

@property (assign,nonatomic,__weak) IKViewElement * parent;                                       //@synthesize parent=_parent - In the implementation block
@property (nonatomic,copy,readonly) NSString * classSelector;                                     //@synthesize classSelector=_classSelector - In the implementation block
@property (nonatomic,retain) NSDictionary * dataDictionary;                                       //@synthesize dataDictionary=_dataDictionary - In the implementation block
@property (nonatomic,copy) NSString * autoHighlightIdentifier;                                    //@synthesize autoHighlightIdentifier=_autoHighlightIdentifier - In the implementation block
@property (assign,nonatomic) BOOL didUpdateAutoHighlightIdentifier;                               //@synthesize didUpdateAutoHighlightIdentifier=_didUpdateAutoHighlightIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadataDict;                                  //@synthesize metadataDict=_metadataDict - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeSingularEvents;                                 //@synthesize activeSingularEvents=_activeSingularEvents - In the implementation block
@property (assign,nonatomic,__weak) IKAppDocument * appDocument;                                  //@synthesize appDocument=_appDocument - In the implementation block
@property (nonatomic,retain,readonly) NSString * itmlID;                                          //@synthesize itmlID=_itmlID - In the implementation block
@property (nonatomic,readonly) IKDataBinding * binding;                                           //@synthesize binding=_binding - In the implementation block
@property (nonatomic,readonly) IKDOMBindingController * bindingController;                        //@synthesize bindingController=_bindingController - In the implementation block
@property (nonatomic,readonly) BOOL areChildrenBound;                                             //@synthesize areChildrenBound=_areChildrenBound - In the implementation block
@property (nonatomic,readonly) BOOL prototypesUpdated;                                            //@synthesize prototypesUpdated=_prototypesUpdated - In the implementation block
@property (assign,nonatomic) unsigned long long updateType;                                       //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * aliases;                                            //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,readonly) BOOL isPartOfPrototypeElement;                                     //@synthesize isPartOfPrototypeElement=_isPartOfPrototypeElement - In the implementation block
@property (nonatomic,readonly) BOOL isProxyElement;                                               //@synthesize isProxyElement=_isProxyElement - In the implementation block
@property (nonatomic,readonly) unsigned long long implicitUpdateType;                             //@synthesize implicitUpdateType=_implicitUpdateType - In the implementation block
@property (nonatomic,copy,readonly) NSString * elementID;                                         //@synthesize elementID=_elementID - In the implementation block
@property (nonatomic,readonly) unsigned long long elementType;                                    //@synthesize elementType=_elementType - In the implementation block
@property (nonatomic,copy,readonly) NSString * elementName;                                       //@synthesize elementName=_elementName - In the implementation block
@property (nonatomic,retain,readonly) NSArray * children; 
@property (nonatomic,retain,readonly) NSArray * unfilteredChildren;                               //@synthesize unfilteredChildren=_unfilteredChildren - In the implementation block
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,retain,readonly) NSDictionary * attributes;                                  //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain,readonly) IKViewElementStyle * style;                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityText;                                 //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                     //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isImpressionable,nonatomic) BOOL impressionable;                         //@synthesize impressionable=_impressionable - In the implementation block
@property (nonatomic,readonly) NSDictionary * impressionableAttributes;                           //@synthesize impressionableAttributes=_impressionableAttributes - In the implementation block
@property (nonatomic,readonly) IKChangeSet * unfilteredChildrenChangeSet;                         //@synthesize unfilteredChildrenChangeSet=_unfilteredChildrenChangeSet - In the implementation block
@property (nonatomic,copy,readonly) NSArray * features;                                           //@synthesize features=_features - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<IKStyleableElement> parentStyleableElement;              //@synthesize parentStyleableElement=_parentStyleableElement - In the implementation block
@property (nonatomic,retain) IKViewElementStyleComposer * styleComposer;                          //@synthesize styleComposer=_styleComposer - In the implementation block
+(id)supportedFeatures;
+(BOOL)shouldParseChildDOMElements;
+(unsigned long long)updateTypeForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
+(id)supportedFeaturesForElementName:(id)arg1 ;
+(BOOL)shouldParseChildDOMElement:(id)arg1 ;
+(unsigned long long)evaluateElementUpdateType:(id)arg1 ;
+(void)willParseDOMElement:(id)arg1 ;
+(id)effectiveChildDOMElementsForDOMElement:(id)arg1 ;
+(id)DOMEventTypeNameMap;
+(id)_eventXMLNameMap;
-(id)init;
-(void)dealloc;
-(NSString *)debugDescription;
-(IKViewElement *)parent;
-(void)setParent:(IKViewElement *)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSDictionary *)attributes;
-(IKViewElementStyle *)style;
-(IKDataBinding *)binding;
-(BOOL)isHidden;
-(NSArray *)features;
-(BOOL)isDisabled;
-(NSArray *)children;
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)elementID;
-(unsigned long long)elementType;
-(NSString *)accessibilityText;
-(unsigned long long)updateType;
-(NSArray *)aliases;
-(NSString *)elementName;
-(void)setUpdateType:(unsigned long long)arg1 ;
-(NSDictionary *)dataDictionary;
-(id)childTextElementWithStyle:(unsigned long long)arg1 ;
-(id)childElementWithType:(unsigned long long)arg1 ;
-(id)childElementsWithType:(unsigned long long)arg1 ;
-(IKAppDocument *)appDocument;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(void)dispatchEventOfType:(unsigned long long)arg1 canBubble:(BOOL)arg2 isCancelable:(BOOL)arg3 extraInfo:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)dispatchEvent:(id)arg1 eventAttribute:(id)arg2 canBubble:(BOOL)arg3 isCancelable:(BOOL)arg4 extraInfo:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(NSString *)itmlID;
-(void)configureUpdatesWithElement:(id)arg1 ;
-(void)setAppDocument:(IKAppDocument *)arg1 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)resetProperty:(unsigned long long)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(void)resetImplicitUpdates;
-(NSArray *)unfilteredChildren;
-(NSString *)classSelector;
-(id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3 ;
-(id)initWithOriginalElement:(id)arg1 ;
-(void)performImplicitUpdates:(/*^block*/id)arg1 ;
-(id<IKStyleableElement>)parentStyleableElement;
-(IKViewElementStyleComposer *)styleComposer;
-(void)setStyleComposer:(IKViewElementStyleComposer *)arg1 ;
-(IKDOMBindingController *)bindingController;
-(id)proxyElementForLoadedChildElement:(id)arg1 ;
-(BOOL)canProxyUnloadedChildElement:(id)arg1 ;
-(NSString *)autoHighlightIdentifier;
-(void)resetUpdates;
-(IKChangeSet *)unfilteredChildrenChangeSet;
-(id)childImageElementWithType:(unsigned long long)arg1 ;
-(void)disperseUpdateType:(unsigned long long)arg1 ;
-(void)adoptElement:(id)arg1 ;
-(BOOL)isPartOfPrototypeElement;
-(BOOL)isProxyElement;
-(BOOL)_elevateToImplicitUpdateType:(unsigned long long)arg1 ;
-(BOOL)isImpressionable;
-(NSDictionary *)impressionableAttributes;
-(BOOL)didUpdateAutoHighlightIdentifier;
-(void)setDidUpdateAutoHighlightIdentifier:(BOOL)arg1 ;
-(void)setAutoHighlightIdentifier:(NSString *)arg1 ;
-(unsigned long long)_updateSubtreeWithElement:(id)arg1 ;
-(void)setDataDictionary:(NSDictionary *)arg1 ;
-(void)updateWithActualElement:(id)arg1 ;
-(NSMutableDictionary *)metadataDict;
-(void)setMetadataDict:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)activeSingularEvents;
-(void)setActiveSingularEvents:(NSMutableSet *)arg1 ;
-(unsigned long long)implicitUpdateType;
-(void)setImpressionable:(BOOL)arg1 ;
-(BOOL)areChildrenBound;
-(BOOL)prototypesUpdated;
@end

