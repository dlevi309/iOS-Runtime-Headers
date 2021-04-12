/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPReceiverETAControllerDelegate <NSObject>
@required
-(void)etaController:(id)arg1 sharedTripDidBecomeAvailable:(id)arg2;
-(void)etaController:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2;
-(void)etaController:(id)arg1 didUpdateETAForSharedTrip:(id)arg2;
-(void)etaController:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2;
-(void)etaController:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2;
-(void)etaController:(id)arg1 sharedTripDidClose:(id)arg2;
-(void)etaController:(id)arg1 sharedTripDidBecomeUnavailable:(id)arg2;

@end

