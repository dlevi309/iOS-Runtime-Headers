/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NTPBPersonalizationProfile *)profile;
-(void)setProfile:(NTPBPersonalizationProfile *)arg1 ;
-(NSDictionary *)aggregatesByFeatureKey;
-(id)aggregatesForFeatureKeys:(id)arg1 ;
-(id)initWithPersonalizationProfile:(id)arg1 ;
-(id)aggregateForFeatureKey:(id)arg1 ;
-(void)setAggregatesByFeatureKey:(NSDictionary *)arg1 ;
@end

