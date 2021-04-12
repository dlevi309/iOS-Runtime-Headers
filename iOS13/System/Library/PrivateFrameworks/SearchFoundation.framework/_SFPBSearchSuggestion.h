/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBSearchSuggestion.h>
@class NSString, _SFPBGraphicalFloat, NSArray, NSData;


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
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)type;
-(void)setType:(int)arg1;
-(NSString *)query;
-(id)initWithDictionary:(id)arg1;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setIdentifier:(id)arg1;
-(void)setQuery:(id)arg1;
-(_SFPBGraphicalFloat *)score;
-(void)setBundleIdentifier:(id)arg1;
-(void)setScore:(id)arg1;
-(void)setSuggestion:(id)arg1;
-(NSData *)jsonData;
-(NSString *)suggestion;
-(NSArray *)duplicateSuggestions;
-(void)setDuplicateSuggestions:(id)arg1;
-(NSString *)topicIdentifier;
-(void)setTopicIdentifier:(id)arg1;
-(BOOL)previouslyEngaged;
-(void)setPreviouslyEngaged:(BOOL)arg1;
-(NSString *)fbr;
-(void)setFbr:(id)arg1;
-(NSString *)scopedSearchApplicationBundleIdentifier;
-(void)setScopedSearchApplicationBundleIdentifier:(id)arg1;
-(NSString *)utteranceText;
-(void)setUtteranceText:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addDuplicateSuggestions:(id)arg1;
-(void)clearDuplicateSuggestions;
-(unsigned long long)duplicateSuggestionsCount;
-(id)duplicateSuggestionsAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBGraphicalFloat, NSArray, NSData;

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

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)query;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setQuery:(NSString *)arg1 ;
-(_SFPBGraphicalFloat *)score;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setScore:(_SFPBGraphicalFloat *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSuggestion:(NSString *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)suggestion;
-(NSArray *)duplicateSuggestions;
-(void)setDuplicateSuggestions:(NSArray *)arg1 ;
-(NSString *)topicIdentifier;
-(void)setTopicIdentifier:(NSString *)arg1 ;
-(BOOL)previouslyEngaged;
-(void)setPreviouslyEngaged:(BOOL)arg1 ;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(NSString *)scopedSearchApplicationBundleIdentifier;
-(void)setScopedSearchApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)utteranceText;
-(void)setUtteranceText:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addDuplicateSuggestions:(id)arg1 ;
-(void)clearDuplicateSuggestions;
-(unsigned long long)duplicateSuggestionsCount;
-(id)duplicateSuggestionsAtIndex:(unsigned long long)arg1 ;
@end

