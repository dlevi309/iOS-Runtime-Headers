/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class WorldClockCity;

@interface NTKWorldClockTimelineEntryModel : NTKTimelineEntryModel {

	BOOL _showIdealizedTime;
	WorldClockCity* _city;

}

@property (nonatomic,retain) WorldClockCity * city;               //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) BOOL showIdealizedTime;              //@synthesize showIdealizedTime=_showIdealizedTime - In the implementation block
+(id)_analogImageProvider;
-(id)init;
-(id)_timeZone;
-(WorldClockCity *)city;
-(void)setCity:(WorldClockCity *)arg1 ;
-(double)_timeZoneOffset;
-(id)_newSmallModularTemplate;
-(id)_newLargeModularTemplate;
-(id)_newCircularSmallTemplate;
-(id)_newSmallFlatUtilityTemplate;
-(id)_newExtraLargeTemplate;
-(id)_newCircularMediumTemplate;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(void)setShowIdealizedTime:(BOOL)arg1 ;
-(id)_newLargeUtilityTemplate;
-(id)_newSignatureCircularTemplate;
-(id)_newSignatureBezelTemplate;
-(id)_signatureCorner;
-(id)_abbreviationTextProvider;
-(id)_timeAndAbbreviationTextProvider;
-(id)_timeTextProvider;
-(id)_cityNameTextProvider;
-(id)_timeAndDayOffsetTextProvider;
-(id)_differenceTextProvider;
-(id)_timeAndCityNameOffsetTextProvider;
-(id)_timeAndDifferenceOffsetTextProvider;
-(BOOL)showIdealizedTime;
-(id)_timeCityNameTimeZoneOffsetTextProvider;
-(id)_differenceTextProviderWithSize:(long long)arg1 andCaps:(BOOL)arg2 ;
-(id)_dayOffsetTextProvider;
@end

