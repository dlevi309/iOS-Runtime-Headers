/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity {

	long long _sourceType;
	NSString* _sourceHost;
	NSString* _sourceOwner;

}
-(BOOL)_requiresHostAndOwner;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)_supportsConsistentExternalIDAcrossDevices;
-(id)dictionary;
-(id)initWithSource:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)_isLocalSource;
-(unsigned long long)isMatchForSource:(id)arg1 ;
-(BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)arg1 ;
@end

