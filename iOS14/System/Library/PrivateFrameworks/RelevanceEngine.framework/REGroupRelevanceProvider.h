/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString;

@interface REGroupRelevanceProvider : RERelevanceProvider {

	NSString* _groupIdentifier;

}

@property (nonatomic,readonly) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(id)relevanceSimulatorID;
-(NSString *)groupIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithGroupIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
@end

