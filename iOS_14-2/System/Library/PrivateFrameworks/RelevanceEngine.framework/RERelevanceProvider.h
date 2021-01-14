/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)customRelevanceProviderForFeature:(id)arg1 withValue:(id)arg2 ;
+(id)relevanceSimulatorID;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)setEnvironment:(id)arg1 ;
-(unsigned long long)hash;
-(id)environment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(unsigned long long)relevancePriority;
-(id)providerWithPriority:(unsigned long long)arg1 ;
@end

