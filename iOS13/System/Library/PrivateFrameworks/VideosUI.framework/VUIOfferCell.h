/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>

@class IKViewElement, VUIOfferView, VUILabel, VUIImageView, NSString;

@interface VUIOfferCell : VUIFocusableCollectionViewCell <VUIRentalExpirationLabelDelegate> {

	IKViewElement* _viewElement;
	VUIOfferView* _offerView;
	VUILabel* _belowCardTextLabel;
	VUIImageView* _secondChinImageView;
	CGSize _cardSize;

}

@property (nonatomic,retain) IKViewElement * viewElement;                     //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIOfferView * offerView;                        //@synthesize offerView=_offerView - In the implementation block
@property (assign,nonatomic) CGSize cardSize;                                 //@synthesize cardSize=_cardSize - In the implementation block
@property (nonatomic,retain) VUILabel * belowCardTextLabel;                   //@synthesize belowCardTextLabel=_belowCardTextLabel - In the implementation block
@property (nonatomic,retain) VUIImageView * secondChinImageView;              //@synthesize secondChinImageView=_secondChinImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureViewWithElement:(id)arg1 existingCell:(id)arg2 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIOfferView *)offerView;
-(VUILabel *)belowCardTextLabel;
-(VUIImageView *)secondChinImageView;
-(void)setOfferView:(VUIOfferView *)arg1 ;
-(void)setBelowCardTextLabel:(VUILabel *)arg1 ;
-(void)setSecondChinImageView:(VUIImageView *)arg1 ;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(CGSize)cardSize;
-(void)setCardSize:(CGSize)arg1 ;
@end

