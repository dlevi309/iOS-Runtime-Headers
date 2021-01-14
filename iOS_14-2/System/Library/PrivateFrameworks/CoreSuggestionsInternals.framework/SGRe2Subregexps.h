/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGRe2.h>

@class NSArray, SGRe2PrefilterTree;

@interface SGRe2Subregexps : SGRe2 {

	NSArray* _subregexps;
	SGRe2PrefilterTree* _prefilter;

}
-(id)existsInUtf8:(const char*)arg1 ;
-(id)matchesUtf8:(const char*)arg1 ;
-(int)_enumerateMatchesInUtf8:(const char*)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)description;
-(id)initWithSubregexps:(id)arg1 prefilter:(id)arg2 ;
@end

