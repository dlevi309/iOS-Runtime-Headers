/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBLongPressDisambiguationAlertItem : SBAlertItem {

	long long _result;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
-(id)init;
-(id)completion;
-(BOOL)dismissOnLock;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)deactivateForButton;
-(BOOL)ignoreIfAlreadyDisplaying;
@end

