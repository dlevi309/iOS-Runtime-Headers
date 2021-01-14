/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSArray;

@interface REContentRelevanceProvider : RERelevanceProvider {

	NSArray* _keywords;

}

@property (nonatomic,readonly) NSArray * keywords;              //@synthesize keywords=_keywords - In the implementation block
+(id)relevanceSimulatorID;
-(id)init;
-(NSArray *)keywords;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithContent:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithKeywords:(id)arg1 ;
@end

