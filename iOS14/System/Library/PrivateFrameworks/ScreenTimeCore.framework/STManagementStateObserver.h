/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(STManagementStateObserver *)me;
-(NSNumber *)dsid;
-(void)setMe:(STManagementStateObserver *)arg1 ;
-(void)setManagementState:(STManagementState *)arg1 ;
-(long long)contactManagementState;
-(void)setContactManagementState:(long long)arg1 ;
-(STManagementState *)managementState;
-(void)dealloc;
-(void)_screenTimeSettingsDidChange;
-(id)_initWithDSID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)screenTimeSettingsChangeQueue;
-(int)screenTimeSettingsChangeNotifyToken;
@end

