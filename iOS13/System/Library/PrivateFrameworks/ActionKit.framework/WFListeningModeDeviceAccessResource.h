/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAccessResource.h>

@interface WFListeningModeDeviceAccessResource : WFAccessResource {

	unsigned long long _managerState;
	/*^block*/id _availabilityCompletion;

}

@property (assign,nonatomic) unsigned long long managerState;              //@synthesize managerState=_managerState - In the implementation block
@property (nonatomic,copy) id availabilityCompletion;                      //@synthesize availabilityCompletion=_availabilityCompletion - In the implementation block
+(BOOL)isSingleton;
-(void)dealloc;
-(id)initWithDefinition:(id)arg1 ;
-(void)handleNotification:(id)arg1 ;
-(unsigned long long)globalLevelStatus;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)workflowLevelStatus;
-(id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(void)installObserversIfNecessary;
-(id)unavailableAccessResourceError;
-(id)localizedAccessResourceErrorString;
-(unsigned long long)managerState;
-(void)setManagerState:(unsigned long long)arg1 ;
-(id)availabilityCompletion;
-(void)setAvailabilityCompletion:(id)arg1 ;
@end

