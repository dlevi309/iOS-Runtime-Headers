/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthAppPlugin.bundle/HealthAppPlugin
*/

#import <libobjc.A.dylib/HDProfileManagerObserver.h>

@protocol OS_dispatch_queue;
@class HDProfileManager, HDHAHealthPluginHostFeedGenerator, NSObject, _HKDelayedOperation, NSString;

@interface HDHealthAppProfileObserver : NSObject <HDProfileManagerObserver> {

	HDProfileManager* _profileManager;
	HDHAHealthPluginHostFeedGenerator* _feedGenerator;
	NSObject*<OS_dispatch_queue> _debounceQueue;
	_HKDelayedOperation* _delayedOperation;

}

@property (nonatomic,retain) HDProfileManager * profileManager;                              //@synthesize profileManager=_profileManager - In the implementation block
@property (nonatomic,retain) HDHAHealthPluginHostFeedGenerator * feedGenerator;              //@synthesize feedGenerator=_feedGenerator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> debounceQueue;                     //@synthesize debounceQueue=_debounceQueue - In the implementation block
@property (nonatomic,retain) _HKDelayedOperation * delayedOperation;                         //@synthesize delayedOperation=_delayedOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDProfileManager *)profileManager;
-(void)start;
-(void)setDelayedOperation:(_HKDelayedOperation *)arg1 ;
-(void)setDebounceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HDHAHealthPluginHostFeedGenerator *)feedGenerator;
-(NSObject*<OS_dispatch_queue>)debounceQueue;
-(void)setFeedGenerator:(HDHAHealthPluginHostFeedGenerator *)arg1 ;
-(_HKDelayedOperation *)delayedOperation;
-(void)dealloc;
-(void)profileListDidChange;
-(id)initWithProfileManager:(id)arg1 ;
-(void)setProfileManager:(HDProfileManager *)arg1 ;
@end

