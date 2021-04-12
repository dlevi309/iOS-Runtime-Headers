/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PSIQueryToken, NSValue, PSIGroup, NSArray;

@interface PSIGroupAggregateItem : NSObject {

	PSIQueryToken* _searchToken;
	NSValue* _rangeMatchingToken;
	PSIGroup* _group;
	NSArray* _assetIds;
	NSArray* _collectionIds;

}

@property (nonatomic,retain) PSIQueryToken * searchToken;               //@synthesize searchToken=_searchToken - In the implementation block
@property (nonatomic,retain) NSValue * rangeMatchingToken;              //@synthesize rangeMatchingToken=_rangeMatchingToken - In the implementation block
@property (nonatomic,retain) PSIGroup * group;                          //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSArray * assetIds;                        //@synthesize assetIds=_assetIds - In the implementation block
@property (nonatomic,retain) NSArray * collectionIds;                   //@synthesize collectionIds=_collectionIds - In the implementation block
-(void)setGroup:(PSIGroup *)arg1 ;
-(void)setCollectionIds:(NSArray *)arg1 ;
-(PSIGroup *)group;
-(NSArray *)collectionIds;
-(PSIQueryToken *)searchToken;
-(NSValue *)rangeMatchingToken;
-(void)setRangeMatchingToken:(NSValue *)arg1 ;
-(void)setSearchToken:(PSIQueryToken *)arg1 ;
-(void)reset;
-(NSArray *)assetIds;
-(void)setAssetIds:(NSArray *)arg1 ;
@end

