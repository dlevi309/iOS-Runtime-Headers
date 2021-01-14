/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSMutableArray, SKUIViewElement, NSArray, SKUIIndexBarViewElement, SKUINavigationBarViewElement, SKUIToolbarViewElement;

@interface SKUIStackTemplateElement : SKUIViewElement {

	NSMutableArray* _collectionElements;
	SKUIViewElement* _collectionHeaderViewElement;
	BOOL _needsStateReset;

}

@property (nonatomic,readonly) NSArray * collectionElements; 
@property (nonatomic,readonly) SKUIViewElement * collectionHeaderViewElement; 
@property (nonatomic,readonly) SKUIIndexBarViewElement * indexBarViewElement; 
@property (nonatomic,readonly) SKUINavigationBarViewElement * navigationBarElement; 
@property (nonatomic,readonly) SKUIToolbarViewElement * toolbarElement; 
@property (nonatomic,readonly) long long numberOfSplits; 
@property (nonatomic,readonly) BOOL needsStateReset;                                             //@synthesize needsStateReset=_needsStateReset - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUINavigationBarViewElement *)navigationBarElement;
-(long long)numberOfSplits;
-(BOOL)needsStateReset;
-(SKUIIndexBarViewElement *)indexBarViewElement;
-(SKUIViewElement *)collectionHeaderViewElement;
-(NSArray *)collectionElements;
-(SKUIToolbarViewElement *)toolbarElement;
@end

