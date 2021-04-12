/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSMutableDictionary, NSNumberFormatter;

@interface IKFormatting : NSObject {

	NSMutableDictionary* _dateFormatters;
	os_unfair_lock_s _dateFormattersLock;
	NSMutableDictionary* _numberFormatters;
	os_unfair_lock_s _numberFormattersLock;
	NSNumberFormatter* _durationFormatter;
	NSNumberFormatter* _durationPaddedFormatter;

}
+(id)sharedInstance;
+(id)isoDateFormatter;
+(id)rfc1123DateFormatter;
-(id)init;
-(id)formatLocalizedNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4 currencyCode:(id)arg5 ;
-(id)formatLocalizedLocaleIdentifier:(id)arg1 ;
-(id)joinComponentsWithLocalizedCommaAndSpace:(id)arg1 ;
-(id)joinComponentsWithLocalizedSemicolonAndSpace:(id)arg1 ;
-(id)formatDate:(id)arg1 format:(id)arg2 ;
-(id)formatDuration:(id)arg1 ;
-(id)formatNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4 ;
-(id)joinComponents:(id)arg1 withASCII:(id)arg2 arabic:(id)arg3 ethiopic:(id)arg4 ideograph:(id)arg5 ;
@end

