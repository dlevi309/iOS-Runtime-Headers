/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(long long)serviceType;
-(IMServiceImpl *)service;
-(NSArray *)activeAccounts;
-(void)setService:(IMServiceImpl *)arg1 ;
-(void)_startListeningForNotifications;
-(void)setServiceType:(long long)arg1 ;
-(id)initWithServiceType:(long long)arg1 ;
-(void)_handleDaemonConnected:(id)arg1 ;
-(id)logName;
-(void)_stopListeningForNotifications;
-(void)_handleAccountNotification:(id)arg1 ;
-(void)_updateAccountState:(BOOL)arg1 ;
-(id)_activeAccounts;
-(BOOL)_shouldHandleAccountNofication:(id)arg1 ;
@end

