/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCDerivedPersonalizationData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBPersonalizationProfile, NSDictionary, NSString;

@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, NSSecureCoding, NSCopying> {

	NTPBPersonalizationProfile* _profile;
	NSDictionary* _aggregatesByFeatureKey;

}

@property (nonatomic,copy) NTPBPersonalizationProfile * profile;                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSDictionary * aggregatesByFeatureKey;              //@synthesize aggregatesByFeatureKey=_aggregatesByFeatureKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setProfile:(NTPBPersonalizationProfile *)arg1 ;
-(id)aggregateForFeatureKey:(id)arg1 ;
-(id)aggregatesForFeatureKeys:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPersonalizationProfile:(id)arg1 ;
-(void)setAggregatesByFeatureKey:(NSDictionary *)arg1 ;
-(NTPBPersonalizationProfile *)profile;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)aggregatesByFeatureKey;
@end

