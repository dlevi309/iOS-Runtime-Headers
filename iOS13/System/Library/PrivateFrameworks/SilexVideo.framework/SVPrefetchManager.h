/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoQueueProviding, SVVideoQueueObserving, SVPrefetcherFactory;
@class NSMutableDictionary, NSString;

@interface SVPrefetchManager : NSObject <SVVideoTransitionObserver> {

	id<SVVideoQueueProviding> _queueProvider;
	id<SVVideoQueueObserving> _queueObserver;
	id<SVPrefetcherFactory> _prefetcherFactory;
	NSMutableDictionary* _prefetchers;

}

@property (nonatomic,readonly) id<SVVideoQueueProviding> queueProvider;                //@synthesize queueProvider=_queueProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoQueueObserving> queueObserver;                //@synthesize queueObserver=_queueObserver - In the implementation block
@property (nonatomic,readonly) id<SVPrefetcherFactory> prefetcherFactory;              //@synthesize prefetcherFactory=_prefetcherFactory - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * prefetchers;                      //@synthesize prefetchers=_prefetchers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoQueueProviding>)queueProvider;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<SVVideoQueueObserving>)queueObserver;
-(void)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2 ;
-(id)initWithPrefetcherFactory:(id)arg1 queueProvider:(id)arg2 queueObserver:(id)arg3 ;
-(void)updatePrefetchersWithCurrentVideo:(id)arg1 ;
-(NSMutableDictionary *)prefetchers;
-(id<SVPrefetcherFactory>)prefetcherFactory;
@end

