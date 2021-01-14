/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/ASCOfferButtonDelegate.h>
#import <libobjc.A.dylib/ASCLockupPresenterView.h>
#import <libobjc.A.dylib/ASCOfferPresenterView.h>

@class NSString, ASCOfferTheme, ASCArtworkView, ASCSkeletonLabel, ASCOfferButton, UILabel, UIColor;

@interface ASCLockupContentView : UIControl <ASCOfferButtonDelegate, ASCLockupPresenterView, ASCOfferPresenterView> {

	NSString* _size;
	ASCOfferTheme* _offerTheme;
	ASCArtworkView* _iconArtworkView;
	ASCSkeletonLabel* _titleLabel;
	ASCSkeletonLabel* _subtitleLabel;
	ASCOfferButton* _offerButton;
	UILabel* _headingLabelIfLoaded;
	UILabel* _offerStatusLabelIfLoaded;

}

@property (nonatomic,readonly) ASCArtworkView * iconArtworkView;                //@synthesize iconArtworkView=_iconArtworkView - In the implementation block
@property (nonatomic,readonly) ASCSkeletonLabel * titleLabel;                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) ASCSkeletonLabel * subtitleLabel;                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) ASCOfferButton * offerButton;                    //@synthesize offerButton=_offerButton - In the implementation block
@property (nonatomic,readonly) UILabel * headingLabelIfLoaded;                  //@synthesize headingLabelIfLoaded=_headingLabelIfLoaded - In the implementation block
@property (nonatomic,readonly) UILabel * headingLabel; 
@property (nonatomic,readonly) UILabel * offerStatusLabelIfLoaded;              //@synthesize offerStatusLabelIfLoaded=_offerStatusLabelIfLoaded - In the implementation block
@property (nonatomic,readonly) UILabel * offerStatusLabel; 
@property (nonatomic,retain) NSString * size;                                   //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) ASCOfferTheme * offerTheme;                          //@synthesize offerTheme=_offerTheme - In the implementation block
@property (nonatomic,copy) UIColor * loadingColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize preferredIconSize; 
-(ASCSkeletonLabel *)titleLabel;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setLoading:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredIconSize;
-(NSString *)size;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setOfferTheme:(ASCOfferTheme *)arg1 ;
-(void)setSize:(NSString *)arg1 ;
-(ASCSkeletonLabel *)subtitleLabel;
-(NSString *)description;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHeading:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setPrefersRightToLeftLayout:(BOOL)arg1 ;
-(void)setIconImage:(id)arg1 withDecoration:(id)arg2 ;
-(UILabel *)headingLabelIfLoaded;
-(UILabel *)offerStatusLabelIfLoaded;
-(ASCOfferButton *)offerButton;
-(void)setOfferEnabled:(BOOL)arg1 ;
-(void)setOfferStatus:(id)arg1 ;
-(void)setOfferInteractive:(BOOL)arg1 ;
-(void)setOfferMetadata:(id)arg1 ;
-(void)endOfferModalState;
-(id)saveOfferState;
-(void)beginOfferModalStateWithCancelBlock:(/*^block*/id)arg1 ;
-(void)offerButton:(id)arg1 willTransitionToMetadata:(id)arg2 usingAnimator:(id)arg3 ;
-(id)makeLayout;
-(void)addOfferTarget:(id)arg1 action:(SEL)arg2 ;
-(ASCOfferTheme *)offerTheme;
-(ASCArtworkView *)iconArtworkView;
-(UILabel *)headingLabel;
-(UILabel *)offerStatusLabel;
-(UIColor *)loadingColor;
-(void)setLoadingColor:(UIColor *)arg1 ;
-(void)removeOfferTarget:(id)arg1 action:(SEL)arg2 ;
@end

