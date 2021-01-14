/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIViewReusePool, NSArray;

@interface SKUIViewReuseView : UIView {

	SKUIViewReusePool* _viewReusePool;
	NSArray* _allExistingViews;

}

@property (nonatomic,readonly) NSArray * allExistingViews;              //@synthesize allExistingViews=_allExistingViews - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)modifyUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)allExistingViews;
-(void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2 ;
-(void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

