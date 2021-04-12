/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTLearnedLocationStoreMetrics : NSObject {

	unsigned long long _visitCountDevice;
	unsigned long long _visitCountTotal;
	unsigned long long _placeCountDevice;
	unsigned long long _placeCountTotal;

}

@property (assign,nonatomic) unsigned long long visitCountDevice;              //@synthesize visitCountDevice=_visitCountDevice - In the implementation block
@property (assign,nonatomic) unsigned long long visitCountTotal;               //@synthesize visitCountTotal=_visitCountTotal - In the implementation block
@property (assign,nonatomic) unsigned long long placeCountDevice;              //@synthesize placeCountDevice=_placeCountDevice - In the implementation block
@property (assign,nonatomic) unsigned long long placeCountTotal;               //@synthesize placeCountTotal=_placeCountTotal - In the implementation block
-(unsigned long long)visitCountDevice;
-(unsigned long long)visitCountTotal;
-(unsigned long long)placeCountDevice;
-(unsigned long long)placeCountTotal;
-(void)setVisitCountDevice:(unsigned long long)arg1 ;
-(void)setVisitCountTotal:(unsigned long long)arg1 ;
-(void)setPlaceCountDevice:(unsigned long long)arg1 ;
-(void)setPlaceCountTotal:(unsigned long long)arg1 ;
@end

