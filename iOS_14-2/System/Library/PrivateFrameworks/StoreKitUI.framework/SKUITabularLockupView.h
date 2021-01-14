/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class SKUITabularLockupLayout, NSMapTable, NSString;

@interface SKUITabularLockupView : SKUIViewReuseView <SKUIViewElementView> {

	SKUITabularLockupLayout* _layout;
	NSMapTable* _viewElementViews;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForLabel:(id)arg1 context:(id)arg2 ;
+(void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(CGSize)_sizeViewsForColumn:(id)arg1 toFitWidth:(double)arg2 ;
-(void)_layoutSubviewsForColumn:(id)arg1 ;
@end

