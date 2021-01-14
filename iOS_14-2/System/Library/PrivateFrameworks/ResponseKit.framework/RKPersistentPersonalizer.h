/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@protocol RKDisplayStringsProvider;
@class NSURL, NSString, NSLocale, NSDate, NSMutableDictionary;

@interface RKPersistentPersonalizer : NSObject {

	void* _model;
	NSURL* _dynamicDataURL;
	NSString* _languageID;
	NSLocale* _languageLocale;
	id<RKDisplayStringsProvider> _displayStringsProvider;
	NSDate* _lastObservedDynamicDataCreationDate;
	NSDate* _lastDynamicDataCreationCheckDate;
	NSMutableDictionary* _synonyms;

}

@property (retain) NSString * languageID;                                              //@synthesize languageID=_languageID - In the implementation block
@property (retain) NSLocale * languageLocale;                                          //@synthesize languageLocale=_languageLocale - In the implementation block
@property (retain) NSURL * dynamicDataURL;                                             //@synthesize dynamicDataURL=_dynamicDataURL - In the implementation block
@property (readonly) id<RKDisplayStringsProvider> displayStringsProvider;              //@synthesize displayStringsProvider=_displayStringsProvider - In the implementation block
@property (readonly) void* model; 
@property (retain) NSDate * lastObservedDynamicDataCreationDate;                       //@synthesize lastObservedDynamicDataCreationDate=_lastObservedDynamicDataCreationDate - In the implementation block
@property (retain) NSDate * lastDynamicDataCreationCheckDate;                          //@synthesize lastDynamicDataCreationCheckDate=_lastDynamicDataCreationCheckDate - In the implementation block
@property (retain) NSMutableDictionary * synonyms;                                     //@synthesize synonyms=_synonyms - In the implementation block
+(void)removeAllDynamicModelsInDirectory:(id)arg1 ;
+(id)nonEmptyStringsPredicate;
-(void*)model;
-(id)init;
-(NSString *)languageID;
-(NSMutableDictionary *)synonyms;
-(void)setLanguageID:(NSString *)arg1 ;
-(void)setSynonyms:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)flushDynamicData;
-(NSURL *)dynamicDataURL;
-(id<RKDisplayStringsProvider>)displayStringsProvider;
-(id)headwordsForSynonym:(id)arg1 ;
-(id)topSynonymsForSpeechAct:(id)arg1 headword:(id)arg2 recipientContext:(id)arg3 maxCount:(unsigned long long)arg4 ;
-(id)headwordsForSynonymPrefix:(id)arg1 ;
-(void)trainSynonymForSpeechAct:(id)arg1 headword:(id)arg2 userResponse:(id)arg3 recipientContext:(id)arg4 weight:(unsigned long long)arg5 effectiveDate:(id)arg6 ;
-(id)initWithLanguageIdentifier:(id)arg1 andDynamicDataURL:(id)arg2 displayStringsProvider:(id)arg3 ;
-(void*)createLanguageModel;
-(id)dynamicDataCreationDate;
-(void)initializeDynamicLanguageModel;
-(NSDate *)lastDynamicDataCreationCheckDate;
-(void)setLastDynamicDataCreationCheckDate:(NSDate *)arg1 ;
-(NSDate *)lastObservedDynamicDataCreationDate;
-(void)setLastObservedDynamicDataCreationDate:(NSDate *)arg1 ;
-(void)setDynamicDataURL:(NSURL *)arg1 ;
-(NSLocale *)languageLocale;
-(void)setLanguageLocale:(NSLocale *)arg1 ;
@end
