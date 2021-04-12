/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@interface SBIdleTimerSettings : PTSettings {

	BOOL _disableIdleTimer;

}

@property (assign,nonatomic) BOOL disableIdleTimer;              //@synthesize disableIdleTimer=_disableIdleTimer - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setDisableIdleTimer:(BOOL)arg1 ;
-(BOOL)disableIdleTimer;
@end

