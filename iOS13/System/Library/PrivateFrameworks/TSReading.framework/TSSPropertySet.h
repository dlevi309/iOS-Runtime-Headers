/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSSPropertySet : NSObject <NSCopying, NSMutableCopying> {

	id mIndexSet;

}
+(id)propertySetWithProperties:(int)arg1 ;
+(id)propertySet;
+(id)p_mutableIndexSetWithFirstProperty:(int)arg1 argumentList:(char*)arg2 ;
+(id)propertySetWithProperty:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)initWithIndexSet:(id)arg1 ;
-(id)initWithProperties:(int)arg1 ;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(id)propertySetByIntersectingWithPropertySet:(id)arg1 ;
-(BOOL)containsProperty:(int)arg1 ;
-(id)propertySetByAddingPropertiesFromSet:(id)arg1 ;
-(BOOL)containsProperties:(id)arg1 ;
-(id)propertySetByRemovingPropertiesFromSet:(id)arg1 ;
-(id)initWithFirstProperty:(int)arg1 argumentList:(char*)arg2 ;
-(id)initWithPropertySet:(id)arg1 ;
-(BOOL)intersectsProperties:(id)arg1 ;
-(id)propertySetByAddingProperties:(int)arg1 ;
-(id)propertySetByAddingProperty:(int)arg1 ;
-(id)propertySetByRemovingProperty:(int)arg1 ;
-(id)propertySetByRemovingProperties:(int)arg1 ;
-(id)propertyStrings;
@end

