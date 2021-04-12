/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class UIDynamicAnimator, SKUIImageDeckViewElement, NSMapTable, NSArray, UIView, NSString;

@interface SKUIImageDeckView : SKUIViewReuseView <UIGestureRecognizerDelegate, SKUIViewElementView> {

	UIDynamicAnimator* _animator;
	double _fitWidth;
	SKUIImageDeckViewElement* _imageDeckViewElement;
	NSMapTable* _viewElementViews;
	NSArray* _imageViews;
	NSMapTable* _imageViewToImageResourceCacheKey;
	UIView* _selectedImageView;
	unsigned long long _selectedImageViewIndex;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,retain) NSArray * imageViews;                   //@synthesize imageViews=_imageViews - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_layoutImages;
@end

