/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBPhoneAlertItem : SBAlertItem {

	NSString* _bodyText;
	NSString* _title;
	long long _slot;

}

@property (nonatomic,readonly) long long slot;              //@synthesize slot=_slot - In the implementation block
-(long long)slot;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 slot:(long long)arg3 ;
@end

