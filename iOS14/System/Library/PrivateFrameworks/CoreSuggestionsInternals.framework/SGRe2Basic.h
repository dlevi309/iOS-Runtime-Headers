/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGRe2.h>

@class NSData;

@interface SGRe2Basic : SGRe2 {

	NSData* _patternData;
	RE2* _pattern;
	BOOL _isTrivial;

}
-(id)initWithRegexp:(id)arg1 ;
-(id)initWithRegexpData:(id)arg1 ;
-(id)existsInUtf8:(const char*)arg1 ;
-(id)matchesUtf8:(const char*)arg1 ;
-(int)_enumerateMatchesInUtf8:(const char*)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)description;
-(id)hashId;
-(void)enumerateMatchesInUtf8:(const char*)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

