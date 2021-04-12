/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class CPSearchMatcher, NSMutableDictionary;

@interface _MFSearchMatcherContext : NSObject {

	CPSearchMatcher* _lastMatcher;
	char* _lastSearchString;
	unsigned long long _lastSearchStringLength;
	NSMutableDictionary* _matchers;

}

@property (nonatomic,retain) CPSearchMatcher * lastMatcher;                          //@synthesize lastMatcher=_lastMatcher - In the implementation block
@property (assign,nonatomic) char* lastSearchString;                                 //@synthesize lastSearchString=_lastSearchString - In the implementation block
@property (assign,nonatomic) unsigned long long lastSearchStringLength;              //@synthesize lastSearchStringLength=_lastSearchStringLength - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * matchers;                         //@synthesize matchers=_matchers - In the implementation block
-(void)dealloc;
-(void)flush;
-(char*)lastSearchString;
-(void)setLastSearchString:(char*)arg1 ;
-(void)setMatchers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)matchers;
-(CPSearchMatcher *)lastMatcher;
-(void)setLastMatcher:(CPSearchMatcher *)arg1 ;
-(unsigned long long)lastSearchStringLength;
-(void)setLastSearchStringLength:(unsigned long long)arg1 ;
@end

