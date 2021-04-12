/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSString, NSDictionary;

@interface CNTracedLog : NSObject {

	NSString* _message;
	NSString* _domain;
	NSString* _domainVersion;
	NSString* _domainScope;
	NSString* _signature;
	NSString* _signature2;
	NSString* _signature3;
	NSString* _value;
	NSString* _value2;
	NSString* _value3;
	NSString* _uuid;
	BOOL _summarize;
	long long _result;
	NSDictionary* _customProperties;

}

@property (copy,readonly) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (copy,readonly) NSString * domain;                   //@synthesize domain=_domain - In the implementation block
@property (copy) NSString * domainVersion;                     //@synthesize domainVersion=_domainVersion - In the implementation block
@property (copy) NSString * domainScope;                       //@synthesize domainScope=_domainScope - In the implementation block
@property (copy) NSString * signature;                         //@synthesize signature=_signature - In the implementation block
@property (copy) NSString * signature2;                        //@synthesize signature2=_signature2 - In the implementation block
@property (copy) NSString * signature3;                        //@synthesize signature3=_signature3 - In the implementation block
@property (copy) NSString * value;                             //@synthesize value=_value - In the implementation block
@property (copy) NSString * value2;                            //@synthesize value2=_value2 - In the implementation block
@property (copy) NSString * value3;                            //@synthesize value3=_value3 - In the implementation block
@property (copy) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (assign) BOOL summarize;                             //@synthesize summarize=_summarize - In the implementation block
@property (assign) long long result;                           //@synthesize result=_result - In the implementation block
@property (copy) NSDictionary * customProperties;              //@synthesize customProperties=_customProperties - In the implementation block
+(id)logWithDomain:(id)arg1 ;
+(long long)roundNumber:(long long)arg1 usingSignificantDigits:(unsigned long long)arg2 ;
+(id)formatIntegerByRoundingForPrivacy:(long long)arg1 ;
+(BOOL)shouldLogGivenSamplePercentage:(float)arg1 ;
+(id)formatTimeIntervalByRoundingForPrivacy:(double)arg1 ;
-(void)setResult:(long long)arg1 ;
-(NSString *)signature;
-(NSString *)message;
-(NSString *)uuid;
-(NSString *)value3;
-(id)init;
-(NSString *)value2;
-(NSString *)domain;
-(NSDictionary *)customProperties;
-(void)setValue:(NSString *)arg1 ;
-(void)sendTrace;
-(BOOL)summarize;
-(NSString *)signature2;
-(NSString *)domainScope;
-(NSString *)signature3;
-(id)initWithDomain:(id)arg1 message:(id)arg2 ;
-(void)sendValue:(id)arg1 forKey:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateStandardKeysAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateCustomKeysAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)domainVersion;
-(void)setSummarize:(BOOL)arg1 ;
-(void)enumerateStandardizedKeysAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)resultString;
-(void)setValue2:(NSString *)arg1 ;
-(void)setDomainVersion:(NSString *)arg1 ;
-(void)setDomainScope:(NSString *)arg1 ;
-(void)setSignature2:(NSString *)arg1 ;
-(void)setSignature3:(NSString *)arg1 ;
-(long long)result;
-(void)setUuid:(NSString *)arg1 ;
-(void)setSignature:(NSString *)arg1 ;
-(void)setCustomProperties:(NSDictionary *)arg1 ;
-(NSString *)value;
-(void)setValue3:(NSString *)arg1 ;
@end

