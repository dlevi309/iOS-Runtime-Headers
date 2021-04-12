/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKFillStyle, UIBezierPath;

@interface HKBarSeriesConfiguration : NSObject {

	HKFillStyle* _unselectedFillStyle;
	HKFillStyle* _selectedFillStyle;
	/*^block*/id _isIncludedBlock;
	UIBezierPath* _selectedBezierPath;
	UIBezierPath* _unselectedBezierPath;

}

@property (nonatomic,retain) UIBezierPath * selectedBezierPath;                //@synthesize selectedBezierPath=_selectedBezierPath - In the implementation block
@property (nonatomic,retain) UIBezierPath * unselectedBezierPath;              //@synthesize unselectedBezierPath=_unselectedBezierPath - In the implementation block
@property (nonatomic,retain) HKFillStyle * unselectedFillStyle;                //@synthesize unselectedFillStyle=_unselectedFillStyle - In the implementation block
@property (nonatomic,retain) HKFillStyle * selectedFillStyle;                  //@synthesize selectedFillStyle=_selectedFillStyle - In the implementation block
@property (nonatomic,copy) id isIncludedBlock;                                 //@synthesize isIncludedBlock=_isIncludedBlock - In the implementation block
-(void)setUnselectedFillStyle:(HKFillStyle *)arg1 ;
-(void)setIsIncludedBlock:(id)arg1 ;
-(HKFillStyle *)unselectedFillStyle;
-(HKFillStyle *)selectedFillStyle;
-(void)setSelectedFillStyle:(HKFillStyle *)arg1 ;
-(id)isIncludedBlock;
-(UIBezierPath *)selectedBezierPath;
-(void)setSelectedBezierPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)unselectedBezierPath;
-(void)setUnselectedBezierPath:(UIBezierPath *)arg1 ;
@end

