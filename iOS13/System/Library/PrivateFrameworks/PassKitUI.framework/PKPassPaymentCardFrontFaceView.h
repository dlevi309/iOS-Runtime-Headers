/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPassFrontFaceView.h>

@class UILabel;

@interface PKPassPaymentCardFrontFaceView : PKPassFrontFaceView {

	UILabel* _balanceLabel;

}
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)_handleAccountChanged:(id)arg1 ;
-(id)templateForLayoutMode:(long long)arg1 ;
-(void)createHeaderContentViews;
-(void)setShowsLiveBalance:(BOOL)arg1 ;
-(void)_updateBalanceLabelFontSize;
-(void)_updateBalanceWithAccount:(id)arg1 ;
-(BOOL)showsShare;
@end

