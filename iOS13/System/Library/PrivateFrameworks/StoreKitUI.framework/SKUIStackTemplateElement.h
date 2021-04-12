/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SKUINavigationBarViewElement *)navigationBarElement;
-(SKUIToolbarViewElement *)toolbarElement;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)numberOfSplits;
-(BOOL)needsStateReset;
-(SKUIIndexBarViewElement *)indexBarViewElement;
-(SKUIViewElement *)collectionHeaderViewElement;
-(NSArray *)collectionElements;
@end

