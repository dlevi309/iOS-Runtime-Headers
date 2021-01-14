/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PKPaymentRemoteInstrumentThumbnailView : UIView {

	UIImageView* _placeholderImageView;
	UIImageView* _cardImageView;

}

@property (nonatomic,retain) UIImageView * placeholderImageView;              //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) UIImageView * cardImageView;                     //@synthesize cardImageView=_cardImageView - In the implementation block
-(UIImageView *)cardImageView;
-(UIImageView *)placeholderImageView;
-(id)initWithRemotePaymentInstrument:(id)arg1 ;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(void)_prepareConstraints;
-(void)_updateCardImage:(CGImageRef)arg1 ;
-(void)setCardImageView:(UIImageView *)arg1 ;
@end

