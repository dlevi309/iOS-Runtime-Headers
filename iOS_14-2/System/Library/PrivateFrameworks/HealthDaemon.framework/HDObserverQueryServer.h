/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)supportsAnchorBasedAuthorization;
+(id)requiredEntitlements;
+(Class)queryClass;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)profile:(id)arg1 didDiscardSeriesOfType:(id)arg2 ;
-(/*^block*/id)transactionalQuantityInsertHandlerForProfile:(id)arg1 journaled:(BOOL)arg2 count:(long long)arg3 ;
-(void)profile:(id)arg1 didInsertQuantity:(id)arg2 type:(id)arg3 dateInterval:(id)arg4 series:(id)arg5 anchor:(id)arg6 ;
-(BOOL)_shouldListenForUpdates;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_deliverDataWasUpdatedWithAnchor:(id)arg1 ;
-(void)_queue_stop;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
@end

