/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/CLSTimeLocationTuple.h>

@class PHAssetCollection, CLCircularRegion, NSDate, NSString;

@interface CLSPPTimeLocationCluster : NSObject <CLSTimeLocationTuple> {

	PHAssetCollection* _assetCollection;
	CLCircularRegion* _region;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _expandedEndDate;
	NSDate* _expandedStartDate;

}

@property (nonatomic,readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) CLCircularRegion * region;                        //@synthesize region=_region - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * timeLocationIdentifier; 
@property (nonatomic,readonly) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinates; 
@property (nonatomic,readonly) NSDate * expandedStartDate;                       //@synthesize expandedStartDate=_expandedStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * expandedEndDate;                         //@synthesize expandedEndDate=_expandedEndDate - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(CLCircularRegion *)region;
-(CLLocationCoordinate2D)coordinates;
-(PHAssetCollection *)assetCollection;
-(NSString *)timeLocationIdentifier;
-(NSDate *)expandedEndDate;
-(NSDate *)expandedStartDate;
-(id)initWithAssetCollection:(id)arg1 region:(id)arg2 ;
@end

