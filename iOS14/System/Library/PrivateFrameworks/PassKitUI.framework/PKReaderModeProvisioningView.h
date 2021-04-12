/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKReaderModeAnimationView, PKReaderModeHeaderView, UIProgressView, NSString, UIImage;

@interface PKReaderModeProvisioningView : UIView {

	PKReaderModeAnimationView* _animationView;
	PKReaderModeHeaderView* _headerView;
	UIProgressView* _progressView;
	BOOL _isProvisioningToWatch;
	NSString* _cardPlacement;
	UIImage* _plasticCardImage;
	UIImage* _digitalCardImage;

}
-(void)setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 product:(id)arg3 ;
-(void)_loadAnimation;
-(id)initWithContext:(long long)arg1 product:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 product:(id)arg2 ;
-(void)setTransferringProgress:(double)arg1 duration:(double)arg2 ;
-(void)setDigitalCardImage:(id)arg1 ;
-(void)setPlasticCardImage:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

