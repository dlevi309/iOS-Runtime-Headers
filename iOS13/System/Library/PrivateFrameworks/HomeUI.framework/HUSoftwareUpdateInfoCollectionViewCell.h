/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUSoftwareUpdateInternalResizingDelegate.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUCollectionViewCellSeparatorsProtocol.h>

@protocol HUResizableCellDelegate;
@class HUSoftwareUpdateInfoView, UIView, NSString, HFItem;

@interface HUSoftwareUpdateInfoCollectionViewCell : UICollectionViewCell <HUSoftwareUpdateInternalResizingDelegate, HUCellProtocol, HUCollectionViewCellSeparatorsProtocol> {

	id<HUResizableCellDelegate> _resizingDelegate;
	HUSoftwareUpdateInfoView* _infoView;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;

}

@property (nonatomic,readonly) HUSoftwareUpdateInfoView * infoView;                            //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,readonly) UIView * topSeparatorView;                                      //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,readonly) UIView * bottomSeparatorView;                                   //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate;              //@synthesize resizingDelegate=_resizingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item; 
@property (assign,nonatomic) BOOL topSeparatorVisible; 
@property (assign,nonatomic) BOOL bottomSeparatorVisible; 
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UIView *)topSeparatorView;
-(UIView *)bottomSeparatorView;
-(HUSoftwareUpdateInfoView *)infoView;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(id<HUResizableCellDelegate>)resizingDelegate;
-(void)setResizingDelegate:(id<HUResizableCellDelegate>)arg1 ;
-(void)setTopSeparatorVisible:(BOOL)arg1 ;
-(void)setBottomSeparatorVisible:(BOOL)arg1 ;
-(BOOL)topSeparatorVisible;
-(BOOL)bottomSeparatorVisible;
-(void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)arg1 ;
@end

