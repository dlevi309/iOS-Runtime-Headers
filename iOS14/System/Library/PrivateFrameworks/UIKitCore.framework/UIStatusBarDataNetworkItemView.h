/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(double)extraRightPadding;
-(double)extraLeftPadding;
-(id)accessibilityHUDRepresentation;
-(BOOL)_updateWithData:(SCD_Struct_UI120*)arg1 networkType:(int)arg2 ;
-(id)_stringForRSSI;
-(id)_dataNetworkImage;
-(id)_dataNetworkImageName;
-(double)maximumOverlap;
@end

