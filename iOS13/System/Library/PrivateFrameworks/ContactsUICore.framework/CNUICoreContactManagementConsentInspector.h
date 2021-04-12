/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreContactManagementConsentCheck.h>

@protocol CNSchedulerProvider;
@class STManagementState, NSString;

@interface CNUICoreContactManagementConsentInspector : NSObject <CNUICoreContactManagementConsentCheck> {

	STManagementState* _managementState;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) STManagementState * managementState;                    //@synthesize managementState=_managementState - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)contactManagementConsentStateFromSTContactManagementState:(long long)arg1 ;
-(id)init;
-(id<CNSchedulerProvider>)schedulerProvider;
-(unsigned long long)contactManagementConsentStateOfDelegateWithInfo:(id)arg1 ;
-(STManagementState *)managementState;
-(id)initWithManagementState:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)contactManagementConsentStateFutureForDSID:(id)arg1 ;
@end

