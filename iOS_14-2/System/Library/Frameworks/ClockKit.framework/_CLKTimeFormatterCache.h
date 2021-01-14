/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


@class NSMutableDictionary;

@interface _CLKTimeFormatterCache : NSObject {

	NSMutableDictionary* _timeOnlyFormatters;
	NSMutableDictionary* _timeAndDesignatorFormatters;
	NSMutableDictionary* _timeAndDesignatorFormattersSuppressingWhitespace;

}
+(id)sharedInstance;
+(id)timeZoneName:(id)arg1 ;
-(id)init;
-(void)_invalidateFormatters;
-(void)dealloc;
-(id)timeOnlyFormatterForTimeZone:(id)arg1 hasSeconds:(BOOL)arg2 forcesLatinNumbers:(BOOL)arg3 ;
-(id)timeAndDesignatorFormatterForTimeZone:(id)arg1 suppressWhitespace:(BOOL)arg2 forcesLatinNumbers:(BOOL)arg3 ;
@end

