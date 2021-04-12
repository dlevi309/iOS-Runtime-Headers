/*
* Generated on Monday, March 1, 2021 at 2:30:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface AXIndexMap : NSObject <NSCopying, NSCoding> {

	CFDictionaryRef _map;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)indexes;
-(void)setObject:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)objectForIndex:(unsigned long long)arg1 ;
-(unsigned long long*)_createIndexesWithSize:(unsigned long long*)arg1 ;
-(id)_initWithIndexMap:(id)arg1 ;
-(id)_initAndDeepCopyIndexMap:(id)arg1 ;
-(id)initWithObjects:(id*)arg1 andIndexes:(unsigned long long*)arg2 count:(unsigned long long)arg3 ;
-(id)deepCopyWithZone:(NSZone*)arg1 ;
-(void)removeObjectForIndex:(unsigned long long)arg1 ;
-(void)addObjectsFromIndexMap:(id)arg1 ;
@end

