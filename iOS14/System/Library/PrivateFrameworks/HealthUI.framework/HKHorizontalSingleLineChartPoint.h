/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSDate, NSNumber, NSString;

@interface HKHorizontalSingleLineChartPoint : NSObject <HKChartPoint> {

	BOOL _groupToPrevious;
	NSDate* _xValue;
	NSNumber* _yValue;
	long long _markStyle;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,retain) NSDate * xValue;                                            //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,retain) NSNumber * yValue;                                          //@synthesize yValue=_yValue - In the implementation block
@property (assign,nonatomic) BOOL groupToPrevious;                                       //@synthesize groupToPrevious=_groupToPrevious - In the implementation block
@property (assign,nonatomic) long long markStyle;                                        //@synthesize markStyle=_markStyle - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(NSNumber *)yValue;
-(NSDate *)xValue;
-(NSString *)description;
-(id)allYValues;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(void)setXValue:(NSDate *)arg1 ;
-(BOOL)groupToPrevious;
-(long long)markStyle;
-(void)setYValue:(NSNumber *)arg1 ;
-(void)setGroupToPrevious:(BOOL)arg1 ;
-(void)setMarkStyle:(long long)arg1 ;
@end

