/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBDateTimeOverrideObserver.h>
#import <libobjc.A.dylib/SBFDateProviding.h>

@protocol SBFDateProviding;
@class SBFDateTimeController, NSMutableDictionary, NSDate, NSString;

@interface SBFOverridableDateProvider : NSObject <SBDateTimeOverrideObserver, SBFDateProviding> {

	SBFDateTimeController* _dateTimeController;
	id<SBFDateProviding> _underlyingProvider;
	NSMutableDictionary* _minuteHandlers;
	unsigned long long _nextToken;
	id _underlyingToken;
	NSDate* _overrideDate;
	double _overrideDateOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(id)init;
-(id)initWithDateProvider:(id)arg1 ;
-(void)_updateForOverrides;
-(void)_updateUnderlyingProvider;
-(void)_fireHandlersForDate:(id)arg1 ;
-(id)observeMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)removeMinuteUpdateHandler:(id)arg1 ;
-(id)date;
@end

