/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUICollectionDOMFeature;

@interface SKUIGridViewElement : SKUIViewElement {

	id _persistenceKey;
	BOOL _showsEditMode;

}

@property (nonatomic,readonly) BOOL allowsMultipleSelectionDuringEditing; 
@property (nonatomic,readonly) BOOL showsEditMode;                                        //@synthesize showsEditMode=_showsEditMode - In the implementation block
@property (nonatomic,readonly) SKUICollectionDOMFeature * collectionFeature; 
+(id)supportedFeatures;
-(BOOL)allowsMultipleSelectionDuringEditing;
-(id)persistenceKey;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(BOOL)showsEditMode;
-(SKUICollectionDOMFeature *)collectionFeature;
-(long long)_countOfInputCheckboxesWithBaseElement:(id)arg1 limit:(long long)arg2 ;
@end

