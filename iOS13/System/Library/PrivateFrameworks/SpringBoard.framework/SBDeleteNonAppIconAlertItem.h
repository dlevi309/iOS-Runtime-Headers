/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBIcon, NSString;

@interface SBDeleteNonAppIconAlertItem : SBAlertItem {

	SBIcon* _icon;
	NSString* _iconLocation;

}
-(BOOL)dismissOnLock;
-(id)icon;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(void)didActivate;
-(id)initWithIcon:(id)arg1 location:(id)arg2 ;
@end

