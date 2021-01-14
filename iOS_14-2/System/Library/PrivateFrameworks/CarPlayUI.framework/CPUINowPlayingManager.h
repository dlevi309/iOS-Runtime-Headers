/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>

@class NSString, CPUINowPlayingSnapshot, MPRequestResponseController, CARObserverHashTable, CPUIThrottle;

@interface CPUINowPlayingManager : NSObject <MPRequestResponseControllerDelegate> {

	unsigned long long _throttleBehavior;
	NSString* _bundleIdentifier;
	CPUINowPlayingSnapshot* _snapshot;
	MPRequestResponseController* _requestController;
	CARObserverHashTable* _stateObservers;
	CPUIThrottle* _metadataThrottle;
	NSString* _lastContentItemIdentifier;
	NSString* _lastContentItemTitle;

}

@property (nonatomic,retain) MPRequestResponseController * requestController;              //@synthesize requestController=_requestController - In the implementation block
@property (nonatomic,retain) CARObserverHashTable * stateObservers;                        //@synthesize stateObservers=_stateObservers - In the implementation block
@property (nonatomic,retain) CPUIThrottle * metadataThrottle;                              //@synthesize metadataThrottle=_metadataThrottle - In the implementation block
@property (nonatomic,copy) NSString * lastContentItemIdentifier;                           //@synthesize lastContentItemIdentifier=_lastContentItemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * lastContentItemTitle;                                //@synthesize lastContentItemTitle=_lastContentItemTitle - In the implementation block
@property (assign,nonatomic) unsigned long long throttleBehavior;                          //@synthesize throttleBehavior=_throttleBehavior - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) CPUINowPlayingSnapshot * snapshot;                          //@synthesize snapshot=_snapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(CPUINowPlayingSnapshot *)snapshot;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(MPRequestResponseController *)requestController;
-(id)init;
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(void)setStateObservers:(CARObserverHashTable *)arg1 ;
-(CARObserverHashTable *)stateObservers;
-(void)dealloc;
-(void)addNowPlayingObserver:(id)arg1 ;
-(void)setThrottleBehavior:(unsigned long long)arg1 ;
-(void)removeNowPlayingObserver:(id)arg1 ;
-(void)performCommandRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setupRequestController;
-(unsigned long long)throttleBehavior;
-(NSString *)lastContentItemIdentifier;
-(NSString *)lastContentItemTitle;
-(CPUIThrottle *)metadataThrottle;
-(void)setLastContentItemIdentifier:(NSString *)arg1 ;
-(void)setLastContentItemTitle:(NSString *)arg1 ;
-(void)setRequestController:(MPRequestResponseController *)arg1 ;
-(void)setMetadataThrottle:(CPUIThrottle *)arg1 ;
@end

