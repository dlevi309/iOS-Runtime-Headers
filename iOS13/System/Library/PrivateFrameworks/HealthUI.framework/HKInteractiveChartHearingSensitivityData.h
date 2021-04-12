/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSString;

@interface HKInteractiveChartHearingSensitivityData : NSObject <HKGraphSeriesChartData> {

	BOOL _isLeftEar;
	BOOL _isAverage;
	double _sensitivityDbHL;

}

@property (assign,nonatomic) double sensitivityDbHL;                //@synthesize sensitivityDbHL=_sensitivityDbHL - In the implementation block
@property (assign,nonatomic) BOOL isLeftEar;                        //@synthesize isLeftEar=_isLeftEar - In the implementation block
@property (assign,nonatomic) BOOL isAverage;                        //@synthesize isAverage=_isAverage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSensitivityDbHL:(double)arg1 ;
-(BOOL)isLeftEar;
-(void)setIsLeftEar:(BOOL)arg1 ;
-(BOOL)isAverage;
-(void)setIsAverage:(BOOL)arg1 ;
-(double)sensitivityDbHL;
@end

