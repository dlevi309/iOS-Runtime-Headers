/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPSharedTripXPCClient <NSObject>
@required
-(void)accountAvailabilityDidChange:(BOOL)arg1;
-(void)sharedTripInvalidatedWithError:(id)arg1;
-(void)invalidateActiveHandles;
-(void)sendMessage:(id)arg1 toParticipant:(id)arg2;
-(void)sendMessage:(id)arg1 toGroup:(id)arg2;
-(void)sharedTripDidBecomeAvailable:(id)arg1;
-(void)sharedTripDidBecomeUnavailable:(id)arg1;
-(void)sharedTripDidClose:(id)arg1;
-(void)destinationDidUpdateForSharedTrip:(id)arg1;
-(void)etaDidUpdateForSharedTrip:(id)arg1;
-(void)routeDidUpdateForSharedTrip:(id)arg1;
-(void)destinationReachedDidUpdateForSharedTrip:(id)arg1;

@end

