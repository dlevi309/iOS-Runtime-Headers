/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)featureValueWithInt64:(long long)arg1 ;
+(id)featureValueWithDouble:(double)arg1 ;
+(id)featureValueWithString:(id)arg1 ;
+(id)nullValueForFeature:(id)arg1 ;
+(id)featureValueWithBool:(BOOL)arg1 ;
+(id)featureValueWithDictionary:(id)arg1 ;
+(id)featureValueWithSet:(id)arg1 ;
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(unsigned long long)int64Value;
-(NSSet *)setValue;
-(id)dictionaryEncoding;
-(unsigned long long)_integralFeatureValue;
@end

