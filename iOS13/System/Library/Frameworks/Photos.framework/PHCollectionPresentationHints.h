/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)musicGenreDistribution;
-(long long)temporalRange;
-(unsigned long long)socialRelationships;
-(long long)tripType;
-(long long)qualityCategory;
-(unsigned long long)recommendedMoods;
-(unsigned long long)forbiddenMoods;

@end

