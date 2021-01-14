/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithQueue:(id)arg1 ;
-(id<DNDSSyncSettingsProviderDelegate>)delegate;
-(DNDSSyncSettings *)syncSettings;
-(void)setSyncSettings:(DNDSSyncSettings *)arg1 ;
-(void)setDelegate:(id<DNDSSyncSettingsProviderDelegate>)arg1 ;
-(void)dealloc;
-(void)_endMonitoringForChanges;
-(void)_beginMonitoringForChanges;
-(void)_updateSyncPreferences;
-(void)_queue_updateSyncPreferences;
@end

