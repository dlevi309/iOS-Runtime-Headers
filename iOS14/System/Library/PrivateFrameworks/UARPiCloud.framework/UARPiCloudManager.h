/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UARPiCloud.framework/UARPiCloud
*/


@protocol OS_os_log, OS_dispatch_queue, UARPiCloudManagerDelegate;
@class NSObject, UARPiCloudContainer;

@interface UARPiCloudManager : NSObject {

	NSObject*<OS_os_log> _log;
	NSObject*<OS_dispatch_queue> _recordProcessingQueue;
	id<UARPiCloudManagerDelegate> _delegate;
	UARPiCloudContainer* _container;

}
-(void)handleRemoteFetchRequestForAccessories:(id)arg1 ;
-(BOOL)fetchVerificationCertificateInContainer:(id)arg1 ;
-(void)fetchZoneChangesInContainer:(id)arg1 forAccessories:(id)arg2 ;
-(long long)fetchRemoteDatabaseChangesInContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)processUpdatedRecordsInContainer:(id)arg1 forAccessories:(id)arg2 ;
-(void)processVerificationCertificateRecord:(id)arg1 forContainer:(id)arg2 ;
-(void)processRecordsInContainer:(id)arg1 forAccessory:(id)arg2 ;
-(void)processCKRecord:(id)arg1 inContainer:(id)arg2 forAccessory:(id)arg3 ;
-(BOOL)validateSignatureForUARPAccessoryRecord:(id)arg1 inContainer:(id)arg2 ;
-(id)calculateDigestFromUARPAccessoryRecord:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 containerID:(id)arg2 ;
-(void)performRemoteFetchForAccessories:(id)arg1 ;
-(id)filterInterestedZonesInContainer:(id)arg1 forAccessories:(id)arg2 ;
@end

