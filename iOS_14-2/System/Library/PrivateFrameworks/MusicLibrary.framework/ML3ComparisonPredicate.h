/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate {

	BOOL _caseInsensitive;
	int _comparison;
	id _value;
	NSString* _treatNullAsString;
	NSString* _transformFunction;

}

@property (nonatomic,readonly) id value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) int comparison;                                 //@synthesize comparison=_comparison - In the implementation block
@property (nonatomic,readonly) BOOL caseInsensitive;                           //@synthesize caseInsensitive=_caseInsensitive - In the implementation block
@property (nonatomic,copy,readonly) NSString * treatNullAsString;              //@synthesize treatNullAsString=_treatNullAsString - In the implementation block
@property (nonatomic,copy,readonly) NSString * transformFunction;              //@synthesize transformFunction=_transformFunction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 transformFunction:(id)arg4 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 treatNullAsString:(id)arg5 ;
+(id)predicateWithProperty:(id)arg1 equalToInteger:(long long)arg2 ;
+(id)predicateWithProperty:(id)arg1 equalToInt64:(long long)arg2 ;
+(id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 transformFunction:(id)arg5 treatNullAsString:(id)arg6 ;
-(int)comparison;
-(NSString *)transformFunction;
-(id)valueToBindForOperation:(long long)arg1 ;
-(id)databaseStatementParameters;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
-(id)operator;
-(NSString *)treatNullAsString;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)caseInsensitive;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

