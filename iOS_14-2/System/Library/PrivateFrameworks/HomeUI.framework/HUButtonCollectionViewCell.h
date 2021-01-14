/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>
#import <libobjc.A.dylib/HUCollectionViewCellSeparatorsProtocol.h>

@class HUButtonCell, UIView, HFItem, NSString;

@interface HUButtonCollectionViewCell : UICollectionViewCell <HUCellProtocol, HUDisableableCellProtocol, HUCollectionViewCellSeparatorsProtocol> {

	HUButtonCell* _buttonView;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;

}

@property (nonatomic,readonly) UIView * topSeparatorView;                                      //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,readonly) UIView * bottomSeparatorView;                                   //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (nonatomic,readonly) HUButtonCell * buttonView;                                      //@synthesize buttonView=_buttonView - In the implementation block
@property (nonatomic,retain) HFItem * item; 
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL topSeparatorVisible; 
@property (assign,nonatomic) BOOL bottomSeparatorVisible; 
-(void)setDisabled:(BOOL)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(void)layoutSubviews;
-(UIView *)topSeparatorView;
-(UIView *)bottomSeparatorView;
-(HUButtonCell *)buttonView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTopSeparatorVisible:(BOOL)arg1 ;
-(void)setBottomSeparatorVisible:(BOOL)arg1 ;
-(BOOL)topSeparatorVisible;
-(BOOL)bottomSeparatorVisible;
@end

