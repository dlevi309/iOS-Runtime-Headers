/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate, CLLocation;

@interface NTKAstronomyTimelineEntryModel : NTKTimelineEntryModel {

	unsigned long long _vista;
	NSDate* _currentDate;
	CLLocation* _currentLocation;
	CLLocation* _anyLocation;

}

@property (nonatomic,readonly) unsigned long long vista;                  //@synthesize vista=_vista - In the implementation block
@property (nonatomic,readonly) NSDate * currentDate;                      //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,readonly) CLLocation * currentLocation;              //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) CLLocation * anyLocation;                  //@synthesize anyLocation=_anyLocation - In the implementation block
-(CLLocation *)currentLocation;
-(NSDate *)currentDate;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(CLLocation *)anyLocation;
-(id)initWithVista:(unsigned long long)arg1 entryDate:(id)arg2 currentDate:(id)arg3 currentLocation:(id)arg4 anyLocation:(id)arg5 ;
-(unsigned long long)vista;
@end

