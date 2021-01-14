/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray, CLLocation, NSDate;

@interface PLAssetCluster : NSObject {

	NSArray* _assets;
	CLLocation* _location;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSArray * assets;                   //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
+(id)sortByTimeSortDescriptors;
+(id)mergedCluster:(id)arg1 ;
-(NSArray *)assets;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(CLLocation *)location;
-(id)description;
-(id)initWithAssetsSortedByDate:(id)arg1 region:(id)arg2 ;
@end

