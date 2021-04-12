/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDataMetadataSection.h>

@class HKDataMetadataWorkoutRouteCell, HKLocationReadings, HKLocationFetcher, HKRouteMapGenerator;

@interface HKDataMetadataWorkoutRouteSection : HKDataMetadataSection {

	HKDataMetadataWorkoutRouteCell* _cell;
	HKLocationReadings* _locationReadings;
	HKLocationFetcher* _locationFetcher;
	HKRouteMapGenerator* _generator;

}

@property (nonatomic,retain) HKDataMetadataWorkoutRouteCell * cell;                //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) HKLocationReadings * locationReadings;              //@synthesize locationReadings=_locationReadings - In the implementation block
@property (nonatomic,retain) HKLocationFetcher * locationFetcher;                  //@synthesize locationFetcher=_locationFetcher - In the implementation block
@property (nonatomic,retain) HKRouteMapGenerator * generator;                      //@synthesize generator=_generator - In the implementation block
-(HKDataMetadataWorkoutRouteCell *)cell;
-(id)sectionTitle;
-(void)setCell:(HKDataMetadataWorkoutRouteCell *)arg1 ;
-(void)setGenerator:(HKRouteMapGenerator *)arg1 ;
-(HKRouteMapGenerator *)generator;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)generateRouteImage;
-(id)initWithLocationReadings:(id)arg1 ;
-(HKLocationReadings *)locationReadings;
-(HKLocationFetcher *)locationFetcher;
-(void)setLocationFetcher:(HKLocationFetcher *)arg1 ;
@end

