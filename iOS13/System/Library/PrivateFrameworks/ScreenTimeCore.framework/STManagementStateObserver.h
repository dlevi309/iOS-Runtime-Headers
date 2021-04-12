/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@protocol OS_dispatch_queue;
@class NSNumber, STManagementState, NSObject;

@interface STManagementStateObserver : NSObject {

	int _screenTimeSettingsChangeNotifyToken;
	long long _contactManagementState;
	NSNumber* _dsid;
	STManagementState* _managementState;
	STManagementStateObserver* _me;
	NSObject*<OS_dispatch_queue> _screenTimeSettingsChangeQueue;

}

@property (copy,readonly) NSNumber * dsid;                                                    //@synthesize dsid=_dsid - In the implementation block
@property (retain) STManagementState * managementState;                                       //@synthesize managementState=_managementState - In the implementation block
@property (assign) long long contactManagementState;                                          //@synthesize contactManagementState=_contactManagementState - In the implementation block
@property (retain) STManagementStateObserver * me;                                            //@synthesize me=_me - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> screenTimeSettingsChangeQueue;              //@synthesize screenTimeSettingsChangeQueue=_screenTimeSettingsChangeQueue - In the implementation block
@property (readonly) int screenTimeSettingsChangeNotifyToken;                                 //@synthesize screenTimeSettingsChangeNotifyToken=_screenTimeSettingsChangeNotifyToken - In the implementation block
+(void)createObserverWithDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSNumber *)dsid;
-(STManagementStateObserver *)me;
-(void)setMe:(STManagementStateObserver *)arg1 ;
-(STManagementState *)managementState;
-(void)setManagementState:(STManagementState *)arg1 ;
-(long long)contactManagementState;
-(void)setContactManagementState:(long long)arg1 ;
-(void)_screenTimeSettingsDidChange;
-(id)_initWithDSID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)screenTimeSettingsChangeQueue;
-(int)screenTimeSettingsChangeNotifyToken;
@end

