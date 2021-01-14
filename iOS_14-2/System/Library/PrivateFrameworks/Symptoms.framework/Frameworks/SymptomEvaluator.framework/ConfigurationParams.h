/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSDictionary;

@interface ConfigurationParams : NSObject {

	NSDictionary* _underlyingDictionary;

}

@property (nonatomic,retain) NSDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
-(void)setUnderlyingDictionary:(NSDictionary *)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(NSDictionary *)underlyingDictionary;
-(int)extractKey:(id)arg1 toDouble:(double*)arg2 defaultTo:(double)arg3 ;
-(int)extractKey:(id)arg1 toUint32:(unsigned*)arg2 defaultTo:(unsigned)arg3 ;
-(int)extractKey:(id)arg1 toBool:(BOOL*)arg2 defaultTo:(BOOL)arg3 ;
-(int)extractKey:(id)arg1 toUint64:(unsigned long long*)arg2 defaultTo:(unsigned long long)arg3 ;
-(int)extractKey:(id)arg1 toNSUInteger:(unsigned long long*)arg2 defaultTo:(unsigned long long)arg3 ;
-(int)extractKey:(id)arg1 toDouble:(double*)arg2 defaultTo:(double)arg3 logAs:(id)arg4 ;
-(int)extractKey:(id)arg1 toUint64:(unsigned long long*)arg2 defaultTo:(unsigned long long)arg3 logAs:(id)arg4 ;
-(int)extractKey:(id)arg1 toUint32:(unsigned*)arg2 defaultTo:(unsigned)arg3 logAs:(id)arg4 ;
-(int)extractKey:(id)arg1 toBOOL:(BOOL*)arg2 defaultTo:(BOOL)arg3 ;
@end

