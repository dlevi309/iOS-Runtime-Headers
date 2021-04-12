/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)count;
-(unsigned long long)hash;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
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

