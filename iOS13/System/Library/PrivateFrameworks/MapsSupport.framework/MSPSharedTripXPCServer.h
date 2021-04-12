/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPSharedTripXPCServer <NSObject>
@required
-(void)checkin;
-(void)fetchAccountValidWithCompletion:(/*^block*/id)arg1;
-(void)fetchAccountAliasesWithCompletion:(/*^block*/id)arg1;
-(void)fetchSendingIdentityWithCompletion:(/*^block*/id)arg1;
-(void)startSharingTripWithContacts:(id)arg1;
-(void)stopSharingTripWithContacts:(id)arg1;
-(void)startSharingTripWithMessagesContacts:(id)arg1;
-(void)stopSharingTripWithMessagesContacts:(id)arg1;
-(void)startSharingTripWithMessagesGroup:(id)arg1;
-(void)stopSharingTripWithMessagesGroup:(id)arg1;
-(void)stopSharingTrip;
-(void)fetchActiveHandlesWithCompletion:(/*^block*/id)arg1;
-(void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1;
-(void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1;
-(void)fetchSharedTripsWithCompletion:(/*^block*/id)arg1;
-(void)blockSharedTrip:(id)arg1;

@end

