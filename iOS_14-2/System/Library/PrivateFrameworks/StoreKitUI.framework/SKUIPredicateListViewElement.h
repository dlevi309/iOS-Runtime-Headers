/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

