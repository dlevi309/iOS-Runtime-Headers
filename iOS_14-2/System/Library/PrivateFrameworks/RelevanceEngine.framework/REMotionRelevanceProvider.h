/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REMotionRelevanceProvider : RERelevanceProvider {

	unsigned long long _motionTypes;

}

@property (nonatomic,readonly) unsigned long long motionTypes;              //@synthesize motionTypes=_motionTypes - In the implementation block
+(id)relevanceSimulatorID;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithMotionTypes:(unsigned long long)arg1 ;
-(unsigned long long)motionTypes;
@end

