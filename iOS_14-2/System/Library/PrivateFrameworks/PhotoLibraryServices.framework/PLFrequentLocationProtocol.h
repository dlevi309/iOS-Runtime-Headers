/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSDateInterval, NSArray;


@protocol PLFrequentLocationProtocol <NSObject>
@property (readonly) CLLocationCoordinate2D coordinate; 
@property (readonly) NSDateInterval * dateInterval; 
@property (readonly) NSArray * sortedMoments; 
@required
-(NSDateInterval *)dateInterval;
-(CLLocationCoordinate2D)coordinate;
-(NSArray *)sortedMoments;

@end

