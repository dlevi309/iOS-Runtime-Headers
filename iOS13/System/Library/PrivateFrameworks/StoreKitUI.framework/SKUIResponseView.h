/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class SKUITextBoxView, SKUIAttributedStringView, UIImageView, NSMapTable, NSString;

@interface SKUIResponseView : SKUIViewReuseView <SKUIViewElementView> {

	SKUITextBoxView* _descriptionView;
	SKUIAttributedStringView* _subtitleView;
	UIImageView* _replyImageView;
	NSMapTable* _allViewTextProperties;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,retain) SKUITextBoxView * descriptionView;                    //@synthesize descriptionView=_descriptionView - In the implementation block
@property (nonatomic,retain) SKUIAttributedStringView * subtitleView;              //@synthesize subtitleView=_subtitleView - In the implementation block
@property (nonatomic,retain) UIImageView * replyImageView;                         //@synthesize replyImageView=_replyImageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                            //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) NSMapTable * allViewTextProperties;                   //@synthesize allViewTextProperties=_allViewTextProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForSubtitleLabel:(id)arg1 context:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(SKUIAttributedStringView *)subtitleView;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(NSMapTable *)allViewTextProperties;
-(void)setDescriptionView:(SKUITextBoxView *)arg1 ;
-(SKUITextBoxView *)descriptionView;
-(void)setAllViewTextProperties:(NSMapTable *)arg1 ;
-(void)setSubtitleView:(SKUIAttributedStringView *)arg1 ;
-(UIImageView *)replyImageView;
-(void)setReplyImageView:(UIImageView *)arg1 ;
@end

