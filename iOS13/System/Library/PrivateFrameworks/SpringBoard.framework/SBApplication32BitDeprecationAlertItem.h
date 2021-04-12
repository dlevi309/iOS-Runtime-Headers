/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem {

	SBApplication* _associatedDisplay;

}

@property (assign,nonatomic,__weak) SBApplication * associatedDisplay;              //@synthesize associatedDisplay=_associatedDisplay - In the implementation block
-(id)_title;
-(BOOL)dismissOnLock;
-(id)_message;
-(id)initWithApplication:(id)arg1 ;
-(SBApplication *)associatedDisplay;
-(void)setAssociatedDisplay:(SBApplication *)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end

