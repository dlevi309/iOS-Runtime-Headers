/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSString, NSArray;

@interface _RESectionDescriptor : NSObject {

	BOOL _invertRanking;
	BOOL _allowsSubsections;
	NSString* _name;
	long long _maxElementCount;
	NSArray* _rules;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL invertRanking;                   //@synthesize invertRanking=_invertRanking - In the implementation block
@property (assign,nonatomic) long long maxElementCount;              //@synthesize maxElementCount=_maxElementCount - In the implementation block
@property (nonatomic,copy) NSArray * rules;                          //@synthesize rules=_rules - In the implementation block
@property (nonatomic,readonly) BOOL allowsSubsections;               //@synthesize allowsSubsections=_allowsSubsections - In the implementation block
-(void)setRules:(NSArray *)arg1 ;
-(NSString *)name;
-(NSArray *)rules;
-(BOOL)allowsSubsections;
-(BOOL)invertRanking;
-(long long)maxElementCount;
-(void)setMaxElementCount:(long long)arg1 ;
-(id)initWithSectionDescriptor:(id)arg1 ;
-(id)initWithHistoricSectionDescriptor:(id)arg1 ;
@end

