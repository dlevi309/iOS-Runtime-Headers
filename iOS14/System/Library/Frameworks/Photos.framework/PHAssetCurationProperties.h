/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSData, NSArray, NSString, NSDate;

@interface PHAssetCurationProperties : PHAssetPropertySet {

	NSData* _objectSaliencyRectsData;
	NSArray* _cachedObjectSaliencyRects;
	float _interestingSubjectScore;
	float _behavioralScore;
	float _semanticScore;
	float _interactionScore;
	NSString* _creatorBundleID;
	NSDate* _addedDate;
	NSDate* _lastSharedDate;

}

@property (nonatomic,readonly) NSString * creatorBundleID;                 //@synthesize creatorBundleID=_creatorBundleID - In the implementation block
@property (nonatomic,readonly) NSDate * addedDate;                         //@synthesize addedDate=_addedDate - In the implementation block
@property (nonatomic,readonly) float interestingSubjectScore;              //@synthesize interestingSubjectScore=_interestingSubjectScore - In the implementation block
@property (nonatomic,readonly) float behavioralScore;                      //@synthesize behavioralScore=_behavioralScore - In the implementation block
@property (nonatomic,readonly) float semanticScore;                        //@synthesize semanticScore=_semanticScore - In the implementation block
@property (nonatomic,readonly) float interactionScore;                     //@synthesize interactionScore=_interactionScore - In the implementation block
@property (nonatomic,readonly) NSDate * lastSharedDate;                    //@synthesize lastSharedDate=_lastSharedDate - In the implementation block
@property (nonatomic,readonly) NSArray * objectSaliencyRects; 
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertySetName;
+(id)propertiesToFetch;
+(id)keyPathToPrimaryObject;
-(NSString *)creatorBundleID;
-(float)_semanticScoreFromBehavioralScore:(double)arg1 ;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSArray *)objectSaliencyRects;
-(float)interestingSubjectScore;
-(float)interactionScore;
-(NSDate *)lastSharedDate;
-(NSDate *)addedDate;
-(float)semanticScore;
-(float)behavioralScore;
@end

