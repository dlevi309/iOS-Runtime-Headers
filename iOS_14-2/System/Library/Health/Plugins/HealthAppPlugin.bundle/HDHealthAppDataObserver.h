/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)observeForAlertSampleTypes;
-(void)debounceRunBackgroundGenerationForPluginIdentifiers:(id)arg1 ;
-(void)start;
-(void)setPendingPluginIdentifiersToRun:(NSMutableSet *)arg1 ;
-(void)setDelayedOperation:(_HKDelayedOperation *)arg1 ;
-(void)setDebounceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDataManager:(id)arg1 ;
-(NSMutableSet *)pendingPluginIdentifiersToRun;
-(void)runBackgroundGenerationWithCurrentPendingPluginIdentifiers;
-(HDHAHealthPluginHostFeedGenerator *)feedGenerator;
-(void)setDataManager:(HDDataManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)debounceQueue;
-(HDDataManager *)dataManager;
-(void)setFeedGenerator:(HDHAHealthPluginHostFeedGenerator *)arg1 ;
-(id)alertSampleTypes;
-(_HKDelayedOperation *)delayedOperation;
-(id)targetPluginIdentifiersForSampleType:(id)arg1 ;
-(void)dealloc;
@end

