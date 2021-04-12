/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@interface SBIdleTimerSettings : PTSettings {

	BOOL _disableIdleTimer;

}

@property (assign,nonatomic) BOOL disableIdleTimer;              //@synthesize disableIdleTimer=_disableIdleTimer - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(BOOL)disableIdleTimer;
-(void)setDisableIdleTimer:(BOOL)arg1 ;
@end

