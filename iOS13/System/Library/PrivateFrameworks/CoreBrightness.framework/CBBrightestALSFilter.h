/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBFilter.h>

@class NSMutableDictionary;

@interface CBBrightestALSFilter : CBFilter {

	NSMutableDictionary* _alsEvents;

}
-(id)init;
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)filterEvent:(id)arg1 ;
-(BOOL)displayBrightnessFactorPropertyHandler:(id)arg1 ;
-(void)forgetDataForService:(IOHIDServiceClientRef)arg1 ;
@end

