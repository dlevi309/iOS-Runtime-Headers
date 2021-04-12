/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/


@protocol OS_dispatch_queue, DNDSSyncSettingsProviderDelegate;
@class NSObject, NPSDomainAccessor, DNDSSyncSettings;

@interface DNDSSyncSettingsProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NPSDomainAccessor* _accessor;
	DNDSSyncSettings* _syncSettings;
	id<DNDSSyncSettingsProviderDelegate> _delegate;

}

@property (copy) DNDSSyncSettings * syncSettings;                                               //@synthesize syncSettings=_syncSettings - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSSyncSettingsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<DNDSSyncSettingsProviderDelegate>)delegate;
-(void)setDelegate:(id<DNDSSyncSettingsProviderDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(DNDSSyncSettings *)syncSettings;
-(void)setSyncSettings:(DNDSSyncSettings *)arg1 ;
-(void)_endMonitoringForChanges;
-(void)_beginMonitoringForChanges;
-(void)_updateSyncPreferences;
-(void)_queue_updateSyncPreferences;
@end

