/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSPredicate, NSArray;

@interface SKUIPredicateListViewElement : SKUIViewElement {

	NSPredicate* _compoundEntityValuePredicate;

}

@property (nonatomic,copy,readonly) NSArray * predicateViewElements; 
@property (nonatomic,readonly) NSPredicate * compoundEntityValuePredicate; 
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)_enumeratePredicateViewElementsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)predicateViewElements;
-(NSPredicate *)compoundEntityValuePredicate;
@end

