/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/

#import <libobjc.A.dylib/EMFAutocompleteCandidateProvider.h>

@class NSArray;

@interface EMFDefaultAutocompleteCandidateProvider : NSObject <EMFAutocompleteCandidateProvider> {

	NSArray* _tokens;

}

@property (nonatomic,readonly) NSArray * tokens;              //@synthesize tokens=_tokens - In the implementation block
+(id)providerFromInvertedIndex:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(NSArray *)tokens;
-(id)initWithTokens:(id)arg1 ;
-(id)firstMatchForPrefix:(id)arg1 ;
-(id)matchesForPrefix:(id)arg1 usingAlgorithm:(unsigned long long)arg2 ;
-(void)enumerateCandidatesMatchingPrefix:(id)arg1 withEnumerationType:(long long)arg2 maxCandidates:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)firstCandidateMatchingPrefix:(id)arg1 ;
-(BOOL)isValidToken:(id)arg1 ;
@end

