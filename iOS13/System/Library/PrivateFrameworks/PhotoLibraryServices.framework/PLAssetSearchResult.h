/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLSearchResult.h>

@class NSDate, NSArray;

@interface PLAssetSearchResult : PLSearchResult {

	NSDate* _sortDate;

}

@property (nonatomic,readonly) NSArray * assetUUIDs; 
@property (nonatomic,readonly) NSDate * sortDate;                 //@synthesize sortDate=_sortDate - In the implementation block
-(unsigned long long)type;
-(unsigned long long)assetCount;
-(NSDate *)sortDate;
-(id)keyAssetUUID;
-(NSArray *)assetUUIDs;
@end

