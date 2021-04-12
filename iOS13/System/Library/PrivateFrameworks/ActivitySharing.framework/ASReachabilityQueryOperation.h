/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>

@protocol OS_dispatch_source;
@class NSSet, NSMutableSet, IDSBatchIDQueryController, NSObject, NSMutableDictionary, ASReachabilityStatusCache, NSString;

@interface ASReachabilityQueryOperation : NSOperation <IDSBatchIDQueryControllerDelegate> {

	BOOL _finished;
	BOOL _executing;
	NSSet* _destinations;
	NSMutableSet* _remainingDestinations;
	IDSBatchIDQueryController* _batchQueryController;
	NSObject*<OS_dispatch_source> timer;
	NSMutableDictionary* _rawIDSDestinationToOriginalDestination;
	NSMutableDictionary* _results;
	/*^block*/id _updateHandler;
	/*^block*/id _completionHandler;
	ASReachabilityStatusCache* _statusCache;
	NSString* _serviceIdentifier;

}

@property (nonatomic,copy) id updateHandler;                                              //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic,__weak) ASReachabilityStatusCache * statusCache;              //@synthesize statusCache=_statusCache - In the implementation block
@property (nonatomic,copy) NSSet * destinations;                                          //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentifier;                                //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(void)finish;
-(NSSet *)destinations;
-(void)setDestinations:(NSSet *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(NSString *)serviceIdentifier;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setStatusCache:(ASReachabilityStatusCache *)arg1 ;
-(void)_queryTimedOut;
-(ASReachabilityStatusCache *)statusCache;
@end

