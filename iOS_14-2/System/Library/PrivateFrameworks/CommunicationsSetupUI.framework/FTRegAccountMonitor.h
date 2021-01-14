/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/


#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
@class IMServiceImpl, NSArray, FTRegConnectionHandler;

@interface FTRegAccountMonitor : NSObject {

	long long _serviceType;
	IMServiceImpl* _service;
	NSArray* _accounts;
	FTRegConnectionHandler* _connectionHandler;
	struct {
		unsigned listeningForNotifications : 1;
	}  _monitorFlags;

}

@property (assign,nonatomic) long long serviceType;                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) IMServiceImpl * service;                        //@synthesize service=_service - In the implementation block
@property (nonatomic,retain,readonly) NSArray * activeAccounts;              //@synthesize accounts=_accounts - In the implementation block
-(NSArray *)activeAccounts;
-(void)setServiceType:(long long)arg1 ;
-(void)_handleDaemonConnected:(id)arg1 ;
-(id)logName;
-(void)_startListeningForNotifications;
-(void)_stopListeningForNotifications;
-(id)initWithServiceType:(long long)arg1 ;
-(void)setService:(IMServiceImpl *)arg1 ;
-(long long)serviceType;
-(IMServiceImpl *)service;
-(void)dealloc;
-(void)_handleAccountNotification:(id)arg1 ;
-(void)_updateAccountState:(BOOL)arg1 ;
-(id)_activeAccounts;
-(BOOL)_shouldHandleAccountNofication:(id)arg1 ;
@end

