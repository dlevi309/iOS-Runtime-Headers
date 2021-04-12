/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {

	int _dataNetworkType;
	int _wifiStrengthRaw;
	int _wifiStrengthBars;
	BOOL _wifiLinkWarning;
	BOOL _enableRSSI;
	BOOL _showRSSI;

}
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)accessibilityHUDRepresentation;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(double)extraRightPadding;
-(double)extraLeftPadding;
-(BOOL)_updateWithData:(SCD_Struct_UI109*)arg1 networkType:(int)arg2 ;
-(id)_stringForRSSI;
-(id)_dataNetworkImage;
-(id)_dataNetworkImageName;
-(double)maximumOverlap;
@end

