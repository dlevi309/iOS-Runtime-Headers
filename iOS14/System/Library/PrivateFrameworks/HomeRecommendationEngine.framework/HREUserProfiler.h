/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/


@class NSDictionary;

@interface HREUserProfiler : NSObject {

	NSDictionary* _attributePrefrences;
	NSDictionary* _adjustedAttributePrefrences;
	double _averagePrefrenceScore;
	unsigned long long _userProficiency;

}

@property (nonatomic,retain) NSDictionary * attributePrefrences;                      //@synthesize attributePrefrences=_attributePrefrences - In the implementation block
@property (nonatomic,retain) NSDictionary * adjustedAttributePrefrences;              //@synthesize adjustedAttributePrefrences=_adjustedAttributePrefrences - In the implementation block
@property (assign,nonatomic) double averagePrefrenceScore;                            //@synthesize averagePrefrenceScore=_averagePrefrenceScore - In the implementation block
@property (assign,nonatomic) unsigned long long userProficiency;                      //@synthesize userProficiency=_userProficiency - In the implementation block
-(id)description;
-(id)initWithHomeManager:(id)arg1 ;
-(id)getUserPreferencesCategoriesMap;
-(id)getUserAttributePreferences:(id)arg1 homeManager:(id)arg2 ;
-(void)setAttributePrefrences:(NSDictionary *)arg1 ;
-(NSDictionary *)attributePrefrences;
-(double)getUserAverageAttributePreference:(id)arg1 ;
-(void)setAveragePrefrenceScore:(double)arg1 ;
-(id)getAdjustedUserAttributePreferences:(id)arg1 ;
-(void)setAdjustedAttributePrefrences:(NSDictionary *)arg1 ;
-(long long)calculateUserProficiency:(id)arg1 ;
-(void)setUserProficiency:(unsigned long long)arg1 ;
-(double)averagePrefrenceScore;
-(NSDictionary *)adjustedAttributePrefrences;
-(unsigned long long)userProficiency;
@end

