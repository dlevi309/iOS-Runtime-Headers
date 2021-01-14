/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPSharedTripXPCClient <NSObject>
@required
-(void)sharedTripInvalidatedWithError:(id)arg1;
-(void)routeDidUpdateForSharedTrip:(id)arg1;
-(void)sharedTripDidBecomeUnavailable:(id)arg1;
-(void)sharedTripDidBecomeAvailable:(id)arg1;
-(void)sharingIdentityDidChange:(id)arg1;
-(void)etaDidUpdateForSharedTrip:(id)arg1;
-(void)sharedTripDidUpdateRecipients:(id)arg1;
-(void)sharedTripDidClose:(id)arg1;
-(void)destinationDidUpdateForSharedTrip:(id)arg1;
-(void)destinationReachedDidUpdateForSharedTrip:(id)arg1;

@end

