/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>

@protocol OS_dispatch_source;
@class IDSBatchIDQueryController, NSArray, NSString, NSObject;

@interface HDIDSReachabilityOperation : NSOperation <IDSBatchIDQueryControllerDelegate> {

	BOOL _finished;
	BOOL _executing;
	IDSBatchIDQueryController* _queryController;
	NSArray* _destinationIdentifiers;
	NSString* _serviceIdentifier;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,copy) NSArray * destinationIdentifiers;                           //@synthesize destinationIdentifiers=_destinationIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                               //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                      //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) IDSBatchIDQueryController * queryController;              //@synthesize queryController=_queryController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finish;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setQueryController:(IDSBatchIDQueryController *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)start;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(BOOL)isAsynchronous;
-(id)completionHandler;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(BOOL)isFinished;
-(NSString *)serviceIdentifier;
-(BOOL)isReady;
-(void)_startTimer;
-(BOOL)isExecuting;
-(void)cancel;
-(IDSBatchIDQueryController *)queryController;
-(void)_queryDidTimeout;
-(id)initWithIdentifers:(id)arg1 serviceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)destinationIdentifiers;
-(void)setDestinationIdentifiers:(NSArray *)arg1 ;
@end

