/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSString, NSDateFormatter;

@interface MTDateFormatting : NSObject {

	NSString* _amString;
	NSString* _pmString;
	NSDateFormatter* _dateOnlyFormatter;
	NSDateFormatter* _timeOnlyFormatter;
	BOOL _use24HourTime;
	BOOL _timeDesignatorAppearsBeforeTime;

}

@property (nonatomic,__weak,readonly) NSString * amString; 
@property (nonatomic,__weak,readonly) NSString * pmString; 
@property (nonatomic,readonly) BOOL use24HourTime;                                //@synthesize use24HourTime=_use24HourTime - In the implementation block
@property (nonatomic,readonly) BOOL timeDesignatorAppearsBeforeTime;              //@synthesize timeDesignatorAppearsBeforeTime=_timeDesignatorAppearsBeforeTime - In the implementation block
+(id)sharedInstance;
-(BOOL)timeDesignatorAppearsBeforeTime;
-(void)_reloadLocaleInfo;
-(id)init;
-(id)localizedTimeStringFromDate:(id)arg1 timeDesignator:(out id*)arg2 ;
-(NSString *)pmString;
-(id)_timeOnlyFormatter;
-(BOOL)use24HourTime;
-(NSString *)amString;
-(id)_dateOnlyFormatter;
-(id)timeDesignatorForDate:(id)arg1 ;
-(void)_clearLocaleDependentState;
-(void)_loadLocaleInfo;
-(id)localizedTimeStringFromDate:(id)arg1 forTimeZone:(id)arg2 timeDesignator:(out id*)arg3 ;
-(id)timeDesignatorForDate:(id)arg1 timeZone:(id)arg2 ;
-(void)dealloc;
@end

