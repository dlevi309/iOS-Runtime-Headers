/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSString, PGMeaningCriteriaInfo, NSArray;

@interface PGMeaningCriteriaEvaluator : NSObject {

	NSString* _meaningLabel;
	PGMeaningCriteriaInfo* _meaningCriteriaInfo;
	NSArray* _allMeaningCriteriaArray;

}

@property (nonatomic,retain) PGMeaningCriteriaInfo * meaningCriteriaInfo;              //@synthesize meaningCriteriaInfo=_meaningCriteriaInfo - In the implementation block
@property (nonatomic,retain) NSArray * allMeaningCriteriaArray;                        //@synthesize allMeaningCriteriaArray=_allMeaningCriteriaArray - In the implementation block
@property (nonatomic,readonly) NSString * meaningLabel;                                //@synthesize meaningLabel=_meaningLabel - In the implementation block
+(id)_allMeaningCriteriaClassArray;
+(id)meaningCriteriaEvaluatorsForMeaningLabel:(id)arg1 withDictionary:(id)arg2 ;
-(id)description;
-(NSString *)meaningLabel;
-(id)initWithDictionary:(id)arg1 meaningCriteriaInfo:(id)arg2 ;
-(BOOL)allCriteriaPassesForMomentNode:(id)arg1 ;
-(BOOL)allCriteriaIsValid;
-(PGMeaningCriteriaInfo *)meaningCriteriaInfo;
-(void)setMeaningCriteriaInfo:(PGMeaningCriteriaInfo *)arg1 ;
-(NSArray *)allMeaningCriteriaArray;
-(void)setAllMeaningCriteriaArray:(NSArray *)arg1 ;
@end

