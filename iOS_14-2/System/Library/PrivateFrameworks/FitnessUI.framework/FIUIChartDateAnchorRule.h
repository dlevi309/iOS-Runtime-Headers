/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@interface FIUIChartDateAnchorRule : NSObject {

	unsigned long long _calendarUnit;
	long long _roundingValue;

}

@property (assign,nonatomic) unsigned long long calendarUnit;              //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (assign,nonatomic) long long roundingValue;                      //@synthesize roundingValue=_roundingValue - In the implementation block
-(unsigned long long)calendarUnit;
-(void)setCalendarUnit:(unsigned long long)arg1 ;
-(void)setRoundingValue:(long long)arg1 ;
-(id)generateAnchorFromDate:(id)arg1 ;
-(id)_floorDate:(id)arg1 ;
-(id)_anchorDiffComponents;
-(BOOL)_componentsSuccessful:(id)arg1 ;
-(long long)roundingValue;
@end

