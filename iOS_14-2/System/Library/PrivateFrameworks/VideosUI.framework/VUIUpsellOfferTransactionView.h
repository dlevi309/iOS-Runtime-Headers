/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class IKViewElement, VUIUpsellOfferTransactionViewLayout, VUILabel, NSArray;

@interface VUIUpsellOfferTransactionView : UIView {

	IKViewElement* _viewElement;
	VUIUpsellOfferTransactionViewLayout* _layout;
	VUILabel* _disclaimerLabel;
	NSArray* _buttons;

}

@property (nonatomic,retain) IKViewElement * viewElement;                               //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIUpsellOfferTransactionViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * disclaimerLabel;                                //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                         //@synthesize buttons=_buttons - In the implementation block
+(id)transactionViewFromElement:(id)arg1 existingView:(id)arg2 ;
-(NSArray *)buttons;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLayout:(VUIUpsellOfferTransactionViewLayout *)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(VUIUpsellOfferTransactionViewLayout *)layout;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(VUILabel *)disclaimerLabel;
-(void)setDisclaimerLabel:(VUILabel *)arg1 ;
@end

