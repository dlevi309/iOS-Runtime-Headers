/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableDictionary;

@interface IMTimingCollection : NSObject {

	NSMutableDictionary* _timings;
	os_unfair_lock_s _lock;

}
-(BOOL)hasKey:(id)arg1 ;
-(id)init;
-(id)description;
-(void)startTimingForKey:(id)arg1 ;
-(double)totalTimeForKey:(id)arg1 ;
-(void)removeTimingForKey:(id)arg1 ;
-(void)stopTimingForKey:(id)arg1 ;
@end

