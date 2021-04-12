/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPValueTransformer.h>

@interface HAPDataValueTransformer : HAPValueTransformer
+(void)initialize;
+(BOOL)isValidFormat:(unsigned long long)arg1 ;
+(Class)expectedTransformedClassForFormat:(unsigned long long)arg1 ;
+(id)defaultDataValueTransformer;
-(id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
@end

