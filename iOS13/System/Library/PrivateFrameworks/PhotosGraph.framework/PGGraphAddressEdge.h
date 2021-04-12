/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphEdge.h>

@class NSDate, CLLocation;

@interface PGGraphAddressEdge : PGGraphEdge

@property (nonatomic,readonly) double timestampUTCStart; 
@property (nonatomic,readonly) double timestampUTCEnd; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D photoCoordinate; 
@property (nonatomic,readonly) CLLocation * photoLocation; 
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(double)timestampUTCStart;
-(double)timestampUTCEnd;
-(CLLocationCoordinate2D)photoCoordinate;
-(CLLocation *)photoLocation;
@end

