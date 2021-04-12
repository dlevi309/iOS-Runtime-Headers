/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RETaggedFeatureValueArray : NSObject <NSCopying> {

	CFArrayRef _array;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)initWithValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)enumerateFeatureValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)addFeatureValue:(unsigned long long)arg1 ;
-(unsigned long long)_locked_count;
-(unsigned long long)_locked_featureValueAtIndex:(unsigned long long)arg1 ;
-(id)initWithFeatureValues:(id)arg1 ;
-(unsigned long long)featureValueAtIndex:(unsigned long long)arg1 ;
-(void)insertFeatureValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeFeatureValueAtIndex:(unsigned long long)arg1 ;
-(void)removeAllFeatureValues;
-(void)replaceFeatureValueAtIndex:(unsigned long long)arg1 withValue:(unsigned long long)arg2 ;
-(unsigned long long)firstFeatureValue;
-(unsigned long long)lastFeatureValue;
@end

