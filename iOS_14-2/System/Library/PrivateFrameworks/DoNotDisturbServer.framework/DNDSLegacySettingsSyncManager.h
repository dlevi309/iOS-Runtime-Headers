/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <libobjc.A.dylib/DNDSSettingsSyncManager.h>

@protocol DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate;
@class NPSManager, NPSDomainAccessor, NSString;

@interface DNDSLegacySettingsSyncManager : NSObject <DNDSSettingsSyncManager> {

	BOOL _listen;
	BOOL _send;
	NPSManager* _npsManager;
	NPSDomainAccessor* _accessor;
	id<DNDSSettingsSyncManagerDataSource> _dataSource;
	id<DNDSSettingsSyncManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<DNDSSettingsSyncManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSSettingsSyncManagerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)cleanupState;
+(id)sendManagerForPairedDevice:(id)arg1 ;
+(id)receiveManagerForPairedDevice:(id)arg1 ;
-(id<DNDSSettingsSyncManagerDelegate>)delegate;
-(id<DNDSSettingsSyncManagerDataSource>)dataSource;
-(void)setDelegate:(id<DNDSSettingsSyncManagerDelegate>)arg1 ;
-(void)update;
-(void)setDataSource:(id<DNDSSettingsSyncManagerDataSource>)arg1 ;
-(void)resume;
-(void)dealloc;
-(void)_endMonitoringForChanges;
-(void)_beginMonitoringForChanges;
-(id)_initWithListen:(BOOL)arg1 send:(BOOL)arg2 pairedDevice:(id)arg3 ;
-(void)_updateBypassSettings;
-(void)_updateScheduleSettingsWithDate:(id)arg1 ;
-(void)_propagateBypassSettings:(id)arg1 ;
-(void)_propagateScheduleSettings:(id)arg1 ;
@end

