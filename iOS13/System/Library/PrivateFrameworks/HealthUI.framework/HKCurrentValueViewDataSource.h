/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInteractiveChartCurrentValueViewDataSource.h>

@protocol HKCurrentValueViewDataSourceValueRangeFormatter;
@class NSArray, UIColor, HKSelectedRangeFormatter, HKDateCache, HKHealthStore, HKDisplayCategoryController, HKDisplayType, NSString, UIFont;

@interface HKCurrentValueViewDataSource : NSObject <HKInteractiveChartCurrentValueViewDataSource> {

	BOOL _pendingData;
	NSArray* _selectedRangeData;
	id<HKCurrentValueViewDataSourceValueRangeFormatter> _valueRangeFormatter;
	UIColor* _titleColor;
	HKSelectedRangeFormatter* _selectedRangeFormatter;
	HKDateCache* _dateCache;
	HKHealthStore* _healthStore;
	HKDisplayCategoryController* _displayCategoryController;
	HKDisplayType* _displayType;
	NSString* _dateIntervalString;
	UIColor* _valueColor;
	UIFont* _majorFont;
	UIFont* _minorFont;

}

@property (nonatomic,retain) HKSelectedRangeFormatter * selectedRangeFormatter;                                           //@synthesize selectedRangeFormatter=_selectedRangeFormatter - In the implementation block
@property (nonatomic,retain) HKDateCache * dateCache;                                                                     //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                                                 //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKDisplayCategoryController * displayCategoryController;                                     //@synthesize displayCategoryController=_displayCategoryController - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;                                                                 //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) NSString * dateIntervalString;                                                               //@synthesize dateIntervalString=_dateIntervalString - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                                                                        //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,retain) UIColor * valueColor;                                                                        //@synthesize valueColor=_valueColor - In the implementation block
@property (nonatomic,retain) UIFont * majorFont;                                                                          //@synthesize majorFont=_majorFont - In the implementation block
@property (nonatomic,retain) UIFont * minorFont;                                                                          //@synthesize minorFont=_minorFont - In the implementation block
@property (nonatomic,retain) NSArray * selectedRangeData;                                                                 //@synthesize selectedRangeData=_selectedRangeData - In the implementation block
@property (assign,nonatomic,__weak) id<HKCurrentValueViewDataSourceValueRangeFormatter> valueRangeFormatter;              //@synthesize valueRangeFormatter=_valueRangeFormatter - In the implementation block
@property (assign,nonatomic) BOOL pendingData;                                                                            //@synthesize pendingData=_pendingData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultStringForValueRange:(id)arg1 timeScope:(long long)arg2 ;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(HKDateCache *)dateCache;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(long long)_numberOfColumns;
-(UIColor *)valueColor;
-(BOOL)pendingData;
-(void)setPendingData:(BOOL)arg1 ;
-(void)setValueColor:(UIColor *)arg1 ;
-(void)setDateCache:(HKDateCache *)arg1 ;
-(HKDisplayCategoryController *)displayCategoryController;
-(HKSelectedRangeFormatter *)selectedRangeFormatter;
-(id)initWithDateCache:(id)arg1 displayCategoryController:(id)arg2 healthStore:(id)arg3 selectedRangeFormatter:(id)arg4 ;
-(void)setValueRangeFormatter:(id<HKCurrentValueViewDataSourceValueRangeFormatter>)arg1 ;
-(void)updateDataSourceWithGraphView:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 ;
-(id)attributedTitleStringForCurrentValueView:(id)arg1 ;
-(UIFont *)majorFont;
-(UIFont *)minorFont;
-(void)setDisplayCategoryController:(HKDisplayCategoryController *)arg1 ;
-(void)setMajorFont:(UIFont *)arg1 ;
-(void)setMinorFont:(UIFont *)arg1 ;
-(void)setSelectedRangeData:(NSArray *)arg1 ;
-(id)attributedValueStringForCurrentValueView:(id)arg1 ;
-(id)textColorForCurrentValueView:(id)arg1 ;
-(id)secondaryTextColorForCurrentValueView:(id)arg1 ;
-(id)secondaryStringForCurrentValueView:(id)arg1 ;
-(void)setSelectedRangeFormatter:(HKSelectedRangeFormatter *)arg1 ;
-(NSArray *)selectedRangeData;
-(id<HKCurrentValueViewDataSourceValueRangeFormatter>)valueRangeFormatter;
-(void)setDateIntervalString:(NSString *)arg1 ;
-(id)_dividerForRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3 ;
-(BOOL)_rangeDataIsBloodPressure:(id)arg1 ;
-(BOOL)_rangeDataIsMenstruation:(id)arg1 ;
-(BOOL)_rangeDataIsSleep:(id)arg1 ;
-(BOOL)_isAudioExposureDisplayType;
-(BOOL)_isMenstruationDisplayType;
-(id)_selectedRangeDataForColumnAtIndex:(long long)arg1 ;
-(BOOL)_isDataMinMax;
-(NSString *)dateIntervalString;
@end

