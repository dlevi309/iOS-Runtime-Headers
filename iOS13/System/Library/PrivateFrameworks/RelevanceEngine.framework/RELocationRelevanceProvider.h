/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class CLLocation, NSString;

@interface RELocationRelevanceProvider : RERelevanceProvider {

	unsigned long long _type;
	CLLocation* _location;
	double _radius;
	double _accuracy;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                    //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double radius;                            //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) double accuracy;                          //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)_hash;
-(CLLocation *)location;
-(double)radius;
-(double)accuracy;
-(id)dictionaryEncoding;
-(id)initWithLocationType:(unsigned long long)arg1 ;
-(id)initWithLocation:(id)arg1 radius:(double)arg2 ;
-(id)providerWithBundleIdentifier:(id)arg1 ;
-(id)initWithLocation:(id)arg1 radius:(double)arg2 accuracy:(double)arg3 ;
@end

