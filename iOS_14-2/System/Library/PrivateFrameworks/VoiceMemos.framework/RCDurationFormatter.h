/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSNumberFormatter;

@interface RCDurationFormatter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _positionalParameterFormatStrings;
	NSNumberFormatter* _defaultFormatter;
	NSNumberFormatter* _nonPaddedHourFormatter;

}
+(id)sharedFormatter;
+(id)_localizedDateTimeFormatForDurationFormattingStyle:(long long)arg1 ;
+(id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)arg1 ;
+(id)_localizedPositionalFormatStringForDurationFormattingStyle:(long long)arg1 ;
-(id)init;
-(id)_onQueueStringFromDuration:(double)arg1 style:(long long)arg2 ;
-(id)_onQueueStringFromDuration:(double)arg1 byReplacingDigitsWithDigit:(long long)arg2 style:(long long)arg3 ;
-(id)stringFromDuration:(double)arg1 replacingDigitsWithDigit:(unsigned long long)arg2 style:(long long)arg3 ;
-(void)_onQueueReloadLocalizedFormatStrings;
-(id)_onQueuePositionalFormatStringForStyle:(long long)arg1 ;
-(void)reloadLocalizedFormatStrings;
-(id)stringFromDuration:(double)arg1 style:(long long)arg2 ;
@end

