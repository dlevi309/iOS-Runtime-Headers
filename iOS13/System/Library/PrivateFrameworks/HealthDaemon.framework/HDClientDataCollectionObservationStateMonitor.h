/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDProcessStateObserver.h>

@protocol HDClientDataCollectionObservationStateMonitorDelegate;
@class NSLock, HDHealthStoreClient, HDProfile, NSString;

@interface HDClientDataCollectionObservationStateMonitor : NSObject <HDProcessStateObserver> {

	NSLock* _lock;
	AB _invalidated;
	HDHealthStoreClient* _client;
	HDProfile* _profile;
	id<HDClientDataCollectionObservationStateMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) HDHealthStoreClient * client;                                                         //@synthesize client=_client - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                                           //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<HDClientDataCollectionObservationStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<HDClientDataCollectionObservationStateMonitorDelegate>)delegate;
-(void)setDelegate:(id<HDClientDataCollectionObservationStateMonitorDelegate>)arg1 ;
-(HDHealthStoreClient *)client;
-(HDProfile *)profile;
-(void)processDidEnterBackground:(id)arg1 ;
-(void)processDidEnterForeground:(id)arg1 ;
-(id)initWithClient:(id)arg1 delegate:(id)arg2 ;
-(id)currentObserverState;
-(void)workoutManagerDidChangeState:(id)arg1 ;
-(void)_componentStateDidChange;
@end

