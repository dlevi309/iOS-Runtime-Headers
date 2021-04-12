/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(long long)slot;
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 slot:(long long)arg3 ;
@end

