/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RERelevanceProviderEnvironment;

@interface RERelevanceProvider : NSObject <NSCopying> {

	unsigned long long _cachedHash;
	unsigned long long _priority;
	RERelevanceProviderEnvironment* _environment;

}
+(id)relevanceSimulatorID;
+(id)customRelevanceProviderForFeature:(id)arg1 withValue:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(id)environment;
-(void)setEnvironment:(id)arg1 ;
-(id)dictionaryEncoding;
-(unsigned long long)relevancePriority;
-(id)providerWithPriority:(unsigned long long)arg1 ;
@end

