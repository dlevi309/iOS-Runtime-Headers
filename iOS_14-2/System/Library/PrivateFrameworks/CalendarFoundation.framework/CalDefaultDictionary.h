/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying> {

	Class _defaultClass;
	NSMutableDictionary* _dict;

}
-(id)keys;
-(void)setDictionary:(id)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 isDeepCopy:(BOOL)arg2 ;
-(id)_mutableCopyOfFinalDictionaryWithZone:(NSZone*)arg1 isDeepCopy:(BOOL)arg2 ;
-(id)finalDictionary;
-(id)existingObjectForKey:(id)arg1 ;
-(id)initWithDefaultClass:(Class)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)deepCopy;
@end

