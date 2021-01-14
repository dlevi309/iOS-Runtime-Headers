/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBImageHeaderAlertItem : SBAlertItem {

	long long _type;

}
-(id)initWithType:(long long)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)dismissOnLock;
-(BOOL)ignoreIfAlreadyDisplaying;
@end

