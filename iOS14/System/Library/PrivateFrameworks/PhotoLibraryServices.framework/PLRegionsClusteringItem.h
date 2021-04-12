/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSDate, NSString;


@protocol PLRegionsClusteringItem <NSObject>
@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate; 
@property (nonatomic,readonly) double pl_gpsHorizontalAccuracy; 
@property (nonatomic,readonly) NSDate * pl_date; 
@property (nonatomic,readonly) NSString * pl_uuid; 
@required
-(CLLocationCoordinate2D)pl_coordinate;
-(double)pl_gpsHorizontalAccuracy;
-(NSDate *)pl_date;
-(NSString *)pl_uuid;

@end

