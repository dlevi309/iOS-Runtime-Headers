/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class NSLocale, NSString, NSNumberFormatter;

@interface AVTimeFormatterInternal : NSObject {

	long long style;
	double formatTemplate;
	BOOL isFullWidth;
	NSLocale* locale;
	BOOL isRightToLeft;
	NSString* cachedDateFormatterFormat;
	NSString* cachedDateFormatterTemplate;
	NSNumberFormatter* numberFormatterWithOneMinimumIntegerDigits;
	NSNumberFormatter* numberFormatterWithTwoMinimumIntegerDigits;

}
@end

