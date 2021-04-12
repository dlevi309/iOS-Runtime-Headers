/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/


@protocol SPBeaconPayloadCaching <NSObject>
@required
-(void)saveBeaconPayloads:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beaconPayloadsForSearchCriteria:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beaconAdvertisementAtFileURL:(id)arg1 beaconIdentifier:(id)arg2 scanDate:(id)arg3 completion:(/*^block*/id)arg4;
-(void)markBeaconPayloadsProcessed:(id)arg1 completion:(/*^block*/id)arg2;

@end

