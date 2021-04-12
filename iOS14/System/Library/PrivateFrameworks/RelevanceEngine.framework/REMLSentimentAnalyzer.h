/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

