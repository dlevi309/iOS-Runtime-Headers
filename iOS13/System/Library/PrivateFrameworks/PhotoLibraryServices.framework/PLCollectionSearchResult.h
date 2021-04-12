/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLSearchResult.h>

@class PSICollectionResult, NSString, NSDate, PSIDate;

@interface PLCollectionSearchResult : PLSearchResult {

	PSICollectionResult* _collectionResult;

}

@property (nonatomic,readonly) PSICollectionResult * collectionResult;              //@synthesize collectionResult=_collectionResult - In the implementation block
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSDate * sortDate; 
@property (nonatomic,readonly) PSIDate * startDate; 
@property (nonatomic,readonly) PSIDate * endDate; 
@property (nonatomic,readonly) unsigned long long collectionType; 
-(unsigned long long)type;
-(PSIDate *)startDate;
-(PSIDate *)endDate;
-(NSString *)uuid;
-(NSString *)title;
-(NSString *)subtitle;
-(unsigned long long)assetCount;
-(NSDate *)sortDate;
-(id)keyAssetUUID;
-(id)initWithGroupResult:(id)arg1 collectionResult:(id)arg2 ;
-(unsigned long long)collectionType;
-(PSICollectionResult *)collectionResult;
@end

