/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)dismissOnLock;
-(void)deactivateForButton;
-(BOOL)ignoreIfAlreadyDisplaying;
@end

