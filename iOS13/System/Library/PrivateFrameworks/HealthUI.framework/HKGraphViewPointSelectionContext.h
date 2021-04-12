/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKGraphSeries, HKValueRange, NSDateComponents, NSArray;

@interface HKGraphViewPointSelectionContext : NSObject {

	HKGraphSeries* _selectedSeries;
	HKValueRange* _selectedRangeXValues;
	HKValueRange* _selectedPathIndexRange;
	HKValueRange* _selectedPointValueRange;
	NSDateComponents* _pointIntervalComponents;
	NSArray* _userInfo;

}

@property (nonatomic,retain) HKGraphSeries * selectedSeries;                          //@synthesize selectedSeries=_selectedSeries - In the implementation block
@property (nonatomic,retain) HKValueRange * selectedRangeXValues;                     //@synthesize selectedRangeXValues=_selectedRangeXValues - In the implementation block
@property (nonatomic,retain) HKValueRange * selectedPathIndexRange;                   //@synthesize selectedPathIndexRange=_selectedPathIndexRange - In the implementation block
@property (nonatomic,retain) HKValueRange * selectedPointValueRange;                  //@synthesize selectedPointValueRange=_selectedPointValueRange - In the implementation block
@property (nonatomic,retain) NSDateComponents * pointIntervalComponents;              //@synthesize pointIntervalComponents=_pointIntervalComponents - In the implementation block
@property (nonatomic,retain) NSArray * userInfo;                                      //@synthesize userInfo=_userInfo - In the implementation block
-(id)debugDescription;
-(NSArray *)userInfo;
-(void)setUserInfo:(NSArray *)arg1 ;
-(HKValueRange *)selectedRangeXValues;
-(HKValueRange *)selectedPointValueRange;
-(HKGraphSeries *)selectedSeries;
-(HKValueRange *)selectedPathIndexRange;
-(NSDateComponents *)pointIntervalComponents;
-(void)setSelectedSeries:(HKGraphSeries *)arg1 ;
-(void)setSelectedRangeXValues:(HKValueRange *)arg1 ;
-(void)setSelectedPathIndexRange:(HKValueRange *)arg1 ;
-(void)setSelectedPointValueRange:(HKValueRange *)arg1 ;
-(void)setPointIntervalComponents:(NSDateComponents *)arg1 ;
@end

