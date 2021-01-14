/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
*/


@class NSString, NSMutableDictionary, NSSet, INFGrammarCollection;

@interface INFSentence : NSObject {

	NSString* _identifier;
	NSString* _format;
	NSMutableDictionary* _relationships;
	NSMutableDictionary* _placeholdersToTokens;
	NSSet* _placeholders;
	INFGrammarCollection* _collection;

}

@property (nonatomic,retain) NSMutableDictionary * relationships;                     //@synthesize relationships=_relationships - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * placeholdersToTokens;              //@synthesize placeholdersToTokens=_placeholdersToTokens - In the implementation block
@property (nonatomic,retain) NSSet * placeholders;                                    //@synthesize placeholders=_placeholders - In the implementation block
@property (assign,nonatomic,__weak) INFGrammarCollection * collection;                //@synthesize collection=_collection - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * format;                                         //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) NSString * resolvedSentence; 
+(id)sentenceWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)format;
-(INFGrammarCollection *)collection;
-(id)init;
-(NSMutableDictionary *)relationships;
-(void)setCollection:(INFGrammarCollection *)arg1 ;
-(NSSet *)placeholders;
-(void)setPlaceholders:(NSSet *)arg1 ;
-(NSString *)identifier;
-(NSString *)resolvedSentence;
-(void)setNumber:(id)arg1 forPlaceholder:(id)arg2 ;
-(void)setToken:(id)arg1 forPlaceholder:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setRelationships:(NSMutableDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 identifier:(id)arg2 ;
-(void)generatePlaceholders;
-(void)placeholder:(id)arg1 dependsOn:(id)arg2 ;
-(void)reportCyclesIfAny;
-(BOOL)containsUnresolvedTokens:(id)arg1 ;
-(id)unresolvedInArray:(id)arg1 ;
-(id)concreteToken:(id)arg1 in:(id)arg2 ;
-(id)filteredPlaceholders;
-(NSMutableDictionary *)placeholdersToTokens;
-(void)setPlaceholdersToTokens:(NSMutableDictionary *)arg1 ;
@end

