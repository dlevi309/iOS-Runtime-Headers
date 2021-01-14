/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <BaseBoardUI/BSUIDefaultDateLabel.h>
#import <libobjc.A.dylib/BSRelativeDateTimerDelegate.h>

@class BSRelativeDateTimer, NSString;

@interface BSUIRelativeDateLabel : BSUIDefaultDateLabel <BSRelativeDateTimerDelegate> {

	BSRelativeDateTimer* _relativeDateTimer;
	unsigned long long _value;
	unsigned long long _resolution;
	long long _comparedToNow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)timerFiredWithValue:(unsigned long long)arg1 forResolution:(unsigned long long)arg2 comparedToNow:(long long)arg3 ;
-(void)prepareForReuse;
-(id)constructLabelString;
-(void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2 ;
-(void)dealloc;
@end

