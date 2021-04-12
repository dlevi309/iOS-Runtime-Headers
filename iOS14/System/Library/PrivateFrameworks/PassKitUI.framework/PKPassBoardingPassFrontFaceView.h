/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPassFrontFaceView.h>

@class UIImageView;

@interface PKPassBoardingPassFrontFaceView : PKPassFrontFaceView {

	UIImageView* _transitImageView;
	UIImageView* _footerImageView;

}
-(void)layoutSubviews;
-(void)createBodyContentViews;
-(id)_transitGlyphForTransitType:(long long)arg1 ;
-(void)setShowsBarcodeView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)templateForLayoutMode:(long long)arg1 ;
@end

