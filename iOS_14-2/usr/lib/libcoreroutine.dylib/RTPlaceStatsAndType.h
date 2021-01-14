/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTLearnedPlaceTypeInferencePlaceStats, NSUUID;

@interface RTPlaceStatsAndType : NSObject {

	RTLearnedPlaceTypeInferencePlaceStats* _placeStats;
	unsigned long long _type;
	NSUUID* _placeIdentifier;

}

@property (nonatomic,readonly) RTLearnedPlaceTypeInferencePlaceStats * placeStats;              //@synthesize placeStats=_placeStats - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * placeIdentifier;                                        //@synthesize placeIdentifier=_placeIdentifier - In the implementation block
-(unsigned long long)type;
-(NSUUID *)placeIdentifier;
-(id)initWithPlaceStats:(id)arg1 type:(unsigned long long)arg2 placeIdentifier:(id)arg3 ;
-(RTLearnedPlaceTypeInferencePlaceStats *)placeStats;
@end

