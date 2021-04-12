/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

