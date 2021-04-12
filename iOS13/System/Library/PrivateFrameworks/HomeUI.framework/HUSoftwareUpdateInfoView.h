/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/HUInlineWebContainerViewDelegate.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@protocol HUSoftwareUpdateInternalResizingDelegate;
@class HFItem, HUSoftwareUpdateAnimatedIcon, UIImage, UIImageView, UIStackView, UILabel, HUInlineWebContainerView, NSLayoutConstraint, NSString;

@interface HUSoftwareUpdateInfoView : UIView <UIScrollViewDelegate, HUInlineWebContainerViewDelegate, HUCellProtocol> {

	HFItem* _item;
	id<HUSoftwareUpdateInternalResizingDelegate> _internalViewResizingDelegate;
	HUSoftwareUpdateAnimatedIcon* _animatedGearView;
	UIImage* _gearBackgroundImage;
	UIImageView* _gearBackgroundImageView;
	UIStackView* _labelStackView;
	UILabel* _updateNameLabel;
	UILabel* _publisherNameLabel;
	UILabel* _sizeLabel;
	HUInlineWebContainerView* _releaseNotesSummaryView;
	NSLayoutConstraint* _releaseNotesSummaryHeightConstraint;

}

@property (assign,nonatomic,__weak) id<HUSoftwareUpdateInternalResizingDelegate> internalViewResizingDelegate;              //@synthesize internalViewResizingDelegate=_internalViewResizingDelegate - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateAnimatedIcon * animatedGearView;                                               //@synthesize animatedGearView=_animatedGearView - In the implementation block
@property (nonatomic,retain) UIImage * gearBackgroundImage;                                                                 //@synthesize gearBackgroundImage=_gearBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImageView * gearBackgroundImageView;                                                         //@synthesize gearBackgroundImageView=_gearBackgroundImageView - In the implementation block
@property (nonatomic,retain) UIStackView * labelStackView;                                                                  //@synthesize labelStackView=_labelStackView - In the implementation block
@property (nonatomic,retain) UILabel * updateNameLabel;                                                                     //@synthesize updateNameLabel=_updateNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * publisherNameLabel;                                                                  //@synthesize publisherNameLabel=_publisherNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * sizeLabel;                                                                           //@synthesize sizeLabel=_sizeLabel - In the implementation block
@property (nonatomic,retain) HUInlineWebContainerView * releaseNotesSummaryView;                                            //@synthesize releaseNotesSummaryView=_releaseNotesSummaryView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * releaseNotesSummaryHeightConstraint;                                      //@synthesize releaseNotesSummaryHeightConstraint=_releaseNotesSummaryHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                                                 //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLabelStackView:(UIStackView *)arg1 ;
-(UIStackView *)labelStackView;
-(UIImage *)gearBackgroundImage;
-(UIImageView *)gearBackgroundImageView;
-(void)setGearBackgroundImageView:(UIImageView *)arg1 ;
-(HUInlineWebContainerView *)releaseNotesSummaryView;
-(void)setSizeLabel:(UILabel *)arg1 ;
-(UILabel *)sizeLabel;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setAnimatedGearView:(HUSoftwareUpdateAnimatedIcon *)arg1 ;
-(HUSoftwareUpdateAnimatedIcon *)animatedGearView;
-(void)setUpdateNameLabel:(UILabel *)arg1 ;
-(UILabel *)updateNameLabel;
-(void)setPublisherNameLabel:(UILabel *)arg1 ;
-(UILabel *)publisherNameLabel;
-(void)setReleaseNotesSummaryView:(HUInlineWebContainerView *)arg1 ;
-(void)setReleaseNotesSummaryHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)releaseNotesSummaryHeightConstraint;
-(id<HUSoftwareUpdateInternalResizingDelegate>)internalViewResizingDelegate;
-(void)_updateReleaseNotesHeightIfNeeded;
-(void)inlineWebContainerViewDidFinishLoadingContent:(id)arg1 ;
-(void)setInternalViewResizingDelegate:(id<HUSoftwareUpdateInternalResizingDelegate>)arg1 ;
-(void)setGearBackgroundImage:(UIImage *)arg1 ;
@end

