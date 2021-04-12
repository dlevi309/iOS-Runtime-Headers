/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKGraphSeriesBlockCoordinate;
@interface HKGraphSeriesVisibleBlockCoordinates : NSObject {

	id<HKGraphSeriesBlockCoordinate> _minimum;
	id<HKGraphSeriesBlockCoordinate> _maximum;
	id<HKGraphSeriesBlockCoordinate> _last;

}

@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinate> minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinate> maximum;              //@synthesize maximum=_maximum - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinate> last;                 //@synthesize last=_last - In the implementation block
-(id<HKGraphSeriesBlockCoordinate>)minimum;
-(id<HKGraphSeriesBlockCoordinate>)maximum;
-(id<HKGraphSeriesBlockCoordinate>)last;
-(id)initWithMinimum:(id)arg1 maximum:(id)arg2 last:(id)arg3 ;
@end

