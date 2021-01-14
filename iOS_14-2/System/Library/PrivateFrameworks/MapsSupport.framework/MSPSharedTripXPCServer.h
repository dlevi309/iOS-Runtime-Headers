/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPSharedTripXPCServer <NSObject>
@required
-(void)fetchActiveHandlesWithCompletion:(/*^block*/id)arg1;
-(void)stopSharingTripWithMessagesGroup:(id)arg1;
-(void)startSharingTripWithContacts:(id)arg1 completion:(/*^block*/id)arg2;
-(void)checkinWithCompletion:(/*^block*/id)arg1;
-(void)reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(/*^block*/id)arg1;
-(void)stopSharingTrip;
-(void)stopSharingTripWithMessagesContacts:(id)arg1;
-(void)startSharingTripWithMessagesGroup:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startSharingTripWithMessagesContacts:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchSharedTripsWithCompletion:(/*^block*/id)arg1;
-(void)fetchSharingIdentityWithCompletion:(/*^block*/id)arg1;
-(void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)blockSharedTrip:(id)arg1;
-(void)stopSharingTripWithContacts:(id)arg1;
-(void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;

@end

