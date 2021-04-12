/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <libobjc.A.dylib/CCSModuleRepositoryObserver.h>
#import <libobjc.A.dylib/CCUIContentModuleContextDelegate.h>

@protocol OS_dispatch_queue, CCUIControlCenterSystemAgent, CCUIContentModuleContextDelegate;
@class NSObject, CCSModuleRepository, NSMutableDictionary, NSHashTable, NSSet, NSArray, NSString;

@interface CCUIModuleInstanceManager : NSObject <CCSModuleRepositoryObserver, CCUIContentModuleContextDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<CCUIControlCenterSystemAgent> _systemAgent;
	CCSModuleRepository* _repository;
	NSMutableDictionary* _moduleInstanceByIdentifier;
	NSHashTable* _observers;
	id<CCUIContentModuleContextDelegate> _contextDelegate;
	NSSet* _enabledModuleIdentifiers;

}

@property (assign,nonatomic,__weak) id<CCUIContentModuleContextDelegate> contextDelegate;              //@synthesize contextDelegate=_contextDelegate - In the implementation block
@property (nonatomic,copy) NSSet * enabledModuleIdentifiers;                                           //@synthesize enabledModuleIdentifiers=_enabledModuleIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * moduleInstances; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedInstance;
+(void)setupSharedInstanceWithSystemAgent:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)contentModuleContext:(id)arg1 enqueueStatusUpdate:(id)arg2 ;
-(void)contentModuleContext:(id)arg1 didUpdateHomeGestureDismissalAllowed:(BOOL)arg2 ;
-(void)requestExpandModuleForContentModuleContext:(id)arg1 ;
-(void)dismissExpandedViewForContentModuleContext:(id)arg1 ;
-(void)dismissControlCenterForContentModuleContext:(id)arg1 ;
-(void)setEnabledModuleIdentifiers:(NSSet *)arg1 ;
-(NSArray *)moduleInstances;
-(id)_initWithSystemAgent:(id)arg1 repository:(id)arg2 ;
-(void)_updateModuleInstances;
-(id)_loadBundlesForModuleMetadata:(id)arg1 ;
-(id)_instantiateModuleWithMetadata:(id)arg1 ;
-(NSSet *)enabledModuleIdentifiers;
-(void)_runBlockOnObservers:(/*^block*/id)arg1 ;
-(void)_loadBundlesForModuleMetadata:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id<CCUIContentModuleContextDelegate>)contextDelegate;
-(void)loadableModulesChangedForModuleRepository:(id)arg1 ;
-(BOOL)loadModuleWithBundleIdentifier:(id)arg1 ;
-(void)setContextDelegate:(id<CCUIContentModuleContextDelegate>)arg1 ;
@end

