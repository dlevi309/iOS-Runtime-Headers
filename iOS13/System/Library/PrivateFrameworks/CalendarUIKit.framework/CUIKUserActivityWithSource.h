/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity {

	long long _sourceType;
	NSString* _sourceHost;
	NSString* _sourceOwner;

}
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)_requiresHostAndOwner;
-(BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)arg1 ;
-(id)initWithSource:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)isMatchForSource:(id)arg1 ;
-(BOOL)_supportsConsistentExternalIDAcrossDevices;
-(BOOL)_isLocalSource;
@end

