/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHBatchFetchedAssetPropertySet.h>

@class NSDate;

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (nonatomic,readonly) NSDate * creationDate; 
+(long long)batchSize;
+(long long)cacheSize;
+(BOOL)useObjectFetchingContext;
+(BOOL)useNoIndexSelf;
+(id)propertiesToSortBy;
+(id)propertiesToFetch;
-(NSDate *)creationDate;
@end

