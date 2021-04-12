/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)_hash;
-(unsigned long long)state;
-(id)initWithState:(unsigned long long)arg1 ;
-(id)dictionaryEncoding;
-(id)initWithState:(unsigned long long)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3 ;
-(NSString *)itemIdentifer;
@end

