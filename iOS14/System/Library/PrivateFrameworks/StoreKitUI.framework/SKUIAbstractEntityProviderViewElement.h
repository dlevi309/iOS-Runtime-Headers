/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SKUIPredicateListViewElement *)predicateListViewElement;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)entityTypeString;
-(NSArray *)prefetchedProperties;
-(SKUILimitListViewElement *)limitListViewElement;
-(SKUISortDescriptorListViewElement *)sortDescriptorListViewElement;
@end

