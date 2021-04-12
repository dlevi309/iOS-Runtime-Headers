/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/

#import <libobjc.A.dylib/NMBUIPowerSourceInfoDelegate.h>

@protocol OS_dispatch_source, NMBUISyncInfoControllerDataSource;
@class NSObject, NMBUIPowerSourceInfo, NMSMediaSyncInfo, NSString;

@interface NMBUISyncInfoController : NSObject <NMBUIPowerSourceInfoDelegate> {

	NSObject*<OS_dispatch_source> _currentSyncInfoRequestDateTimer;
	NMBUIPowerSourceInfo* _powerSourceInfo;
	unsigned long long _target;
	NMSMediaSyncInfo* _syncInfo;
	id<NMBUISyncInfoControllerDataSource> _dataSource;

}

@property (nonatomic,readonly) unsigned long long target;                                          //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) NMSMediaSyncInfo * syncInfo;                                        //@synthesize syncInfo=_syncInfo - In the implementation block
@property (assign,nonatomic,__weak) id<NMBUISyncInfoControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NMBUISyncInfoControllerDataSource>)dataSource;
-(void)setDataSource:(id<NMBUISyncInfoControllerDataSource>)arg1 ;
-(void)_updateVisibleCellsIfNeeded;
-(unsigned long long)target;
-(void)dealloc;
-(NMSMediaSyncInfo *)syncInfo;
-(void)_handleMediaSyncInfoDidUpdateNotification:(id)arg1 ;
-(id)_bundleIdentifierForTarget;
-(void)powerSourceInfoHasExternalPowerSourceConnectedDidChange:(id)arg1 ;
-(id)initWithSyncInfoTarget:(unsigned long long)arg1 ;
-(unsigned long long)downloadStateForModelObject:(id)arg1 ;
-(float)progressForModelObject:(id)arg1 ;
-(id)syncStatusDetailText;
-(void)beginObservingSyncInfo;
-(void)endObservingSyncInfo;
@end

