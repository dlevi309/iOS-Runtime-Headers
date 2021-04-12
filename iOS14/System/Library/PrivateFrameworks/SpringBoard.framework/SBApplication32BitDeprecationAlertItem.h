/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem {

	SBApplication* _associatedDisplay;

}

@property (assign,nonatomic,__weak) SBApplication * associatedDisplay;              //@synthesize associatedDisplay=_associatedDisplay - In the implementation block
-(id)_title;
-(id)_message;
-(id)initWithApplication:(id)arg1 ;
-(SBApplication *)associatedDisplay;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(void)setAssociatedDisplay:(SBApplication *)arg1 ;
-(BOOL)forcesModalAlertAppearance;
@end

