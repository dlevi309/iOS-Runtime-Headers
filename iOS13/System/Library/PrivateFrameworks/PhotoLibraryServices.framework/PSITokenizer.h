/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)ftsTokenizerName;
+(id)fts5StringFromString:(id)arg1 forMatchType:(unsigned long long)arg2 ;
+(id)fts5StringFromString:(id)arg1 useWildcard:(BOOL)arg2 ;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id*)arg3 error:(id*)arg4 ;
-(int)registerFTS5TokenizerForDatabase:(sqlite3Ref)arg1 ;
-(id)normalizeString:(id)arg1 ;
-(id)initWithLocale:(id)arg1 useCache:(BOOL)arg2 ;
-(void)tokenizeString:(id)arg1 withOptions:(long long)arg2 tokenOutput:(tokenOutput_t*)arg3 ;
-(void)_tokenizeString:(id)arg1 withContext:(SCD_Struct_PS25*)arg2 ;
-(void)tokenizePersonName:(id)arg1 tokenOutput:(tokenOutput_t*)arg2 ;
@end

