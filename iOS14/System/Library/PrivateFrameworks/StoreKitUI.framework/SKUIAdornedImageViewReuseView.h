/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>
#import <libobjc.A.dylib/SKUIMediaPlayerObserver.h>

@class NSMapTable, SKUIImageViewElement, SKUIPlayButton, NSString;

@interface SKUIAdornedImageViewReuseView : SKUIViewReuseView <SKUIViewElementView, SKUIMediaPlayerObserver> {

	NSMapTable* _imageViewToImageResourceCacheKey;
	SKUIImageViewElement* _imageViewElement;
	SKUIPlayButton* _playButton;
	unsigned long long _playButtonPosition;
	NSMapTable* _viewElementViews;

}

@property (nonatomic,readonly) SKUIPlayButton * playButton;              //@synthesize playButton=_playButton - In the implementation block
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
+(id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3 context:(id)arg4 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)init;
-(SKUIPlayButton *)playButton;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)mediaPlayer:(id)arg1 itemStateChanged:(id)arg2 ;
-(CGRect)frameForView:(id)arg1 ;
@end

