/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class SKUIStackItemViewElement, SKUIViewElementLayoutContext, SKUIAttributedStringView, NSArray, NSMapTable, NSString;

@interface SKUIStackItemView : SKUIViewReuseView <SKUIViewElementView> {

	SKUIStackItemViewElement* _viewElement;
	SKUIViewElementLayoutContext* _lastContext;
	SKUIAttributedStringView* _textView;
	NSArray* _imageViews;
	NSMapTable* _imageViewToImageResourceCacheKey;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) SKUIStackItemViewElement * viewElement;                     //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) SKUIViewElementLayoutContext * lastContext;                 //@synthesize lastContext=_lastContext - In the implementation block
@property (nonatomic,retain) SKUIAttributedStringView * textView;                        //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSArray * imageViews;                                         //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) NSMapTable * imageViewToImageResourceCacheKey;              //@synthesize imageViewToImageResourceCacheKey=_imageViewToImageResourceCacheKey - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForLabel:(id)arg1 context:(id)arg2 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 numberOfLines:(unsigned long long*)arg4 ;
+(id)_textViewLayoutWithWidth:(double)arg1 string:(id)arg2 ;
-(SKUIAttributedStringView *)textView;
-(void)setTextView:(SKUIAttributedStringView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(unsigned long long)numberOfLines;
-(UIEdgeInsets)contentInset;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
-(SKUIStackItemViewElement *)viewElement;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)setViewElement:(SKUIStackItemViewElement *)arg1 ;
-(NSMapTable *)imageViewToImageResourceCacheKey;
-(void)setImageViewToImageResourceCacheKey:(NSMapTable *)arg1 ;
-(void)setLastContext:(SKUIViewElementLayoutContext *)arg1 ;
-(SKUIViewElementLayoutContext *)lastContext;
@end

