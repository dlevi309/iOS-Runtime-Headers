/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGSuggestion.h>

@class NSArray, NSSet, NSDate, NSString, PHAsset;

@interface PGSingleAssetSuggestion : NSObject <PGSuggestion> {

	PHAsset* _asset;
	BOOL _isInvalid;
	unsigned short _type;
	unsigned short _subtype;
	NSSet* _features;
	id _recipe;
	unsigned long long _relevanceDurationInDays;
	NSString* _title;
	NSString* _subtitle;
	NSArray* _reasons;
	double _score;

}

@property (nonatomic,retain) id recipe;                                                     //@synthesize recipe=_recipe - In the implementation block
@property (assign,nonatomic) unsigned long long relevanceDurationInDays;                    //@synthesize relevanceDurationInDays=_relevanceDurationInDays - In the implementation block
@property (nonatomic,copy) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                             //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL isInvalid;                                                //@synthesize isInvalid=_isInvalid - In the implementation block
@property (assign,nonatomic) double score;                                                  //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSArray * reasons;                                               //@synthesize reasons=_reasons - In the implementation block
@property (nonatomic,readonly) unsigned short type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short subtype;                                      //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short notificationState; 
@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) NSArray * keyAssets; 
@property (nonatomic,readonly) NSArray * representativeAssets; 
@property (nonatomic,readonly) NSSet * features;                                            //@synthesize features=_features - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestedPersonLocalIdentifiers; 
@property (nonatomic,readonly) BOOL containsUnverifiedPersons; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) unsigned char notificationQuality; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned short)subtype;
-(NSDate *)universalEndDate;
-(void)setIsInvalid:(BOOL)arg1 ;
-(BOOL)isInvalid;
-(id)recipe;
-(void)setRecipe:(id)arg1 ;
-(NSSet *)features;
-(NSDate *)universalStartDate;
-(double)score;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setScore:(double)arg1 ;
-(unsigned short)notificationState;
-(void)setReasons:(NSArray *)arg1 ;
-(NSString *)description;
-(NSDate *)creationDate;
-(BOOL)containsUnverifiedPersons;
-(unsigned short)type;
-(NSArray *)reasons;
-(NSArray *)representativeAssets;
-(unsigned short)state;
-(void)setSubtitle:(NSString *)arg1 ;
-(long long)version;
-(NSString *)title;
-(NSArray *)keyAssets;
-(NSArray *)suggestedPersonLocalIdentifiers;
-(unsigned char)notificationQuality;
-(unsigned long long)relevanceDurationInDays;
-(id)initWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 asset:(id)arg3 ;
-(void)setRelevanceDurationInDays:(unsigned long long)arg1 ;
@end

