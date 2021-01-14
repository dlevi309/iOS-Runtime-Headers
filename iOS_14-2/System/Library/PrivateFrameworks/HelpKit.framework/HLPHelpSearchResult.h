/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/


#import <HelpKit/HelpKit-Structs.h>
@class NSString;

@interface HLPHelpSearchResult : NSObject {

	double _relevanceScore;
	long long _weight;
	long long _matchCount;
	NSString* _identifier;

}

@property (assign,nonatomic) double relevanceScore;              //@synthesize relevanceScore=_relevanceScore - In the implementation block
@property (assign,nonatomic) long long weight;                   //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) long long matchCount;               //@synthesize matchCount=_matchCount - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)setWeight:(long long)arg1 ;
-(id)debugDescription;
-(long long)matchCount;
-(long long)weight;
-(double)relevanceScore;
-(void)setRelevanceScore:(double)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMatchCount:(long long)arg1 ;
@end

