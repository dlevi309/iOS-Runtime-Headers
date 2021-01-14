/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@interface CNEqualsBuilder : NSObject
+(BOOL)isObject:(id)arg1 equalToOther:(id)arg2 withBlocks:(/*^block*/id)arg3 ;
+(BOOL)isInteger:(long long)arg1 equalToOther:(long long)arg2 ;
+(BOOL)isDouble:(double)arg1 equalToOther:(double)arg2 withAccuracy:(double)arg3 ;
+(BOOL)evaluateBuilderBlock:(/*^block*/id)arg1 remainingBlocks:(char*)arg2 ;
+(BOOL)isObject:(id)arg1 memberOfSameClassAndEqualTo:(id)arg2 withBlocks:(/*^block*/id)arg3 ;
+(BOOL)isObject:(id)arg1 memberOfClass:(Class)arg2 andEqualToObject:(id)arg3 withBlocks:(/*^block*/id)arg4 ;
+(BOOL)isObject:(id)arg1 equalToOther:(id)arg2 ;
+(BOOL)isObject:(id)arg1 kindOfClass:(Class)arg2 andEqualToObject:(id)arg3 withBlocks:(/*^block*/id)arg4 ;
+(BOOL)isString:(id)arg1 localizedCaseInsensitiveEqualToOther:(id)arg2 ;
+(BOOL)isBool:(BOOL)arg1 equalToOther:(BOOL)arg2 ;
@end

