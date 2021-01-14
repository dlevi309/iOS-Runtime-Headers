/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString;

@interface RENowPlayingRelevanceProvider : RERelevanceProvider {

	unsigned long long _state;
	NSString* _bundleIdentifier;
	NSString* _itemIdentifer;

}

@property (nonatomic,readonly) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifer;                 //@synthesize itemIdentifer=_itemIdentifer - In the implementation block
+(id)relevanceSimulatorID;
-(id)initWithState:(unsigned long long)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithState:(unsigned long long)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3 ;
-(NSString *)itemIdentifer;
@end

