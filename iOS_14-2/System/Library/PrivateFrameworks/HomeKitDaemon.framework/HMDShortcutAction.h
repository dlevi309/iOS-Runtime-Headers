/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 actionSet:(id)arg3 ;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(WFHomeWorkflow *)shortcut;
-(unsigned long long)type;
-(BOOL)requiresDeviceUnlock;
-(Class)modelClass;
-(id)initWithCoder:(id)arg1 ;
-(WFHomeWorkflowController *)controller;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)associatedAccessories;
-(BOOL)isAssociatedWithAccessory:(id)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(id)initWithSerializedShortcut:(id)arg1 uuid:(id)arg2 actionSet:(id)arg3 ;
-(id)stateDump;
-(unsigned long long)entitlementsForNotification;
-(id)removeShortcut;
-(void)executeWithSource:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3 ;
@end

