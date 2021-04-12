/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


#import <AuthKitUI/AuthKitUI-Structs.h>
@class NSString, NSMutableDictionary;

@interface AKCAReporter : NSObject {

	NSString* _eventName;
	NSMutableDictionary* _reportData;
	unsigned long long _initTime;
	mach_timebase_info _clock_timebase;

}
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithEvent:(id)arg1 ;
-(void)sendReport;
-(double)_machAbsoluteTimeToTimeInterval:(unsigned long long)arg1 ;
@end

