/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString, NSDate;


@protocol PLSearchableAssetCollection <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * keyAssetUUID; 
@property (nonatomic,readonly) NSDate * keyAssetCreationDate; 
@property (nonatomic,readonly) NSDate * searchableStartDate; 
@property (nonatomic,readonly) NSDate * searchableEndDate; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@required
-(id)uuid;
-(unsigned long long)searchIndexCategory;
-(NSDate *)keyAssetCreationDate;
-(NSDate *)searchableEndDate;
-(NSDate *)searchableStartDate;
-(id)searchIndexContents;
-(NSString *)subtitle;
-(NSString *)keyAssetUUID;
-(unsigned long long)numberOfAssets;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
-(NSString *)title;

@end

