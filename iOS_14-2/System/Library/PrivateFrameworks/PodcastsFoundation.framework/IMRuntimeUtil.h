/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


@interface IMRuntimeUtil : NSObject
+(void)swizzleMethod:(SEL)arg1 onClass:(Class)arg2 withReplacementBlock:(/*^block*/id)arg3 ;
+(id)associatedValueForKey:(id)arg1 onObject:(id)arg2 ;
+(void)associateBoolValue:(BOOL)arg1 forKey:(id)arg2 onObject:(id)arg3 ;
+(double)associatedDoubleValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(double)arg3 ;
+(void)associateDoubleValue:(double)arg1 forKey:(id)arg2 onObject:(id)arg3 ;
+(BOOL)associatedBoolValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(BOOL)arg3 ;
+(id)associatedValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(id)arg3 ;
+(void)associateValue:(id)arg1 forKey:(id)arg2 onObject:(id)arg3 ;
+(void)associateValue:(id)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4 ;
+(void)associateBoolValue:(BOOL)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4 ;
+(void)associateIntValue:(long long)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4 ;
+(void)associateFloatValue:(float)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4 ;
+(void)associateDoubleValue:(double)arg1 forKey:(id)arg2 onObject:(id)arg3 withPolicy:(unsigned long long)arg4 ;
+(long long)associatedIntValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(long long)arg3 ;
+(float)associatedFloatValueForKey:(id)arg1 onObject:(id)arg2 withDefault:(float)arg3 ;
+(void)swizzleClassMethod:(SEL)arg1 onClass:(Class)arg2 withReplacementBlock:(/*^block*/id)arg3 ;
+(void)associateIntValue:(long long)arg1 forKey:(id)arg2 onObject:(id)arg3 ;
+(void)associateFloatValue:(float)arg1 forKey:(id)arg2 onObject:(id)arg3 ;
+(BOOL)associatedBoolValueForKey:(id)arg1 onObject:(id)arg2 ;
+(long long)associatedIntValueForKey:(id)arg1 onObject:(id)arg2 ;
+(float)associatedFloatValueForKey:(id)arg1 onObject:(id)arg2 ;
+(double)associatedDoubleValueForKey:(id)arg1 onObject:(id)arg2 ;
@end

