/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIGridViewElement.h>

@class NSMutableDictionary;

@interface SKUIDynamicGridViewElement : SKUIGridViewElement {

	BOOL _hasValidTemplateDefinitionMap;
	NSMutableDictionary* _templateDefinitionTypeToModeValueMap;
	long long _minimumEntityCountForSections;

}

@property (nonatomic,readonly) BOOL hasSectionHeaders; 
@property (getter=isMalformed,nonatomic,readonly) BOOL malformed; 
@property (nonatomic,readonly) long long minimumEntityCountForSections;              //@synthesize minimumEntityCountForSections=_minimumEntityCountForSections - In the implementation block
-(BOOL)allowsMultipleSelectionDuringEditing;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(BOOL)isDynamicContainer;
-(id)templateDefinitionViewElementsForType:(id)arg1 mode:(id)arg2 ;
-(id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)arg1 entityValueProvider:(id)arg2 ;
-(long long)minimumEntityCountForSections;
-(BOOL)hasSectionHeaders;
-(id)_templateDefinitionTypeToModeValueMap;
-(void)_unfilteredEnumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isMalformed;
@end

