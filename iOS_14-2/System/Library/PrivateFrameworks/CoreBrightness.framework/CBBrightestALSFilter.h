/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBFilter.h>

@class NSMutableDictionary;

@interface CBBrightestALSFilter : CBFilter {

	NSMutableDictionary* _alsEvents;

}
-(id)init;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(BOOL)displayBrightnessFactorPropertyHandler:(id)arg1 ;
-(id)filterEvent:(id)arg1 ;
-(void)forgetDataForService:(IOHIDServiceClientRef)arg1 ;
-(void)dealloc;
@end

