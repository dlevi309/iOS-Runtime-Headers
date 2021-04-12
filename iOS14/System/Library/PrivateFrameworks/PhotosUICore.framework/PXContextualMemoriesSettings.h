/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSDictionary, PXContextualMemoriesTimeSetting, PXContextualMemoriesLocationSetting, PXContextualMemoriesPeopleSetting, NSArray, NSDate, CLLocation;

@interface PXContextualMemoriesSettings : NSObject {

	NSDictionary* _extraParameters;
	PXContextualMemoriesTimeSetting* _timeSetting;
	PXContextualMemoriesLocationSetting* _locationSetting;
	PXContextualMemoriesPeopleSetting* _peopleSetting;
	NSArray* _settings;

}

@property (nonatomic,readonly) PXContextualMemoriesTimeSetting * timeSetting;                      //@synthesize timeSetting=_timeSetting - In the implementation block
@property (nonatomic,readonly) PXContextualMemoriesLocationSetting * locationSetting;              //@synthesize locationSetting=_locationSetting - In the implementation block
@property (nonatomic,readonly) PXContextualMemoriesPeopleSetting * peopleSetting;                  //@synthesize peopleSetting=_peopleSetting - In the implementation block
@property (nonatomic,readonly) NSArray * settings;                                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSArray * peopleNames; 
@property (nonatomic,copy) NSDictionary * extraParameters;                                         //@synthesize extraParameters=_extraParameters - In the implementation block
-(id)init;
-(CLLocation *)location;
-(NSDictionary *)extraParameters;
-(void)setExtraParameters:(NSDictionary *)arg1 ;
-(NSArray *)peopleNames;
-(NSArray *)settings;
-(NSDate *)date;
-(PXContextualMemoriesTimeSetting *)timeSetting;
-(PXContextualMemoriesLocationSetting *)locationSetting;
-(PXContextualMemoriesPeopleSetting *)peopleSetting;
@end

