/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_localizedPositionalFormatStringForDurationFormattingStyle:(long long)arg1 ;
+(id)_localizedDateTimeFormatForDurationFormattingStyle:(long long)arg1 ;
+(id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)arg1 ;
-(id)init;
-(void)reloadLocalizedFormatStrings;
-(id)_onQueueStringFromDuration:(double)arg1 byReplacingDigitsWithDigit:(long long)arg2 style:(long long)arg3 ;
-(id)_onQueueStringFromDuration:(double)arg1 style:(long long)arg2 ;
-(void)_onQueueReloadLocalizedFormatStrings;
-(id)_onQueuePositionalFormatStringForStyle:(long long)arg1 ;
-(id)stringFromDuration:(double)arg1 replacingDigitsWithDigit:(unsigned long long)arg2 style:(long long)arg3 ;
-(id)stringFromDuration:(double)arg1 style:(long long)arg2 ;
@end

