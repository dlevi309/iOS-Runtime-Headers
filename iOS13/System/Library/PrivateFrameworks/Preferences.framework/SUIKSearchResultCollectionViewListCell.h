/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/_UICollectionViewListCell.h>

@class UILabel, UILayoutGuide, CSSearchableItem;

@interface SUIKSearchResultCollectionViewListCell : _UICollectionViewListCell {

	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UILayoutGuide* _simulatedImageViewLayoutGuide;
	CSSearchableItem* _searchableItem;

}

@property (nonatomic,retain) UILabel * textLabel;                                        //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabel;                                  //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) UILayoutGuide * simulatedImageViewLayoutGuide;              //@synthesize simulatedImageViewLayoutGuide=_simulatedImageViewLayoutGuide - In the implementation block
@property (nonatomic,retain) CSSearchableItem * searchableItem;                          //@synthesize searchableItem=_searchableItem - In the implementation block
+(id)reuseIdentifier;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setSimulatedImageViewLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)simulatedImageViewLayoutGuide;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(void)setSearchableItem:(CSSearchableItem *)arg1 ;
-(CSSearchableItem *)searchableItem;
-(void)configureWithSearchableItem:(id)arg1 ;
@end

