/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet {

	NSMutableDictionary* _fetchDictionariesByWorkerType;

}

@property (nonatomic,readonly) NSMutableDictionary * fetchDictionariesByWorkerType;              //@synthesize fetchDictionariesByWorkerType=_fetchDictionariesByWorkerType - In the implementation block
+(BOOL)isToMany;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertySetName;
+(id)propertiesToFetch;
+(id)keyPathToPrimaryObject;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id*)arg2 outIgnoreUntilDate:(id*)arg3 ;
-(NSMutableDictionary *)fetchDictionariesByWorkerType;
@end

