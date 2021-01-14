/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAction.h>

@class WFHomeWorkflow;

@interface HMShortcutAction : HMAction {

	WFHomeWorkflow* _shortcut;

}

@property (readonly) WFHomeWorkflow * shortcut;              //@synthesize shortcut=_shortcut - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
+(BOOL)isSupportedForHome:(id)arg1 ;
-(id)initWithShortcut:(id)arg1 ;
-(WFHomeWorkflow *)shortcut;
-(BOOL)isValid;
-(unsigned long long)type;
-(id)_serializeForAdd;
-(BOOL)requiresDeviceUnlock;
-(id)initWithCoder:(id)arg1 ;
@end

