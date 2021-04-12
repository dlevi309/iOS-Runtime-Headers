/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setDigitalCardImage:(id)arg1 ;
-(void)setPlasticCardImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 product:(id)arg3 ;
-(void)_loadAnimation;
-(id)initWithContext:(long long)arg1 product:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 product:(id)arg2 ;
-(void)setTransferringProgress:(double)arg1 duration:(double)arg2 ;
@end

