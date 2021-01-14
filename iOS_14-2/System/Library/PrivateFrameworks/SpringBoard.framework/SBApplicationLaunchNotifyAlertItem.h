/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBApplicationLaunchNotifyAlertItem : SBAlertItem {

	SBApplication* _application;

}

@property (nonatomic,readonly) SBApplication * application;              //@synthesize application=_application - In the implementation block
-(id)initWithApplication:(id)arg1 ;
-(BOOL)dismissOnLock;
-(SBApplication *)application;
@end

