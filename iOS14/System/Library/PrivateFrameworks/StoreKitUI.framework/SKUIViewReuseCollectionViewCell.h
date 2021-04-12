/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>

@class NSMapTable, SKUIViewReusePool, NSArray;

@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell {

	NSMapTable* _allViewTextProperties;
	SKUIViewReusePool* _viewPool;
	NSArray* _allExistingViews;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                 //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) NSArray * allExistingViews;              //@synthesize allExistingViews=_allExistingViews - In the implementation block
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setBackgroundColor:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)dealloc;
-(void)modifyUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)allExistingViews;
-(void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2 ;
-(void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)textPropertiesForView:(id)arg1 ;
-(id)existingViewForIndex:(long long)arg1 ;
-(id)existingViewsForReuseIdentifier:(id)arg1 ;
@end

