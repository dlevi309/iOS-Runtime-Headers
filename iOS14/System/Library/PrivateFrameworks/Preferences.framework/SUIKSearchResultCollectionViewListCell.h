/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UICollectionViewListCell.h>

@class CSSearchableItem;

@interface SUIKSearchResultCollectionViewListCell : UICollectionViewListCell {

	CSSearchableItem* _searchableItem;

}

@property (nonatomic,retain) CSSearchableItem * searchableItem;              //@synthesize searchableItem=_searchableItem - In the implementation block
+(id)reuseIdentifier;
-(void)prepareForReuse;
-(CSSearchableItem *)searchableItem;
-(void)updateConfigurationUsingState:(id)arg1 ;
-(void)configureWithSearchableItem:(id)arg1 ;
-(void)setSearchableItem:(CSSearchableItem *)arg1 ;
@end

