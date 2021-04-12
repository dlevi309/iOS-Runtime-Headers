/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
*/


@class CCSRemoteServiceConnection;

@interface CCSControlCenterService : NSObject {

	CCSRemoteServiceConnection* _connection;

}
+(id)sharedInstance;
-(id)_init;
-(void)requestEnableModuleWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestAvailableModuleIdentifiersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

