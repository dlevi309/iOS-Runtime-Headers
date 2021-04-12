/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBApplicationLaunchNotifyAlertItem : SBAlertItem {

	SBApplication* _application;

}

@property (nonatomic,readonly) SBApplication * application;              //@synthesize application=_application - In the implementation block
-(BOOL)dismissOnLock;
-(id)initWithApplication:(id)arg1 ;
-(SBApplication *)application;
@end

