/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, NSDictionary;

@interface _PSContactSuggestion : NSObject <NSSecureCoding> {

	NSString* _contactIdentifier;
	double _regularityScore;
	unsigned long long _totalFrequency;
	NSSet* _daysInteracted;
	NSDictionary* _handleAndAppFrequencies;
	NSDictionary* _handleAndAppRegularityScores;

}

@property (nonatomic,copy) NSString * contactIdentifier;                             //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) double regularityScore;                                 //@synthesize regularityScore=_regularityScore - In the implementation block
@property (assign,nonatomic) unsigned long long totalFrequency;                      //@synthesize totalFrequency=_totalFrequency - In the implementation block
@property (nonatomic,copy) NSSet * daysInteracted;                                   //@synthesize daysInteracted=_daysInteracted - In the implementation block
@property (nonatomic,copy) NSDictionary * handleAndAppFrequencies;                   //@synthesize handleAndAppFrequencies=_handleAndAppFrequencies - In the implementation block
@property (nonatomic,copy) NSDictionary * handleAndAppRegularityScores;              //@synthesize handleAndAppRegularityScores=_handleAndAppRegularityScores - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)contactIdentifier;
-(NSSet *)daysInteracted;
-(NSDictionary *)handleAndAppRegularityScores;
-(NSDictionary *)handleAndAppFrequencies;
-(void)setHandleAndAppFrequencies:(NSDictionary *)arg1 ;
-(void)setHandleAndAppRegularityScores:(NSDictionary *)arg1 ;
-(void)setDaysInteracted:(NSSet *)arg1 ;
-(void)setTotalFrequency:(unsigned long long)arg1 ;
-(void)setRegularityScore:(double)arg1 ;
-(double)regularityScore;
-(unsigned long long)totalFrequency;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

