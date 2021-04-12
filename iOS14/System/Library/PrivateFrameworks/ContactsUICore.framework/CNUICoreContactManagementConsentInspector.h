/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)init;
-(STManagementState *)managementState;
-(unsigned long long)contactManagementConsentStateOfDelegateWithInfo:(id)arg1 ;
-(id)initWithManagementState:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)contactManagementConsentStateFutureForDSID:(id)arg1 ;
@end

