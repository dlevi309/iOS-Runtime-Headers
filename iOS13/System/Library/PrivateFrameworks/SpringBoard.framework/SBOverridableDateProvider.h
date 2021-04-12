/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBDateTimeOverrideObserver.h>
#import <libobjc.A.dylib/SBFDateProviding.h>

@protocol SBFDateProviding;
@class SBDateTimeController, NSMutableDictionary, NSDate, NSString;

@interface SBOverridableDateProvider : NSObject <SBDateTimeOverrideObserver, SBFDateProviding> {

	SBDateTimeController* _dateTimeController;
	id<SBFDateProviding> _underlyingProvider;
	NSMutableDictionary* _minuteHandlers;
	unsigned long long _nextToken;
	id _underlyingToken;
	NSDate* _overrideDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)date;
-(id)initWithDateProvider:(id)arg1 ;
-(id)observeMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)removeMinuteUpdateHandler:(id)arg1 ;
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(void)_updateForOverrides;
-(void)_updateUnderlyingProvider;
-(void)_fireHandlersForDate:(id)arg1 ;
@end

