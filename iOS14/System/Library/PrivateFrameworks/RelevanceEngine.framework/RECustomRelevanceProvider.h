/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class REFeature;

@interface RECustomRelevanceProvider : RERelevanceProvider {

	REFeature* _feature;
	unsigned long long _value;

}

@property (nonatomic,readonly) REFeature * feature;                   //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
+(id)relevanceSimulatorID;
-(REFeature *)feature;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithFeature:(id)arg1 value:(unsigned long long)arg2 ;
@end

