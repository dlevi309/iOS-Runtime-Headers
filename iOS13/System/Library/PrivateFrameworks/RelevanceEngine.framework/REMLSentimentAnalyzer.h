/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class REContentRanker;

@interface REMLSentimentAnalyzer : NSObject <NSCopying> {

	REContentRanker* _contentRanker;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sentimentForTokens:(id)arg1 ;
-(id)initWithContentRanker:(id)arg1 ;
-(id)sentimentForText:(id)arg1 ;
@end

