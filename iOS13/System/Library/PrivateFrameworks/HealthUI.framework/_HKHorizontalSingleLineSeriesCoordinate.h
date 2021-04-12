/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSString;

@interface _HKHorizontalSingleLineSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	BOOL _groupToPrevious;
	double _xValue;
	long long _yValue;
	long long _markStyle;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,readonly) double xValue;                                              //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) long long yValue;                                           //@synthesize yValue=_yValue - In the implementation block
@property (nonatomic,readonly) BOOL groupToPrevious;                                       //@synthesize groupToPrevious=_groupToPrevious - In the implementation block
@property (nonatomic,readonly) long long markStyle;                                        //@synthesize markStyle=_markStyle - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(double)xValue;
-(long long)yValue;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(BOOL)groupToPrevious;
-(long long)markStyle;
-(id)initWithXValue:(double)arg1 yValue:(long long)arg2 groupToPrevious:(BOOL)arg3 markStyle:(long long)arg4 userInfo:(id)arg5 ;
@end

