/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDQuantitySeriesObserver.h>

@class NSNumber, NSString;

@interface HDObserverQueryServer : HDQueryServer <HDQuantitySeriesObserver> {

	BOOL _deliverOnUnlock;
	BOOL _observeUnfrozenSeries;
	NSNumber* _anchor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlements;
+(Class)queryClass;
+(BOOL)supportsAnchorBasedAuthorization;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_queue_stop;
-(BOOL)_shouldListenForUpdates;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(/*^block*/id)transactionalQuantityInsertHandlerForProfile:(id)arg1 journaled:(BOOL)arg2 count:(long long)arg3 ;
-(void)profile:(id)arg1 didDiscardSeriesOfType:(id)arg2 ;
-(void)_deliverDataWasUpdatedWithAnchor:(id)arg1 ;
-(void)profile:(id)arg1 didInsertQuantity:(id)arg2 type:(id)arg3 dateInterval:(id)arg4 series:(id)arg5 anchor:(id)arg6 ;
@end

