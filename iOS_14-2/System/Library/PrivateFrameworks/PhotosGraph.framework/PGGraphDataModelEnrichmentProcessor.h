/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGGraphDataModelEnrichmentProcessor <NSObject>
@required
+(double)backgroundJobTimeout;
+(BOOL)supportsBackgroundJob;
+(id)backgroundJobName;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3;

@end

