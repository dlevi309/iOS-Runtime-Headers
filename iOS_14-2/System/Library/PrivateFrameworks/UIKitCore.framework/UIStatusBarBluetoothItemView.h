/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStatusBarItemView.h>

@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {

	BOOL _connected;
	BOOL _shouldAnimateConnection;

}
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(double)alphaForConnected:(BOOL)arg1 ;
-(void)performPendedActions;
-(id)accessibilityHUDRepresentation;
@end

