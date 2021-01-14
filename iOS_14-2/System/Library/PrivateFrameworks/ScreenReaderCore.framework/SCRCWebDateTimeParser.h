/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@class NSMutableDictionary;

@interface SCRCWebDateTimeParser : NSObject {

	NSMutableDictionary* _expressions;
	NSMutableDictionary* _dateFormats;

}
+(id)sharedInstance;
-(id)init;
-(id)_expressionForRule:(id)arg1 ;
-(id)_cachedDateFormatterForFormat:(id)arg1 ;
-(id)_handleDuration:(id)arg1 ;
-(id)_handleTimes:(id)arg1 ;
-(id)_handleDatesAndTimes:(id)arg1 ;
-(id)spokenStringForDateTimeAttribute:(id)arg1 ;
@end

