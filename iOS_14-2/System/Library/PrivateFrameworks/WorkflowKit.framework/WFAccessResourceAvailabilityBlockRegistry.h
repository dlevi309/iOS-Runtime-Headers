/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@interface WFAccessResourceAvailabilityBlockRegistry : NSObject
+(void)registerAvailabilityBlocksInActionKit;
+(/*^block*/id)contactAccessResourceAvailabilityBlock;
+(void)setContactAccessResourceAvailabilityBlock:(/*^block*/id)arg1 ;
+(/*^block*/id)remoteServerAccessResourceAvailabilityBlock;
+(void)setRemoteServerAccessResourceAvailabilityBlock:(/*^block*/id)arg1 ;
+(void)rediscoverAvailabilityBlocksIfNeeded;
@end

