/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSSetChanges : NSMutableSet <NSCopying, NSFastEnumeration>

@property (readonly) unsigned long long changeCount; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)changeCount;
-(void)enumerateChanges:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_isToManyChangeInformation;
-(void)addObject:(id)arg1 ;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(long long)_toManyPropertyType;
-(void)applyChangesToSet:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)addChange:(id)arg1 ;
@end

