/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLSearchResult.h>

@class NSDate, NSArray;

@interface PLAssetSearchResult : PLSearchResult {

	NSDate* _sortDate;

}

@property (nonatomic,readonly) NSArray * assetUUIDs; 
@property (nonatomic,readonly) NSDate * sortDate;                 //@synthesize sortDate=_sortDate - In the implementation block
-(unsigned long long)assetCount;
-(id)keyAssetUUID;
-(NSArray *)assetUUIDs;
-(NSDate *)sortDate;
-(unsigned long long)type;
@end

