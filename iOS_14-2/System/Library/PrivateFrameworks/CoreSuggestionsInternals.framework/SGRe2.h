/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@interface SGRe2 : NSObject {

	unsigned char _isTrivial;

}
+(id)re2WithRegexp:(id)arg1 ;
+(id)re2WithRegexpLazy:(id)arg1 ;
+(id)re2WithRegexpData:(id)arg1 ;
+(id)re2WithRegexpDataLazy:(id)arg1 ;
+(id)re2WithSubregexps:(id)arg1 prefilter:(id)arg2 ;
+(id)re2WithSubregexps:(id)arg1 ;
+(void)setCacheLimitForTesting:(unsigned long long)arg1 ;
-(id)existsInUtf8:(const char*)arg1 ;
-(id)matchesUtf8:(const char*)arg1 ;
-(int)_enumerateMatchesInUtf8:(const char*)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)hashId;
-(void)enumerateMatchesInUtf8:(const char*)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)isTrivial;
-(id)existsInString:(id)arg1 ;
-(id)matchesString:(id)arg1 ;
-(void)enumerateMatchesInString:(id)arg1 ngroups:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)enumerateMatchesInUtf8:(const char*)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 blockWithSubregexp:(/*^block*/id)arg4 ;
-(void)enumerateMatchesInString:(id)arg1 ngroups:(unsigned long long)arg2 blockWithSubregexp:(/*^block*/id)arg3 ;
@end

