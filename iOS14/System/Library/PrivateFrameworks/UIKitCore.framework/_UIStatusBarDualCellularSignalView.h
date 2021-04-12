/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class _UIStatusBarCellularSignalView, NSLayoutConstraint, UIAccessibilityHUDItem, NSString;

@interface _UIStatusBarDualCellularSignalView : UIView <_UIStatusBarDisplayable> {

	_UIStatusBarCellularSignalView* _topSignalView;
	_UIStatusBarCellularSignalView* _bottomSignalView;
	long long _iconSize;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _verticalInterspaceConstraint;
	UIEdgeInsets _alignmentRectInsets;

}

@property (assign,nonatomic) long long iconSize;                                                     //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                                     //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalInterspaceConstraint;                      //@synthesize verticalInterspaceConstraint=_verticalInterspaceConstraint - In the implementation block
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;                                       //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (readonly) _UIStatusBarCellularSignalView * topSignalView;                                 //@synthesize topSignalView=_topSignalView - In the implementation block
@property (readonly) _UIStatusBarCellularSignalView * bottomSignalView;                              //@synthesize bottomSignalView=_bottomSignalView - In the implementation block
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_interspaceForIconSize:(long long)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSLayoutConstraint *)topConstraint;
-(UIEdgeInsets)alignmentRectInsets;
-(void)_iconSizeDidChange;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(_UIStatusBarCellularSignalView *)bottomSignalView;
-(long long)iconSize;
-(void)setVerticalInterspaceConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)verticalInterspaceConstraint;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)setIconSize:(long long)arg1 ;
-(_UIStatusBarCellularSignalView *)topSignalView;
@end

