/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(NSDate *)xValue;
-(NSNumber *)yValue;
-(void)setXValue:(NSDate *)arg1 ;
-(void)setYValue:(NSNumber *)arg1 ;
-(id)xValueAsGenericType;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)allYValues;
-(void)setGroupToPrevious:(BOOL)arg1 ;
-(void)setMarkStyle:(long long)arg1 ;
-(BOOL)groupToPrevious;
-(long long)markStyle;
@end

