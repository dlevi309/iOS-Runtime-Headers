/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSString, NSDate;


@protocol CLSTimeLocationTuple <NSObject>
@property (nonatomic,readonly) NSString * timeLocationIdentifier; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinates; 
@property (nonatomic,readonly) NSDate * expandedStartDate; 
@property (nonatomic,readonly) NSDate * expandedEndDate; 
@required
-(NSDate *)startDate;
-(NSDate *)endDate;
-(CLLocationCoordinate2D)coordinates;
-(NSString *)timeLocationIdentifier;
-(NSDate *)expandedEndDate;
-(NSDate *)expandedStartDate;

@end

