/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <libobjc.A.dylib/EKCancellableRemoteOperation.h>

@class NSPredicate, EKEventStore, NSString;

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation> {

	/*^block*/id _callback;
	Class _entityClass;
	NSPredicate* _predicate;
	EKEventStore* _store;
	id _cancellationToken;
	BOOL _finished;
	BOOL _isCancelled;
	int _retryCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 ;
+(id)signpostHandle;
-(void)disconnect;
-(void)_startActivityWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)_startProcessingWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 processor:(/*^block*/id)arg3 ;
-(void)signpostStart;
-(void)terminate;
-(id)runSynchronously;
-(id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 ;
-(void)_startActualWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)_fetchObjectIDsActualWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)_startFetchObjectIDsActivityWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(id)fetchObjectIDs;
-(id)startWithCompletion:(/*^block*/id)arg1 ;
-(void)signpostEndWithError:(int)arg1 count:(unsigned long long)arg2 ;
-(id)_createOSActivity;
-(void)cancel;
@end

