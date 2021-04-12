/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(NSArray *)keywords;
-(id)initWithContent:(id)arg1 ;
-(id)dictionaryEncoding;
-(id)initWithKeywords:(id)arg1 ;
@end

