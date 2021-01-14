/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDSyncOperationManagerDataSource
@property (readonly) BOOL legacyZoneHasRecordsAvaliable; 
@property (readonly) BOOL isCloudAccountActive; 
@property (readonly) BOOL zoneFetchFailed; 
@property (readonly) BOOL isNetworkConnectionAvailable; 
@required
-(BOOL)legacyZoneHasRecordsAvaliable;
-(BOOL)isCloudAccountActive;
-(BOOL)zoneFetchFailed;
-(BOOL)isNetworkConnectionAvailable;
-(void)forceCloudFetch;

@end

