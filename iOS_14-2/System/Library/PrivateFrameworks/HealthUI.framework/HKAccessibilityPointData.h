/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString, NSDate, NSArray;

@interface HKAccessibilityPointData : NSObject {

	double _horizontalScreenCoordinate;
	NSString* _horizontalTimeCoordinate;
	NSDate* _horizontalDate;
	NSArray* _values;

}

@property (nonatomic,readonly) double horizontalScreenCoordinate;                //@synthesize horizontalScreenCoordinate=_horizontalScreenCoordinate - In the implementation block
@property (nonatomic,readonly) NSString * horizontalTimeCoordinate;              //@synthesize horizontalTimeCoordinate=_horizontalTimeCoordinate - In the implementation block
@property (nonatomic,readonly) NSDate * horizontalDate;                          //@synthesize horizontalDate=_horizontalDate - In the implementation block
@property (nonatomic,readonly) NSArray * values;                                 //@synthesize values=_values - In the implementation block
-(NSArray *)values;
-(id)description;
-(double)horizontalScreenCoordinate;
-(NSString *)horizontalTimeCoordinate;
-(NSDate *)horizontalDate;
-(id)initWithHorizontalScreenCoordinate:(double)arg1 horizontalTimeCoordinate:(id)arg2 horizontalDate:(id)arg3 values:(id)arg4 ;
@end

