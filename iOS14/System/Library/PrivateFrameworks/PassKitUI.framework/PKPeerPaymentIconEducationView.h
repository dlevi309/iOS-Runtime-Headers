/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPaymentSetupInitialCardEducationIconsView, PKWatchDeviceImageOverlayView;

@interface PKPeerPaymentIconEducationView : UIView {

	PKPaymentSetupInitialCardEducationIconsView* _iconsView;
	PKWatchDeviceImageOverlayView* _watchDeviceImageView;
	BOOL _showWatchView;
	BOOL _showIconsView;

}

@property (assign,nonatomic) BOOL showWatchView;              //@synthesize showWatchView=_showWatchView - In the implementation block
@property (assign,nonatomic) BOOL showIconsView;              //@synthesize showIconsView=_showIconsView - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)showWatchView;
-(void)setShowIconsView:(BOOL)arg1 ;
-(void)setShowWatchView:(BOOL)arg1 ;
-(BOOL)showIconsView;
-(id)_imageForWatchView;
@end

