/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@interface EKDayOccurrenceStringGenerator : NSObject
+(double)minNaturalTextHeightForEvent:(id)arg1 usingSmallText:(BOOL)arg2 sizeClass:(long long)arg3 ;
+(double)minimumNaturalHeightForPrimaryTextUsingSmallText:(BOOL)arg1 sizeClass:(long long)arg2 ;
+(double)attributedStringMinimumLineHeightUsingSmallText:(BOOL)arg1 sizeClass:(long long)arg2 ;
+(double)_minimumPrimaryFontLineHeightUsingSmallText:(BOOL)arg1 sizeClass:(long long)arg2 ;
+(id)_attributedTitleWithState:(id)arg1 ;
+(id)_attributedTimeWithState:(id)arg1 ;
+(id)_attributedLocationWithState:(id)arg1 ;
+(id)_attributedStatusWithState:(id)arg1 ;
+(id)_defaultAttributesForState:(id)arg1 ;
+(double)_defaultMinimumLineHeightForState:(id)arg1 ;
-(id)generateTravelTimeStringWithState:(id)arg1 ;
-(id)generateContentStringWithState:(id)arg1 ;
@end

