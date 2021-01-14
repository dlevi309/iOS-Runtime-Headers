/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REPriorityRelevanceProvider : RERelevanceProvider {

	float _priority;

}

@property (nonatomic,readonly) float priority;              //@synthesize priority=_priority - In the implementation block
+(id)relevanceSimulatorID;
-(id)initWithPriority:(float)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(float)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
@end

