/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class CLCircularRegion, NSString;

@interface REGeofenceRelevanceProvider : RERelevanceProvider {

	CLCircularRegion* _region;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) CLCircularRegion * region;                //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)relevanceSimulatorID;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)_hash;
-(CLCircularRegion *)region;
-(id)initWithRegion:(id)arg1 ;
-(id)dictionaryEncoding;
-(id)initWithRegion:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

