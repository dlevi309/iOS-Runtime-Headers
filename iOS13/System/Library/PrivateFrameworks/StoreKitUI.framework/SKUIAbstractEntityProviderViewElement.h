/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSArray, SKUILimitListViewElement, SKUIPredicateListViewElement, SKUISortDescriptorListViewElement;

@interface SKUIAbstractEntityProviderViewElement : SKUIViewElement {

	NSString* _entityTypeString;
	NSArray* _prefetchedProperties;

}

@property (nonatomic,copy,readonly) NSString * entityTypeString;                                               //@synthesize entityTypeString=_entityTypeString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * prefetchedProperties;                                            //@synthesize prefetchedProperties=_prefetchedProperties - In the implementation block
@property (nonatomic,readonly) SKUILimitListViewElement * limitListViewElement; 
@property (nonatomic,readonly) SKUIPredicateListViewElement * predicateListViewElement; 
@property (nonatomic,readonly) SKUISortDescriptorListViewElement * sortDescriptorListViewElement; 
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUIPredicateListViewElement *)predicateListViewElement;
-(NSString *)entityTypeString;
-(NSArray *)prefetchedProperties;
-(SKUILimitListViewElement *)limitListViewElement;
-(SKUISortDescriptorListViewElement *)sortDescriptorListViewElement;
@end

