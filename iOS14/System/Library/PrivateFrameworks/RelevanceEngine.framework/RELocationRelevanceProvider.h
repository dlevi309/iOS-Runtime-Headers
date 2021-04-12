/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CLLocation *)location;
-(NSString *)bundleIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(double)radius;
-(id)description;
-(unsigned long long)type;
-(double)accuracy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithLocationType:(unsigned long long)arg1 ;
-(id)initWithLocation:(id)arg1 radius:(double)arg2 ;
-(id)providerWithBundleIdentifier:(id)arg1 ;
-(id)initWithLocation:(id)arg1 radius:(double)arg2 accuracy:(double)arg3 ;
@end

