/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying> {

	Class _defaultClass;
	NSMutableDictionary* _dict;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 ;
-(id)keys;
-(id)deepCopy;
-(id)initWithDefaultClass:(Class)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 isDeepCopy:(BOOL)arg2 ;
-(id)_mutableCopyOfFinalDictionaryWithZone:(NSZone*)arg1 isDeepCopy:(BOOL)arg2 ;
-(id)finalDictionary;
-(id)existingObjectForKey:(id)arg1 ;
@end

