/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLRegionsClusteringItem.h>

@class NSDate, NSString;

@interface TestPLClusterable : NSObject <PLRegionsClusteringItem> {

	double _pl_gpsHorizontalAccuracy;
	NSDate* _pl_date;
	NSString* _pl_uuid;
	CLLocationCoordinate2D _pl_coordinate;

}

@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate;              //@synthesize pl_coordinate=_pl_coordinate - In the implementation block
@property (nonatomic,readonly) double pl_gpsHorizontalAccuracy;                   //@synthesize pl_gpsHorizontalAccuracy=_pl_gpsHorizontalAccuracy - In the implementation block
@property (nonatomic,readonly) NSDate * pl_date;                                  //@synthesize pl_date=_pl_date - In the implementation block
@property (nonatomic,readonly) NSString * pl_uuid;                                //@synthesize pl_uuid=_pl_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clusterableWithLatitude:(double)arg1 longitude:(double)arg2 time:(double)arg3 ;
-(CLLocationCoordinate2D)pl_coordinate;
-(double)pl_gpsHorizontalAccuracy;
-(NSDate *)pl_date;
-(NSString *)pl_uuid;
-(NSString *)description;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 time:(double)arg3 ;
@end

