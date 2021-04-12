/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAction.h>

@class WFHomeWorkflow;

@interface HMShortcutAction : HMAction {

	WFHomeWorkflow* _shortcut;

}

@property (readonly) WFHomeWorkflow * shortcut;              //@synthesize shortcut=_shortcut - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isSupportedForHome:(id)arg1 ;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(unsigned long long)type;
-(BOOL)isValid;
-(id)initWithCoder:(id)arg1 ;
-(WFHomeWorkflow *)shortcut;
-(id)initWithShortcut:(id)arg1 ;
-(id)_serializeForAdd;
-(BOOL)requiresDeviceUnlock;
@end

