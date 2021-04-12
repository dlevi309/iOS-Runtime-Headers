/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableDictionary, NSLocale;

@interface PSITokenizer : NSObject {

	void* _tagger;
	CFStringTokenizerRef _nameTokenizer;
	BOOL _localeIsGerman;
	BOOL _useCache;
	NSMutableDictionary* _cache;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)fts5StringFromString:(id)arg1 forMatchType:(unsigned long long)arg2 ;
+(id)ftsTokenizerName;
+(id)fts5StringFromString:(id)arg1 useWildcard:(BOOL)arg2 ;
-(NSLocale *)locale;
-(void)tokenizePersonName:(id)arg1 tokenOutput:(tokenOutput_t*)arg2 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)_tokenizeString:(id)arg1 withContext:(SCD_Struct_PS27*)arg2 ;
-(id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id*)arg3 error:(id*)arg4 ;
-(id)initWithLocale:(id)arg1 useCache:(BOOL)arg2 ;
-(void)tokenizeString:(id)arg1 withOptions:(long long)arg2 tokenOutput:(tokenOutput_t*)arg3 ;
-(int)registerFTS5TokenizerForDatabase:(sqlite3Ref)arg1 ;
-(id)normalizeString:(id)arg1 ;
-(void)dealloc;
@end

