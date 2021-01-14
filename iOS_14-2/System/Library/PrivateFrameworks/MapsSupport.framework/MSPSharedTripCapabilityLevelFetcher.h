/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>

@class GEOObserverHashTable, NSMutableDictionary, IDSBatchIDQueryController, NSMutableSet, NSTimer, NSString;

@interface MSPSharedTripCapabilityLevelFetcher : NSObject <IDSBatchIDQueryControllerDelegate> {

	GEOObserverHashTable* _observers;
	NSMutableDictionary* _identifierToShareETAStatus;
	NSMutableDictionary* _identifierToMessagesStatus;
	IDSBatchIDQueryController* _messagesBatchController;
	IDSBatchIDQueryController* _etaBatchController;
	NSMutableSet* _etaFetchQueue;
	NSMutableSet* _messagesFetchQueue;
	NSTimer* _retryAfterBackoffTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFetcher;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(void)notifyObservers;
-(unsigned long long)capabilityLevelForContact:(id)arg1 ;
-(void)requestCapabilityLevelsForContacts:(id)arg1 ;
-(void)fetchCapabilityLevelForContact:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchQueueDidUpdate;
-(BOOL)processEtaDictionary:(id)arg1 ;
-(BOOL)processMessagesDictionary:(id)arg1 ;
-(void)cancelCapabilityLevelRequestForContact:(id)arg1 ;
@end

