/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>

@class VUIOfferView, VUILabel, IKViewElement, NSString;

@interface VUIOfferCell : VUIFocusableCollectionViewCell <VUIRentalExpirationLabelDelegate> {

	VUIOfferView* _offerView;
	VUILabel* _belowCardTextLabel;
	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIOfferView * offerView;                   //@synthesize offerView=_offerView - In the implementation block
@property (nonatomic,retain) VUILabel * belowCardTextLabel;              //@synthesize belowCardTextLabel=_belowCardTextLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureViewWithElement:(id)arg1 existingCell:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUIOfferView *)offerView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUILabel *)belowCardTextLabel;
-(void)setOfferView:(VUIOfferView *)arg1 ;
-(void)setBelowCardTextLabel:(VUILabel *)arg1 ;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
@end

