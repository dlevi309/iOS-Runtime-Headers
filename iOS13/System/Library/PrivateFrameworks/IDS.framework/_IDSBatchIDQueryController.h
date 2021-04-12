/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSIDQueryControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, CUTWeakReference, NSObject, NSArray, NSMutableArray, NSTimer, NSDate;

@interface _IDSBatchIDQueryController : NSObject <IDSIDQueryControllerDelegate> {

	NSString* _serviceName;
	CUTWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _listenerID;
	NSArray* _destinations;
	NSMutableArray* _destinationsToQuery;
	NSTimer* _nextQueryTimer;
	NSDate* _timeOfDeath;
	id _rateLimiter;
	CUTWeakReference* _parent;
	int _numberOfQueriesDone;
	BOOL _isDead;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)setDestinations:(id)arg1 ;
-(id)initWithService:(id)arg1 delegate:(id)arg2 queue:(id)arg3 parent:(id)arg4 ;
-(void)_invalidateNextQueryTimer;
-(void)_nextQuery:(id)arg1 ;
-(void)_calloutToDelegateWithResult:(id)arg1 error:(id)arg2 ;
-(void)_scheduleNextQuery:(double)arg1 ;
-(BOOL)underLimit;
@end

