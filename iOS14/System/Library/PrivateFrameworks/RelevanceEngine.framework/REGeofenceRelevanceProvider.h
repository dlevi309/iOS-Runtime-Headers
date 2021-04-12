/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CLCircularRegion *)region;
-(id)init;
-(NSString *)bundleIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithRegion:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithRegion:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

