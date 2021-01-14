/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/


@protocol EMFAutocompleteCandidateProvider;
#import <EmojiFoundation/EmojiFoundation-Structs.h>
@class EMFQueryLogger, NSLocale, EMFIndexManager, EMFStringStemmer, EMFQueryResultOverrideList;

@interface EMFEmojiSearchEngine : NSObject {

	const EmojiLocaleDataWrapperRef _localeData;
	EMFQueryLogger* _queryLogger;
	BOOL _enableAutocomplete;
	NSLocale* _locale;
	EMFIndexManager* _indexManager;
	EMFStringStemmer* _stringStemmer;
	id<EMFAutocompleteCandidateProvider> _autocompleteProvider;
	EMFQueryResultOverrideList* _overrideList;

}

@property (nonatomic,readonly) NSLocale * locale;                                                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) EMFIndexManager * indexManager;                                         //@synthesize indexManager=_indexManager - In the implementation block
@property (nonatomic,readonly) EMFStringStemmer * stringStemmer;                                       //@synthesize stringStemmer=_stringStemmer - In the implementation block
@property (nonatomic,readonly) id<EMFAutocompleteCandidateProvider> autocompleteProvider;              //@synthesize autocompleteProvider=_autocompleteProvider - In the implementation block
@property (nonatomic,readonly) EMFQueryResultOverrideList * overrideList;                              //@synthesize overrideList=_overrideList - In the implementation block
@property (assign,nonatomic) BOOL enableAutocomplete;                                                  //@synthesize enableAutocomplete=_enableAutocomplete - In the implementation block
+(BOOL)isLocaleSupported:(id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(void)preheat;
-(NSLocale *)locale;
-(id)init;
-(EMFIndexManager *)indexManager;
-(void)dealloc;
-(EMFStringStemmer *)stringStemmer;
-(EMFQueryResultOverrideList *)overrideList;
-(id)initWithLocale:(id)arg1 andAssetBundle:(id)arg2 ;
-(id)initWithLocale:(id)arg1 andIndexManager:(id)arg2 andStringStemmer:(id)arg3 andAutocompleteProvider:(id)arg4 ;
-(id)_performStringQueryUntokenized:(id)arg1 usingIndex:(id)arg2 ;
-(id)_performStringQueryOverride:(id)arg1 usingIndex:(id)arg2 ;
-(id)_performStringQuery:(id)arg1 usingIndex:(id)arg2 shouldAutocomplete:(BOOL)arg3 shouldStem:(BOOL)arg4 ;
-(id)performQuery:(id)arg1 usingIndex:(id)arg2 ;
-(id)_performAutocompletedQueryForQuery:(id)arg1 usingIndex:(id)arg2 ;
-(id<EMFAutocompleteCandidateProvider>)autocompleteProvider;
-(id)performStringQuery:(id)arg1 ;
-(BOOL)enableAutocomplete;
-(void)setEnableAutocomplete:(BOOL)arg1 ;
@end

