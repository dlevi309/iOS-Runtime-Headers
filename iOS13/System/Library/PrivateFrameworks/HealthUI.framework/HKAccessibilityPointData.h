/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSArray *)values;
-(double)horizontalScreenCoordinate;
-(NSString *)horizontalTimeCoordinate;
-(NSDate *)horizontalDate;
-(id)initWithHorizontalScreenCoordinate:(double)arg1 horizontalTimeCoordinate:(id)arg2 horizontalDate:(id)arg3 values:(id)arg4 ;
@end

