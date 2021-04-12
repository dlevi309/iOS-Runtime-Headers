/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/


@protocol OS_dispatch_source, NMBUISyncInfoControllerDataSource;
@class NSObject, NMSMediaSyncInfo;

@interface NMBUISyncInfoController : NSObject {

	NSObject*<OS_dispatch_source> _currentSyncInfoRequestDateTimer;
	unsigned long long _target;
	NMSMediaSyncInfo* _syncInfo;
	id<NMBUISyncInfoControllerDataSource> _dataSource;

}

@property (nonatomic,readonly) unsigned long long target;                                          //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) NMSMediaSyncInfo * syncInfo;                                        //@synthesize syncInfo=_syncInfo - In the implementation block
@property (assign,nonatomic,__weak) id<NMBUISyncInfoControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)dealloc;
-(unsigned long long)target;
-(id<NMBUISyncInfoControllerDataSource>)dataSource;
-(void)setDataSource:(id<NMBUISyncInfoControllerDataSource>)arg1 ;
-(void)_updateVisibleCellsIfNeeded;
-(NMSMediaSyncInfo *)syncInfo;
-(void)_handleMediaSyncInfoDidUpdateNotification:(id)arg1 ;
-(id)_bundleIdentifierForTarget;
-(id)initWithSyncInfoTarget:(unsigned long long)arg1 ;
-(unsigned long long)downloadStateForModelObject:(id)arg1 ;
-(float)progressForModelObject:(id)arg1 ;
-(id)syncStatusDetailText;
-(void)beginObservingSyncInfo;
-(void)endObservingSyncInfo;
@end

