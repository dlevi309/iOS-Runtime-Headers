/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem {

	NSString* _title;
	NSString* _body;

}
-(id)bodyText;
-(void)performUnlockAction;
-(void)setTitle:(id)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)setBodyText:(id)arg1 ;
-(id)title;
-(id)initWithTitle:(id)arg1 body:(id)arg2 ;
-(BOOL)suppressForKeynote;
-(id)dismissButtonText;
@end

