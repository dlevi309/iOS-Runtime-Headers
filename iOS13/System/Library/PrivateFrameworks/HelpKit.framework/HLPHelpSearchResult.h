/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setWeight:(long long)arg1 ;
-(long long)weight;
-(void)setRelevanceScore:(double)arg1 ;
-(double)relevanceScore;
-(long long)matchCount;
-(void)setMatchCount:(long long)arg1 ;
@end

