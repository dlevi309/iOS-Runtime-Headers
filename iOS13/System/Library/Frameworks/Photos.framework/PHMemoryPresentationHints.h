/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHCollectionPresentationHints.h>

@class NSDictionary, NSString;

@interface PHMemoryPresentationHints : NSObject <PHCollectionPresentationHints> {

	long long _temporalRange;
	unsigned long long _recommendedMoods;
	unsigned long long _forbiddenMoods;
	unsigned long long _socialRelationships;
	long long _tripType;
	NSDictionary* _musicGenreDistribution;
	long long _qualityCategory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long temporalRange;                             //@synthesize temporalRange=_temporalRange - In the implementation block
@property (nonatomic,readonly) unsigned long long socialRelationships;              //@synthesize socialRelationships=_socialRelationships - In the implementation block
@property (nonatomic,readonly) long long tripType;                                  //@synthesize tripType=_tripType - In the implementation block
@property (nonatomic,readonly) long long qualityCategory;                           //@synthesize qualityCategory=_qualityCategory - In the implementation block
@property (nonatomic,readonly) unsigned long long recommendedMoods;                 //@synthesize recommendedMoods=_recommendedMoods - In the implementation block
@property (nonatomic,readonly) unsigned long long forbiddenMoods;                   //@synthesize forbiddenMoods=_forbiddenMoods - In the implementation block
@property (nonatomic,readonly) NSDictionary * musicGenreDistribution;               //@synthesize musicGenreDistribution=_musicGenreDistribution - In the implementation block
+(unsigned long long)socialRelationshipsFromMemory:(id)arg1 ;
+(long long)tripTypeFromMemory:(id)arg1 ;
+(long long)temporalRangeFromMemory:(id)arg1 ;
-(NSString *)description;
-(NSDictionary *)musicGenreDistribution;
-(long long)temporalRange;
-(unsigned long long)socialRelationships;
-(long long)tripType;
-(long long)qualityCategory;
-(unsigned long long)recommendedMoods;
-(unsigned long long)forbiddenMoods;
-(id)initWithMemory:(id)arg1 ;
@end

