/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthAppPlugin.bundle/HealthAppPlugin
*/

#import <libobjc.A.dylib/HDDataObserver.h>

@protocol OS_dispatch_queue;
@class HDDataManager, NSMutableSet, NSObject, _HKDelayedOperation, HDHAHealthPluginHostFeedGenerator, NSString;

@interface HDHealthAppDataObserver : NSObject <HDDataObserver> {

	HDDataManager* _dataManager;
	NSMutableSet* _pendingPluginIdentifiersToRun;
	NSObject*<OS_dispatch_queue> _debounceQueue;
	_HKDelayedOperation* _delayedOperation;
	HDHAHealthPluginHostFeedGenerator* _feedGenerator;

}

@property (nonatomic,retain) HDDataManager * dataManager;                                    //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingPluginIdentifiersToRun;                   //@synthesize pendingPluginIdentifiersToRun=_pendingPluginIdentifiersToRun - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> debounceQueue;                     //@synthesize debounceQueue=_debounceQueue - In the implementation block
@property (nonatomic,retain) _HKDelayedOperation * delayedOperation;                         //@synthesize delayedOperation=_delayedOperation - In the implementation block
@property (nonatomic,retain) HDHAHealthPluginHostFeedGenerator * feedGenerator;              //@synthesize feedGenerator=_feedGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)start;
-(HDDataManager *)dataManager;
-(void)setDataManager:(HDDataManager *)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(_HKDelayedOperation *)delayedOperation;
-(void)setDelayedOperation:(_HKDelayedOperation *)arg1 ;
-(NSObject*<OS_dispatch_queue>)debounceQueue;
-(void)runBackgroundGenerationWithCurrentPendingPluginIdentifiers;
-(void)observeForAlertSampleTypes;
-(id)alertSampleTypes;
-(id)targetPluginIdentifiersForSampleType:(id)arg1 ;
-(void)debounceRunBackgroundGenerationForPluginIdentifiers:(id)arg1 ;
-(NSMutableSet *)pendingPluginIdentifiersToRun;
-(HDHAHealthPluginHostFeedGenerator *)feedGenerator;
-(id)initWithDataManager:(id)arg1 ;
-(void)setPendingPluginIdentifiersToRun:(NSMutableSet *)arg1 ;
-(void)setDebounceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFeedGenerator:(HDHAHealthPluginHostFeedGenerator *)arg1 ;
@end

