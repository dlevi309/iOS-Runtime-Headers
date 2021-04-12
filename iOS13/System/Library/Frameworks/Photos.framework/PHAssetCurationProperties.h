/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSDate;

@interface PHAssetCurationProperties : PHAssetPropertySet {

	float _interestingSubjectScore;
	float _behavioralScore;
	float _semanticScore;
	float _interactionScore;
	NSDate* _addedDate;
	NSDate* _lastSharedDate;

}

@property (nonatomic,readonly) NSDate * addedDate;                         //@synthesize addedDate=_addedDate - In the implementation block
@property (nonatomic,readonly) float interestingSubjectScore;              //@synthesize interestingSubjectScore=_interestingSubjectScore - In the implementation block
@property (nonatomic,readonly) float behavioralScore;                      //@synthesize behavioralScore=_behavioralScore - In the implementation block
@property (nonatomic,readonly) float semanticScore;                        //@synthesize semanticScore=_semanticScore - In the implementation block
@property (nonatomic,readonly) float interactionScore;                     //@synthesize interactionScore=_interactionScore - In the implementation block
@property (nonatomic,readonly) NSDate * lastSharedDate;                    //@synthesize lastSharedDate=_lastSharedDate - In the implementation block
+(id)propertiesToFetch;
+(id)entityName;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
-(float)interestingSubjectScore;
-(NSDate *)addedDate;
-(NSDate *)lastSharedDate;
-(float)behavioralScore;
-(float)interactionScore;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(float)_semanticScoreFromBehavioralScore:(double)arg1 ;
-(float)semanticScore;
@end

