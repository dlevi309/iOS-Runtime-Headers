/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

@class TASPAdvertisement;


@protocol TAMetricsProtocol <NSObject>
@property (nonatomic,readonly) TASPAdvertisement * latestAdvertisement; 
@required
-(TASPAdvertisement *)latestAdvertisement;
-(unsigned long long)getMetricsCollectionType;

@end

