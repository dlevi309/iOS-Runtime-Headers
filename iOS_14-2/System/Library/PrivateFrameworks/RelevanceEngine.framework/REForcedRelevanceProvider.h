/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(float)relevance;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithForcedRelevance:(float)arg1 isHistoric:(BOOL)arg2 ;
-(id)initWithForcedRelevance:(float)arg1 ;
-(BOOL)isHistoric;
@end

