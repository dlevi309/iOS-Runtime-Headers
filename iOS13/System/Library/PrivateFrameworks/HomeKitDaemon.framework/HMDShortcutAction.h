/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDAction.h>

@class NSData, WFHomeWorkflow, WFHomeWorkflowController;

@interface HMDShortcutAction : HMDAction {

	NSData* _shortcutData;
	WFHomeWorkflow* _shortcut;
	WFHomeWorkflowController* _controller;

}

@property (readonly) WFHomeWorkflow * shortcut;                          //@synthesize shortcut=_shortcut - In the implementation block
@property (readonly) WFHomeWorkflowController * controller;              //@synthesize controller=_controller - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 actionSet:(id)arg3 ;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(WFHomeWorkflowController *)controller;
-(WFHomeWorkflow *)shortcut;
-(Class)modelClass;
-(void)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)requiresDeviceUnlock;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(id)initWithSerializedShortcut:(id)arg1 uuid:(id)arg2 actionSet:(id)arg3 ;
-(id)stateDump;
-(unsigned long long)entitlementsForNotification;
-(id)removeShortcut;
-(id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3 ;
@end

