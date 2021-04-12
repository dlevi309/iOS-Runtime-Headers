/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)sectionTitle;
-(HKDataMetadataWorkoutRouteCell *)cell;
-(void)setCell:(HKDataMetadataWorkoutRouteCell *)arg1 ;
-(HKRouteMapGenerator *)generator;
-(void)setGenerator:(HKRouteMapGenerator *)arg1 ;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)generateRouteImage;
-(id)initWithLocationReadings:(id)arg1 ;
-(HKLocationReadings *)locationReadings;
-(HKLocationFetcher *)locationFetcher;
-(void)setLocationFetcher:(HKLocationFetcher *)arg1 ;
@end

