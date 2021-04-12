/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<HKGraphSeriesBlockCoordinate>)maximum;
-(id<HKGraphSeriesBlockCoordinate>)minimum;
-(id<HKGraphSeriesBlockCoordinate>)last;
-(id)initWithMinimum:(id)arg1 maximum:(id)arg2 last:(id)arg3 ;
@end

