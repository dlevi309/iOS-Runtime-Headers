/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString;

@interface REBulletinDistributorRelevanceProvider : RERelevanceProvider {

	NSString* _bulletinSectionIdentifier;

}

@property (nonatomic,readonly) NSString * bulletinSectionIdentifier;              //@synthesize bulletinSectionIdentifier=_bulletinSectionIdentifier - In the implementation block
+(id)relevanceSimulatorID;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithBulletinSectionIdentifier:(id)arg1 ;
-(NSString *)bulletinSectionIdentifier;
@end

