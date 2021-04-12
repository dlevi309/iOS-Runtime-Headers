/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
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
-(void)dealloc;
-(void)_invalidateFormatters;
-(id)timeOnlyFormatterForTimeZone:(id)arg1 hasSeconds:(BOOL)arg2 forcesLatinNumbers:(BOOL)arg3 ;
-(id)timeAndDesignatorFormatterForTimeZone:(id)arg1 suppressWhitespace:(BOOL)arg2 forcesLatinNumbers:(BOOL)arg3 ;
@end

