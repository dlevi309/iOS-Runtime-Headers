/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimeZone.h>

@interface __NSTimeZone : NSTimeZone {

	CFStringRef _name;
	CFDataRef _data;
	void* _ucal;
	opaque_pthread_mutex_t _lock;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(id)data;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(id)localizedName:(long long)arg1 locale:(id)arg2 ;
@end

