/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dismissControlCenterForContentModuleContext:(id)arg1 ;
-(void)dismissExpandedViewForContentModuleContext:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)requestExpandModuleForContentModuleContext:(id)arg1 ;
-(void)requestModuleLayoutSizeUpdateForContentModuleContext:(id)arg1 ;
-(void)contentModuleContext:(id)arg1 didUpdateHomeGestureDismissalAllowed:(BOOL)arg2 ;
-(void)contentModuleContext:(id)arg1 enqueueStatusUpdate:(id)arg2 ;
-(id)_instantiateModuleWithMetadata:(id)arg1 ;
-(id)_initWithSystemAgent:(id)arg1 repository:(id)arg2 ;
-(BOOL)loadModuleWithBundleIdentifier:(id)arg1 ;
-(id<CCUIContentModuleContextDelegate>)contextDelegate;
-(NSArray *)moduleInstances;
-(void)_updateModuleInstances;
-(void)setContextDelegate:(id<CCUIContentModuleContextDelegate>)arg1 ;
-(void)_runBlockOnObservers:(/*^block*/id)arg1 ;
-(void)_loadBundlesForModuleMetadata:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSSet *)enabledModuleIdentifiers;
-(void)setEnabledModuleIdentifiers:(NSSet *)arg1 ;
-(void)loadableModulesChangedForModuleRepository:(id)arg1 ;
-(id)_loadBundlesForModuleMetadata:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end

