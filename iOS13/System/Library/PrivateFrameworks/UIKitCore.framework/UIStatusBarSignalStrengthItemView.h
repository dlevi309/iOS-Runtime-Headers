/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)accessibilityHUDRepresentation;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(double)extraRightPadding;
-(double)extraLeftPadding;
-(id)_stringForRSSI;
-(BOOL)_updateWithRaw:(int)arg1 bars:(int)arg2 enableRSSI:(BOOL)arg3 showFailure:(BOOL)arg4 useSmallBars:(BOOL)arg5 ;
-(id)_signalStrengthBarsImageName;
@end

