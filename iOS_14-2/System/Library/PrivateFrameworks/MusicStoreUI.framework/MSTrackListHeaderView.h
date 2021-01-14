/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MSTrackListHeaderDelegate;
@class UIImage, SUItem, UILabel, SUReflectionImageView, SUItemOfferButton, SUTouchCaptureView;

@interface MSTrackListHeaderView : UIView {

	id<MSTrackListHeaderDelegate> _delegate;
	UIImage* _artworkImage;
	SUItem* _item;
	UILabel* _albumLabel;
	UILabel* _artistLabel;
	UILabel* _disclaimerLabel;
	UILabel* _itemCountLabel;
	UILabel* _releaseDateLabel;
	SUReflectionImageView* _artworkView;
	SUItemOfferButton* _offerButton;
	SUTouchCaptureView* _touchCaptureView;

}

@property (nonatomic,retain) UIImage * artworkImage;                              //@synthesize artworkImage=_artworkImage - In the implementation block
@property (assign,nonatomic) id<MSTrackListHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SUItem * item;                                       //@synthesize item=_item - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MSTrackListHeaderDelegate>)delegate;
-(SUItem *)item;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setItem:(SUItem *)arg1 ;
-(void)setDelegate:(id<MSTrackListHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(void)dealloc;
-(void)reloadView;
-(void)_touchCaptureAction:(id)arg1 ;
-(void)_purchasesChangedNotification:(id)arg1 ;
-(void)_reloadAlbumLabel;
-(void)_reloadArtistLabel;
-(void)_reloadArtworkView;
-(void)_reloadDisclaimerLabel;
-(void)_reloadItemCountLabel;
-(void)_reloadOfferButton;
-(void)_reloadReleaseDateLabel;
-(CGSize)_sizeThatFitsLabel:(id)arg1 size:(CGSize)arg2 numberOfLines:(long long)arg3 ;
-(void)_showPurchaseConfirmation;
-(void)_hidePurchaseConfirmation;
-(void)_performPurchaseAnimation;
-(void)_setShowingPurchaseConfirmation:(BOOL)arg1 ;
-(id)_newGenericSmallFontLabel;
-(void)_offerButtonAction:(id)arg1 ;
@end

