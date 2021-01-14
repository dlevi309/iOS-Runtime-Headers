/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/NewMSPQuery.h>

@class MSPFavoritesContainer, NewMSPQuery, NSArray;

@interface MSPCollectionsQuery : NewMSPQuery {

	MSPFavoritesContainer* _itemContainer;
	NewMSPQuery* _itemQuery;

}

@property (readonly) NSArray * contents; 
@property (nonatomic,retain) MSPFavoritesContainer * itemContainer;              //@synthesize itemContainer=_itemContainer - In the implementation block
@property (nonatomic,retain) NewMSPQuery * itemQuery;                            //@synthesize itemQuery=_itemQuery - In the implementation block
-(NSArray *)contents;
-(void)addOrUpdateObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NewMSPQuery *)itemQuery;
-(void)removeObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2 ;
-(void)setCachedContents:(id)arg1 ;
-(MSPFavoritesContainer *)itemContainer;
-(void)setItemQuery:(NewMSPQuery *)arg1 ;
-(void)processContentsUsingBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setItemContainer:(MSPFavoritesContainer *)arg1 ;
-(id)initWithCollectionsContainer:(id)arg1 itemContainer:(id)arg2 delegate:(id)arg3 ;
-(id)initWithCollectionsContainer:(id)arg1 itemContainer:(id)arg2 delegate:(id)arg3 filteredWithBlock:(/*^block*/id)arg4 ;
-(id)subQueryFilteredWithBlock:(/*^block*/id)arg1 ;
-(void)addOrUpdateObject:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

