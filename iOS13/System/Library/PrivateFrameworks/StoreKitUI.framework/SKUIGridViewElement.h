/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(long long)pageComponentType;
-(id)persistenceKey;
-(BOOL)showsEditMode;
-(SKUICollectionDOMFeature *)collectionFeature;
-(long long)_countOfInputCheckboxesWithBaseElement:(id)arg1 limit:(long long)arg2 ;
@end

