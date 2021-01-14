/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
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

