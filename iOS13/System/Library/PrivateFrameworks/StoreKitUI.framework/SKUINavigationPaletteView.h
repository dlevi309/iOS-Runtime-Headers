/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSString;

@interface SKUINavigationPaletteView : SKUIViewReuseView <SKUIViewElementView> {

	NSHashTable* _artworkRelatedChildViewElementViews;
	UIEdgeInsets _contentInset;
	NSMapTable* _imageViewToImageResourceCacheKey;
	NSMutableArray* _segmentedControls;
	NSMutableArray* _stretchViews;
	long long _verticalAlignment;
	NSMapTable* _viewElementViews;
	NSMapTable* _viewSpacings;

}

@property (assign,nonatomic) long long verticalAlignment;              //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForButton:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForLabel:(id)arg1 context:(id)arg2 ;
+(CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(id)_attributedStringForText:(id)arg1 style:(id)arg2 context:(id)arg3 ;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
@end
