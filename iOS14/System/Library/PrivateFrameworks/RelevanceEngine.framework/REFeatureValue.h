/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface REFeatureValue : NSObject <NSCopying>

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) unsigned long long int64Value; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,readonly) NSSet * setValue; 
+(id)featureValueWithString:(id)arg1 ;
+(id)featureValueWithDouble:(double)arg1 ;
+(id)featureValueWithInt64:(long long)arg1 ;
+(id)nullValueForFeature:(id)arg1 ;
+(id)featureValueWithBool:(BOOL)arg1 ;
+(id)featureValueWithDictionary:(id)arg1 ;
+(id)featureValueWithSet:(id)arg1 ;
-(NSSet *)setValue;
-(double)doubleValue;
-(BOOL)boolValue;
-(unsigned long long)int64Value;
-(NSString *)stringValue;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryEncoding;
-(unsigned long long)_integralFeatureValue;
@end

