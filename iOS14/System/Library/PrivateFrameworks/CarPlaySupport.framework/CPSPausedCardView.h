/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSCardPlatterProviding.h>

@class CPSCardPlatterView, UILabel, UIActivityIndicatorView, NSString;

@interface CPSPausedCardView : UIView <CPSCardPlatterProviding> {

	CPSCardPlatterView* _cardPlatterView;
	UILabel* _title;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,readonly) UILabel * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;               //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) CPSCardPlatterView * cardPlatterView;              //@synthesize cardPlatterView=_cardPlatterView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(UIActivityIndicatorView *)spinner;
-(UILabel *)title;
-(id)initWithReason:(unsigned long long)arg1 title:(id)arg2 backgroundColor:(id)arg3 ;
-(CPSCardPlatterView *)cardPlatterView;
-(void)setCardPlatterView:(CPSCardPlatterView *)arg1 ;
@end

