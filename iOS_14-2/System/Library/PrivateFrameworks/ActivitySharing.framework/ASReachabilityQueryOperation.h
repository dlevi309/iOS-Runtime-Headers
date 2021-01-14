/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finish;
-(id)init;
-(void)setDestinations:(NSSet *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(NSSet *)destinations;
-(void)start;
-(void)setUpdateHandler:(id)arg1 ;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(id)updateHandler;
-(BOOL)isAsynchronous;
-(id)completionHandler;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(BOOL)isFinished;
-(NSString *)serviceIdentifier;
-(BOOL)isReady;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)setStatusCache:(ASReachabilityStatusCache *)arg1 ;
-(void)_queryTimedOut;
-(ASReachabilityStatusCache *)statusCache;
@end

