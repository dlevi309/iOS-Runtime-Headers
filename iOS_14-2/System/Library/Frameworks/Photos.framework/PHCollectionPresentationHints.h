/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

@class NSDictionary;


@protocol PHCollectionPresentationHints <NSObject>
@property (nonatomic,readonly) long long temporalRange; 
@property (nonatomic,readonly) unsigned long long socialRelationships; 
@property (nonatomic,readonly) long long tripType; 
@property (nonatomic,readonly) long long qualityCategory; 
@property (nonatomic,readonly) unsigned long long recommendedMoods; 
@property (nonatomic,readonly) unsigned long long forbiddenMoods; 
@property (nonatomic,readonly) NSDictionary * musicGenreDistribution; 
@required
-(long long)temporalRange;
-(unsigned long long)socialRelationships;
-(long long)qualityCategory;
-(unsigned long long)recommendedMoods;
-(unsigned long long)forbiddenMoods;
-(NSDictionary *)musicGenreDistribution;
-(long long)tripType;

@end

