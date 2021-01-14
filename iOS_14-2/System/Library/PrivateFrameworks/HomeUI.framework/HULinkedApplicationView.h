/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, UIImageView, UILabel, HULinkedApplicationRatingView, UIButton, NSString, NSURL, NSArray;

@interface HULinkedApplicationView : UIView <HUCellProtocol> {

	BOOL _isInstalled;
	HFItem* _item;
	UIImageView* _iconView;
	UILabel* _nameLabel;
	UILabel* _publisherLabel;
	HULinkedApplicationRatingView* _ratingView;
	UILabel* _priceLabel;
	UILabel* _installedLabel;
	UIButton* _viewButton;
	NSString* _bundleID;
	NSURL* _storeURL;
	NSArray* _currentConstraints;

}

@property (nonatomic,retain) UIImageView * iconView;                                           //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                              //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * publisherLabel;                                         //@synthesize publisherLabel=_publisherLabel - In the implementation block
@property (nonatomic,retain) HULinkedApplicationRatingView * ratingView;                       //@synthesize ratingView=_ratingView - In the implementation block
@property (nonatomic,retain) UILabel * priceLabel;                                             //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) UILabel * installedLabel;                                         //@synthesize installedLabel=_installedLabel - In the implementation block
@property (nonatomic,retain) UIButton * viewButton;                                            //@synthesize viewButton=_viewButton - In the implementation block
@property (assign,nonatomic) BOOL isInstalled;                                                 //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                                                 //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSArray * currentConstraints;                                     //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(UILabel *)priceLabel;
-(void)setPriceLabel:(UILabel *)arg1 ;
-(NSURL *)storeURL;
-(void)_viewButtonTapped:(id)arg1 ;
-(HFItem *)item;
-(BOOL)isInstalled;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(NSArray *)currentConstraints;
-(void)setItem:(HFItem *)arg1 ;
-(void)updateConstraints;
-(UIImageView *)iconView;
-(void)setIsInstalled:(BOOL)arg1 ;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(void)setIconView:(UIImageView *)arg1 ;
-(NSString *)bundleID;
-(void)setStoreURL:(NSURL *)arg1 ;
-(UIButton *)viewButton;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setViewButton:(UIButton *)arg1 ;
-(void)setPublisherLabel:(UILabel *)arg1 ;
-(UILabel *)publisherLabel;
-(void)setRatingView:(HULinkedApplicationRatingView *)arg1 ;
-(HULinkedApplicationRatingView *)ratingView;
-(void)setInstalledLabel:(UILabel *)arg1 ;
-(UILabel *)installedLabel;
@end

