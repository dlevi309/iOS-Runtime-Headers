/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStatusBarItemView.h>

@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {

	int _signalStrengthRaw;
	int _signalStrengthBars;
	BOOL _enableRSSI;
	BOOL _showRSSI;
	BOOL _showFailure;
	BOOL _useSmallBars;

}
-(id)_signalStrengthBarsImageName;
-(BOOL)_updateWithRaw:(int)arg1 bars:(int)arg2 enableRSSI:(BOOL)arg3 showFailure:(BOOL)arg4 useSmallBars:(BOOL)arg5 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(double)extraRightPadding;
-(double)extraLeftPadding;
-(id)accessibilityHUDRepresentation;
-(id)_stringForRSSI;
@end

