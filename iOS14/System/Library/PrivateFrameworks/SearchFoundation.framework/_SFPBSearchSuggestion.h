/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBSearchSuggestion.h>
@class NSString, _SFPBGraphicalFloat, NSArray, NSDictionary, NSData;


@protocol _SFPBSearchSuggestion <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * suggestion; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,retain) _SFPBGraphicalFloat * score; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSArray * duplicateSuggestions; 
@property (nonatomic,copy) NSString * topicIdentifier; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (assign,nonatomic) BOOL previouslyEngaged; 
@property (nonatomic,copy) NSString * fbr; 
@property (nonatomic,copy) NSString * scopedSearchApplicationBundleIdentifier; 
@property (nonatomic,copy) NSString * utteranceText; 
@property (nonatomic,copy) NSString * detailText; 
@property (nonatomic,copy) NSDictionary * serverFeatures; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)fbr;
-(NSString *)query;
-(void)setFbr:(id)arg1;
-(void)setServerFeatures:(id)arg1;
-(void)setUtteranceText:(id)arg1;
-(void)setPreviouslyEngaged:(BOOL)arg1;
-(_SFPBGraphicalFloat *)score;
-(NSData *)jsonData;
-(NSString *)bundleIdentifier;
-(void)setScore:(id)arg1;
-(NSArray *)duplicateSuggestions;
-(void)setDuplicateSuggestions:(id)arg1;
-(void)setTopicIdentifier:(id)arg1;
-(NSString *)scopedSearchApplicationBundleIdentifier;
-(void)setScopedSearchApplicationBundleIdentifier:(id)arg1;
-(NSString *)utteranceText;
-(NSString *)suggestion;
-(void)setType:(int)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)addDuplicateSuggestions:(id)arg1;
-(void)clearDuplicateSuggestions;
-(unsigned long long)duplicateSuggestionsCount;
-(id)duplicateSuggestionsAtIndex:(unsigned long long)arg1;
-(void)setDetailText:(id)arg1;
-(NSString *)topicIdentifier;
-(void)setBundleIdentifier:(id)arg1;
-(NSDictionary *)serverFeatures;
-(BOOL)previouslyEngaged;
-(int)type;
-(void)setSuggestion:(id)arg1;
-(void)setServerFeatures:(double)arg1 forKey:(id)arg2;
-(BOOL)getServerFeatures:(double*)arg1 forKey:(id)arg2;
-(void)setIdentifier:(id)arg1;
-(void)setQuery:(id)arg1;
-(NSString *)identifier;
-(NSString *)detailText;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBGraphicalFloat, NSArray, NSDictionary, NSData;

@interface _SFPBSearchSuggestion : PBCodable <_SFPBSearchSuggestion, NSSecureCoding> {

	BOOL _previouslyEngaged;
	int _type;
	NSString* _identifier;
	NSString* _suggestion;
	NSString* _query;
	_SFPBGraphicalFloat* _score;
	NSArray* _duplicateSuggestions;
	NSString* _topicIdentifier;
	NSString* _bundleIdentifier;
	NSString* _fbr;
	NSString* _scopedSearchApplicationBundleIdentifier;
	NSString* _utteranceText;
	NSString* _detailText;
	NSDictionary* _serverFeatures;

}

@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * suggestion;                                           //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy) NSString * query;                                                //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * score;                                   //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) int type;                                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * duplicateSuggestions;                                  //@synthesize duplicateSuggestions=_duplicateSuggestions - In the implementation block
@property (nonatomic,copy) NSString * topicIdentifier;                                      //@synthesize topicIdentifier=_topicIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL previouslyEngaged;                                        //@synthesize previouslyEngaged=_previouslyEngaged - In the implementation block
@property (nonatomic,copy) NSString * fbr;                                                  //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,copy) NSString * scopedSearchApplicationBundleIdentifier;              //@synthesize scopedSearchApplicationBundleIdentifier=_scopedSearchApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * utteranceText;                                        //@synthesize utteranceText=_utteranceText - In the implementation block
@property (nonatomic,copy) NSString * detailText;                                           //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,copy) NSDictionary * serverFeatures;                                   //@synthesize serverFeatures=_serverFeatures - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)fbr;
-(id)dictionaryRepresentation;
-(NSString *)query;
-(void)setFbr:(NSString *)arg1 ;
-(void)setServerFeatures:(NSDictionary *)arg1 ;
-(void)setUtteranceText:(NSString *)arg1 ;
-(void)setPreviouslyEngaged:(BOOL)arg1 ;
-(_SFPBGraphicalFloat *)score;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)bundleIdentifier;
-(void)setScore:(_SFPBGraphicalFloat *)arg1 ;
-(NSArray *)duplicateSuggestions;
-(void)setDuplicateSuggestions:(NSArray *)arg1 ;
-(void)setTopicIdentifier:(NSString *)arg1 ;
-(NSString *)scopedSearchApplicationBundleIdentifier;
-(void)setScopedSearchApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)utteranceText;
-(NSString *)suggestion;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addDuplicateSuggestions:(id)arg1 ;
-(void)clearDuplicateSuggestions;
-(unsigned long long)duplicateSuggestionsCount;
-(id)duplicateSuggestionsAtIndex:(unsigned long long)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)topicIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSDictionary *)serverFeatures;
-(BOOL)previouslyEngaged;
-(int)type;
-(unsigned long long)hash;
-(void)setSuggestion:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setServerFeatures:(double)arg1 forKey:(id)arg2 ;
-(BOOL)getServerFeatures:(double*)arg1 forKey:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)writeTo:(id)arg1 ;
-(NSString *)detailText;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

