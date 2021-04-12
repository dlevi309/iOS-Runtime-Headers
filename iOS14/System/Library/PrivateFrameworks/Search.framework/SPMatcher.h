/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/


@interface SPMatcher : NSObject {

	void* _matcher;

}
+(id)transcriptionForString:(id)arg1 withLanguage:(id)arg2 ;
-(BOOL)matches:(id)arg1 ;
-(BOOL)matches:(id)arg1 outMatchBits:(unsigned long long*)arg2 ;
-(BOOL)matchesUTF8String:(const char*)arg1 outMatchBits:(unsigned long long*)arg2 ;
-(unsigned long long)wordCount;
-(void)dealloc;
-(BOOL)matchesUTF8String:(const char*)arg1 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(unsigned long long)arg3 ;
@end

