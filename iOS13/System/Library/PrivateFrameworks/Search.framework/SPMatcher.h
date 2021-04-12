/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/


@interface SPMatcher : NSObject {

	void* _matcher;

}
+(id)transcriptionForString:(id)arg1 withLanguage:(id)arg2 ;
-(void)dealloc;
-(BOOL)matches:(id)arg1 ;
-(BOOL)matchesUTF8String:(const char*)arg1 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(unsigned long long)arg3 ;
-(unsigned long long)wordCount;
-(BOOL)matches:(id)arg1 outMatchBits:(unsigned long long*)arg2 ;
-(BOOL)matchesUTF8String:(const char*)arg1 outMatchBits:(unsigned long long*)arg2 ;
@end

