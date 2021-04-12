/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSDate, NSArray, NSCalendar, NSDateComponents, HKValueRange;

@interface HKDateIntervalCache : NSObject {

	NSDate* _minAnchorDate;
	NSDate* _maxAnchorDate;
	double _previousTimeInterval;
	BOOL _datesInvalidated;
	NSArray* _cachedDates;
	NSCalendar* _currentCalendarOverride;
	unsigned long long _dateAnchorUnit;
	NSDateComponents* _referenceSpacingComponents;
	NSDateComponents* _dateSpacingComponents;
	NSDateComponents* _minorDateSpacingComponents;
	HKValueRange* _dateRange;

}

@property (assign,nonatomic) unsigned long long dateAnchorUnit;                          //@synthesize dateAnchorUnit=_dateAnchorUnit - In the implementation block
@property (nonatomic,retain) NSDateComponents * referenceSpacingComponents;              //@synthesize referenceSpacingComponents=_referenceSpacingComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * dateSpacingComponents;                   //@synthesize dateSpacingComponents=_dateSpacingComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * minorDateSpacingComponents;              //@synthesize minorDateSpacingComponents=_minorDateSpacingComponents - In the implementation block
@property (nonatomic,readonly) HKValueRange * dateRange;                                 //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,readonly) NSArray * datePoints; 
-(HKValueRange *)dateRange;
-(id)init;
-(BOOL)setDateRange:(HKValueRange *)arg1 ;
-(id)_currentCalendar;
-(void)_updateAnchorDates;
-(void)_invalidateCachedDates;
-(id)_minAnchorDateFromDate:(id)arg1 ;
-(id)_maxAnchorDateFromDate:(id)arg1 ;
-(id)_generateCachedDates;
-(unsigned long long)_minimumCalendarUnitForComponents:(id)arg1 ;
-(id)_nextDateForDate:(id)arg1 components:(id)arg2 calendar:(id)arg3 ;
-(id)_firstDateAfter:(id)arg1 matchingComponents:(id)arg2 calendar:(id)arg3 ;
-(void)setDateAnchorUnit:(unsigned long long)arg1 ;
-(void)setReferenceSpacingComponents:(NSDateComponents *)arg1 ;
-(void)setDateSpacingComponents:(NSDateComponents *)arg1 ;
-(void)setMinorDateSpacingComponents:(NSDateComponents *)arg1 ;
-(void)_setCurrentCalendar:(id)arg1 ;
-(NSArray *)datePoints;
-(unsigned long long)dateAnchorUnit;
-(NSDateComponents *)referenceSpacingComponents;
-(NSDateComponents *)dateSpacingComponents;
-(NSDateComponents *)minorDateSpacingComponents;
@end

