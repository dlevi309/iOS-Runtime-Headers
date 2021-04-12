/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)amString;
-(NSString *)pmString;
-(BOOL)timeDesignatorAppearsBeforeTime;
-(BOOL)use24HourTime;
-(void)_reloadLocaleInfo;
-(void)_loadLocaleInfo;
-(void)_clearLocaleDependentState;
-(id)_dateOnlyFormatter;
-(id)localizedTimeStringFromDate:(id)arg1 forTimeZone:(id)arg2 timeDesignator:(out id*)arg3 ;
-(id)_timeOnlyFormatter;
-(id)timeDesignatorForDate:(id)arg1 timeZone:(id)arg2 ;
-(id)localizedTimeStringFromDate:(id)arg1 timeDesignator:(out id*)arg2 ;
-(id)timeDesignatorForDate:(id)arg1 ;
@end

