/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIFont, UIImageView, UIStackView, UILabel, UIVisualEffectView, MKPlaceCollectionViewModel, NSUUID;

@interface MKPlaceCollectionCell : UICollectionViewCell {

	UIFont* _savedPillFont;
	UIImageView* _publisherLogoImageView;
	UIImageView* _collectionImageView;
	UIStackView* _metadataStackView;
	UILabel* _collectionLabel;
	UILabel* _collectionSecondaryLabel;
	UILabel* _savedCollectionLabel;
	UIVisualEffectView* _savedView;
	UIStackView* _savedStackView;
	UIImageView* _checkMarkImageView;
	MKPlaceCollectionViewModel* _item;
	NSUUID* _updateIdentifier;

}

@property (nonatomic,retain) UIImageView * publisherLogoImageView;              //@synthesize publisherLogoImageView=_publisherLogoImageView - In the implementation block
@property (nonatomic,retain) UIImageView * collectionImageView;                 //@synthesize collectionImageView=_collectionImageView - In the implementation block
@property (nonatomic,retain) UIStackView * metadataStackView;                   //@synthesize metadataStackView=_metadataStackView - In the implementation block
@property (nonatomic,retain) UILabel * collectionLabel;                         //@synthesize collectionLabel=_collectionLabel - In the implementation block
@property (nonatomic,retain) UILabel * collectionSecondaryLabel;                //@synthesize collectionSecondaryLabel=_collectionSecondaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * savedCollectionLabel;                    //@synthesize savedCollectionLabel=_savedCollectionLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * savedView;                    //@synthesize savedView=_savedView - In the implementation block
@property (nonatomic,retain) UIStackView * savedStackView;                      //@synthesize savedStackView=_savedStackView - In the implementation block
@property (nonatomic,retain) UIImageView * checkMarkImageView;                  //@synthesize checkMarkImageView=_checkMarkImageView - In the implementation block
@property (nonatomic,retain) MKPlaceCollectionViewModel * item;                 //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSUUID * updateIdentifier;                         //@synthesize updateIdentifier=_updateIdentifier - In the implementation block
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(MKPlaceCollectionViewModel *)item;
-(void)setupCornerRadius;
-(void)setUpCellUsingModel:(id)arg1 ;
-(void)setupCollectionImage;
-(void)setupStackView;
-(UILabel *)savedCollectionLabel;
-(UIImageView *)checkMarkImageView;
-(CGSize)sizeForSavedPill;
-(UIImageView *)collectionImageView;
-(UIStackView *)metadataStackView;
-(UIImageView *)publisherLogoImageView;
-(UIStackView *)savedStackView;
-(void)setCollectionImageView:(UIImageView *)arg1 ;
-(void)setMetadataStackView:(UIStackView *)arg1 ;
-(void)addPublisherLogoImage;
-(void)setSavedView:(UIVisualEffectView *)arg1 ;
-(void)addCollectionNameView;
-(void)initializeCollectionSecondaryLabel;
-(void)addSavedCollectionView;
-(void)setPublisherLogoImageView:(UIImageView *)arg1 ;
-(void)setCollectionLabel:(UILabel *)arg1 ;
-(UILabel *)collectionLabel;
-(void)setCollectionSecondaryLabel:(UILabel *)arg1 ;
-(UILabel *)collectionSecondaryLabel;
-(void)setSavedStackView:(UIStackView *)arg1 ;
-(void)setCheckMarkImageView:(UIImageView *)arg1 ;
-(void)setSavedCollectionLabel:(UILabel *)arg1 ;
-(void)setTextMetadata;
-(void)addAndSetSecondaryLabel;
-(void)setImageMetadata;
-(void)configureWithModel:(id)arg1 ;
-(void)prepareForReuse;
-(void)setItem:(MKPlaceCollectionViewModel *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setupSubviews;
-(NSUUID *)updateIdentifier;
-(void)setUpdateIdentifier:(NSUUID *)arg1 ;
-(void)setupConstraints;
-(UIVisualEffectView *)savedView;
@end

