/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem {

	NSString* _title;
	NSString* _body;

}
-(id)title;
-(void)setTitle:(id)arg1 ;
-(void)setBodyText:(id)arg1 ;
-(id)bodyText;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)performUnlockAction;
-(BOOL)suppressForKeynote;
-(id)initWithTitle:(id)arg1 body:(id)arg2 ;
-(id)dismissButtonText;
@end

