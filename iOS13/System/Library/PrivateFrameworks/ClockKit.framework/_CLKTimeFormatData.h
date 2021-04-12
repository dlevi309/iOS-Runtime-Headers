/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/


@class NSString, NSNumberFormatter;

@interface _CLKTimeFormatData : NSObject {

	NSString* _formatHourMinSecSubsec;
	NSString* _formatHourMinSec;
	NSString* _formatHourMin;
	NSString* _formatMinSecSubsec;
	NSString* _formatMinSec;
	NSString* _formatMin;
	NSNumberFormatter* _singleWidthNumberFormatter;
	NSNumberFormatter* _doubleWidthNumberFormatter;

}

@property (nonatomic,readonly) NSString * formatHourMinSecSubsec;                           //@synthesize formatHourMinSecSubsec=_formatHourMinSecSubsec - In the implementation block
@property (nonatomic,readonly) NSString * formatHourMinSec;                                 //@synthesize formatHourMinSec=_formatHourMinSec - In the implementation block
@property (nonatomic,readonly) NSString * formatHourMin;                                    //@synthesize formatHourMin=_formatHourMin - In the implementation block
@property (nonatomic,readonly) NSString * formatMinSecSubsec;                               //@synthesize formatMinSecSubsec=_formatMinSecSubsec - In the implementation block
@property (nonatomic,readonly) NSString * formatMinSec;                                     //@synthesize formatMinSec=_formatMinSec - In the implementation block
@property (nonatomic,readonly) NSString * formatMin;                                        //@synthesize formatMin=_formatMin - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * singleWidthNumberFormatter;              //@synthesize singleWidthNumberFormatter=_singleWidthNumberFormatter - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * doubleWidthNumberFormatter;              //@synthesize doubleWidthNumberFormatter=_doubleWidthNumberFormatter - In the implementation block
+(id)instanceForCurrentLocale;
+(void)resetTimeFormatData;
+(id)_timeFormatDataAccessLock;
+(id)_timeLocale;
-(id)init;
-(NSString *)formatHourMin;
-(NSString *)formatHourMinSecSubsec;
-(NSString *)formatHourMinSec;
-(NSString *)formatMin;
-(NSString *)formatMinSec;
-(NSString *)formatMinSecSubsec;
-(NSNumberFormatter *)singleWidthNumberFormatter;
-(NSNumberFormatter *)doubleWidthNumberFormatter;
@end

