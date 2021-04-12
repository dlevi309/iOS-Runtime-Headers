/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_prepareConstraints;
-(id)initWithRemotePaymentInstrument:(id)arg1 ;
-(UIImageView *)cardImageView;
-(UIImageView *)placeholderImageView;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(void)_updateCardImage:(CGImageRef)arg1 ;
-(void)setCardImageView:(UIImageView *)arg1 ;
@end

