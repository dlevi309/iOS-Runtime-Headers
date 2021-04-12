/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKStyleableElement.h>

@protocol IKStyleableElement;
@class NSArray, IKAppDocument, IKViewElementStyleComposer, IKViewElementStyle, NSString, NSDictionary, IKChangeSet, NSMutableDictionary, NSMutableSet, IKDataBinding, IKDOMBindingController, VUIViewElementDataSource, NSSet, SKUIEntityProviderListViewElement;

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

@property (nonatomic,readonly) VUIViewElementDataSource * vui_DataSource; 
@property (nonatomic,copy,readonly) NSSet * vui_updateEventDescriptors; 
@property (nonatomic,readonly) long long tv_scaleMode; 
@property (assign,setter=tv_setParsedOnce:,getter=tv_isParsedOnce,nonatomic) BOOL tv_parsedOnce; 
@property (assign,setter=tv_setProxyView:,nonatomic,__weak) id tv_proxyView; 
@property (nonatomic,readonly) SKUIEntityProviderListViewElement * entityProviderList; 
@property (assign,nonatomic,__weak) IKViewElement * parent;                                                   //@synthesize parent=_parent - In the implementation block
@property (nonatomic,copy,readonly) NSString * classSelector;                                                 //@synthesize classSelector=_classSelector - In the implementation block
@property (nonatomic,retain) NSDictionary * dataDictionary;                                                   //@synthesize dataDictionary=_dataDictionary - In the implementation block
@property (nonatomic,copy) NSString * autoHighlightIdentifier;                                                //@synthesize autoHighlightIdentifier=_autoHighlightIdentifier - In the implementation block
@property (assign,nonatomic) BOOL didUpdateAutoHighlightIdentifier;                                           //@synthesize didUpdateAutoHighlightIdentifier=_didUpdateAutoHighlightIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadataDict;                                              //@synthesize metadataDict=_metadataDict - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeSingularEvents;                                             //@synthesize activeSingularEvents=_activeSingularEvents - In the implementation block
@property (assign,nonatomic,__weak) IKAppDocument * appDocument;                                              //@synthesize appDocument=_appDocument - In the implementation block
@property (nonatomic,retain,readonly) NSString * itmlID;                                                      //@synthesize itmlID=_itmlID - In the implementation block
@property (nonatomic,readonly) IKDataBinding * binding;                                                       //@synthesize binding=_binding - In the implementation block
@property (nonatomic,readonly) IKDOMBindingController * bindingController;                                    //@synthesize bindingController=_bindingController - In the implementation block
@property (nonatomic,readonly) BOOL areChildrenBound;                                                         //@synthesize areChildrenBound=_areChildrenBound - In the implementation block
@property (nonatomic,readonly) BOOL prototypesUpdated;                                                        //@synthesize prototypesUpdated=_prototypesUpdated - In the implementation block
@property (assign,nonatomic) unsigned long long updateType;                                                   //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * aliases;                                                        //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,readonly) BOOL isPartOfPrototypeElement;                                                 //@synthesize isPartOfPrototypeElement=_isPartOfPrototypeElement - In the implementation block
@property (nonatomic,readonly) BOOL isProxyElement;                                                           //@synthesize isProxyElement=_isProxyElement - In the implementation block
@property (nonatomic,readonly) unsigned long long implicitUpdateType;                                         //@synthesize implicitUpdateType=_implicitUpdateType - In the implementation block
@property (nonatomic,copy,readonly) NSString * elementID;                                                     //@synthesize elementID=_elementID - In the implementation block
@property (nonatomic,readonly) unsigned long long elementType;                                                //@synthesize elementType=_elementType - In the implementation block
@property (nonatomic,copy,readonly) NSString * elementName;                                                   //@synthesize elementName=_elementName - In the implementation block
@property (nonatomic,retain,readonly) NSArray * children; 
@property (nonatomic,retain,readonly) NSArray * unfilteredChildren;                                           //@synthesize unfilteredChildren=_unfilteredChildren - In the implementation block
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,retain,readonly) NSDictionary * attributes;                                              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain,readonly) IKViewElementStyle * style;                                             //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityText;                                             //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                                 //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isImpressionable,nonatomic) BOOL impressionable;                                     //@synthesize impressionable=_impressionable - In the implementation block
@property (nonatomic,readonly) NSDictionary * impressionableAttributes;                                       //@synthesize impressionableAttributes=_impressionableAttributes - In the implementation block
@property (nonatomic,readonly) IKChangeSet * unfilteredChildrenChangeSet;                                     //@synthesize unfilteredChildrenChangeSet=_unfilteredChildrenChangeSet - In the implementation block
@property (nonatomic,copy,readonly) NSArray * features;                                                       //@synthesize features=_features - In the implementation block
@property (nonatomic,__weak,readonly) id<IKStyleableElement> parentStyleableElement;                          //@synthesize parentStyleableElement=_parentStyleableElement - In the implementation block
@property (nonatomic,retain) IKViewElementStyleComposer * styleComposer;                                      //@synthesize styleComposer=_styleComposer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_vui_updateEventDescriptorWithType:(unsigned long long)arg1 ;
+(id)tv_approximateViewElementForView:(id)arg1 ;
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
-(NSSet *)vui_updateEventDescriptors;
-(id)mediaInfoForEvent:(id)arg1 playbackContext:(unsigned long long)arg2 includingVideo:(BOOL)arg3 ;
-(id)vui_title;
-(id)vui_imageURL;
-(id)vui_description;
-(VUIViewElementDataSource *)vui_DataSource;
-(void)_parseElementIfNecessary;
-(id)_backgroundImageProxyFromImageElement:(id)arg1 ;
-(unsigned long long)tv_elementType;
-(long long)tv_semanticContentAttribute;
-(void)tv_dispatchEvent:(id)arg1 canBubble:(BOOL)arg2 isCancelable:(BOOL)arg3 extraInfo:(id)arg4 targetResponder:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)tv_proxyView;
-(id)tv_associatedViewElementWithDefaultClass:(Class)arg1 ;
-(long long)tv_scaleModeWithDefaultMode:(long long)arg1 ;
-(id)tv_associatedViewElement;
-(id)itemElementsOfType:(unsigned long long)arg1 ;
-(long long)tv_scaleMode;
-(void)tv_setParsedOnce:(BOOL)arg1 ;
-(BOOL)tv_isParsedOnce;
-(void)retrievePresentationDocumentWithResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)tv_setProxyView:(id)arg1 ;
-(long long)vui_scaleModeWithDefaultMode:(long long)arg1 ;
-(SKUIEntityProviderListViewElement *)entityProviderList;
-(IKDataBinding *)binding;
-(NSArray *)aliases;
-(NSArray *)children;
-(void)setDisabled:(BOOL)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(IKViewElement *)parent;
-(NSString *)accessibilityText;
-(BOOL)isHidden;
-(id)init;
-(NSArray *)features;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)elementName;
-(NSString *)debugDescription;
-(NSString *)itmlID;
-(BOOL)isDisabled;
-(unsigned long long)elementType;
-(void)setParent:(IKViewElement *)arg1 ;
-(NSDictionary *)attributes;
-(unsigned long long)updateType;
-(NSString *)elementID;
-(void)setUpdateType:(unsigned long long)arg1 ;
-(IKViewElementStyle *)style;
-(void)dealloc;
-(IKAppDocument *)appDocument;
-(NSDictionary *)dataDictionary;
-(void)setDataDictionary:(NSDictionary *)arg1 ;
-(void)dispatchEventOfType:(unsigned long long)arg1 canBubble:(BOOL)arg2 isCancelable:(BOOL)arg3 extraInfo:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)isPartOfPrototypeElement;
-(void)dispatchEvent:(id)arg1 eventAttribute:(id)arg2 canBubble:(BOOL)arg3 isCancelable:(BOOL)arg4 extraInfo:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(NSString *)autoHighlightIdentifier;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(BOOL)isImpressionable;
-(id)childTextElementWithStyle:(unsigned long long)arg1 ;
-(id)childElementWithType:(unsigned long long)arg1 ;
-(id)childElementsWithType:(unsigned long long)arg1 ;
-(void)configureUpdatesWithElement:(id)arg1 ;
-(void)setAppDocument:(IKAppDocument *)arg1 ;
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
-(void)resetUpdates;
-(IKChangeSet *)unfilteredChildrenChangeSet;
-(id)childImageElementWithType:(unsigned long long)arg1 ;
-(void)disperseUpdateType:(unsigned long long)arg1 ;
-(void)adoptElement:(id)arg1 ;
-(BOOL)isProxyElement;
-(BOOL)_elevateToImplicitUpdateType:(unsigned long long)arg1 ;
-(NSDictionary *)impressionableAttributes;
-(BOOL)didUpdateAutoHighlightIdentifier;
-(void)setDidUpdateAutoHighlightIdentifier:(BOOL)arg1 ;
-(void)setAutoHighlightIdentifier:(NSString *)arg1 ;
-(unsigned long long)_updateSubtreeWithElement:(id)arg1 ;
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
