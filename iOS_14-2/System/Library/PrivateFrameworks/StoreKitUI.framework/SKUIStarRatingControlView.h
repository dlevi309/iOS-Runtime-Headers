/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class UIImage, SKUIStarRatingViewElement, SKUIStarRatingControl, NSString;

@interface SKUIStarRatingControlView : UIControl <SKUIViewElementView> {

	UIEdgeInsets _contentInset;
	UIImage* _emptyStars;
	SKUIStarRatingViewElement* _viewElement;
	SKUIStarRatingControl* _control;

}

@property (nonatomic,retain) SKUIStarRatingControl * control;              //@synthesize control=_control - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(SKUIStarRatingControl *)control;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setControl:(SKUIStarRatingControl *)arg1 ;
-(void)dealloc;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)didRating:(id)arg1 ;
@end

