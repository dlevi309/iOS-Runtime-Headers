/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUCollectionViewCellSeparatorsProtocol.h>

@class HULinkedApplicationView, UIView, HFItem, NSString;

@interface HULinkedApplicationCollectionViewCell : UICollectionViewCell <HUCellProtocol, HUCollectionViewCellSeparatorsProtocol> {

	HULinkedApplicationView* _linkedApplicationView;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;

}

@property (nonatomic,readonly) HULinkedApplicationView * linkedApplicationView;                //@synthesize linkedApplicationView=_linkedApplicationView - In the implementation block
@property (nonatomic,readonly) UIView * topSeparatorView;                                      //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,readonly) UIView * bottomSeparatorView;                                   //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (nonatomic,retain) HFItem * item; 
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL topSeparatorVisible; 
@property (assign,nonatomic) BOOL bottomSeparatorVisible; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(void)layoutSubviews;
-(UIView *)topSeparatorView;
-(UIView *)bottomSeparatorView;
-(HULinkedApplicationView *)linkedApplicationView;
-(void)setTopSeparatorVisible:(BOOL)arg1 ;
-(void)setBottomSeparatorVisible:(BOOL)arg1 ;
-(BOOL)topSeparatorVisible;
-(BOOL)bottomSeparatorVisible;
@end

