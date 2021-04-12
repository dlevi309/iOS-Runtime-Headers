/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REForcedRelevanceProvider : RERelevanceProvider {

	BOOL _isHistoric;
	float _relevance;

}

@property (nonatomic,readonly) float relevance;              //@synthesize relevance=_relevance - In the implementation block
@property (nonatomic,readonly) BOOL isHistoric;              //@synthesize isHistoric=_isHistoric - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithForcedRelevance:(float)arg1 isHistoric:(BOOL)arg2 ;
-(id)initWithForcedRelevance:(float)arg1 ;
-(float)relevance;
-(BOOL)isHistoric;
@end

