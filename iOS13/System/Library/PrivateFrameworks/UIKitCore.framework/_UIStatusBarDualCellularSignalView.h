/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class _UIStatusBarCellularSignalView, NSLayoutConstraint, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarDualCellularSignalView : UIView <_UIStatusBarDisplayable> {

	_UIStatusBarCellularSignalView* _topSignalView;
	_UIStatusBarCellularSignalView* _bottomSignalView;
	long long _iconSize;
	NSLayoutConstraint* _verticalInterspaceConstraint;
	UIEdgeInsets _alignmentRectInsets;

}

@property (assign,nonatomic) long long iconSize;                                                     //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalInterspaceConstraint;                      //@synthesize verticalInterspaceConstraint=_verticalInterspaceConstraint - In the implementation block
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;                                       //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (readonly) _UIStatusBarCellularSignalView * topSignalView;                                 //@synthesize topSignalView=_topSignalView - In the implementation block
@property (readonly) _UIStatusBarCellularSignalView * bottomSignalView;                              //@synthesize bottomSignalView=_bottomSignalView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
+(double)_interspaceForIconSize:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(id)viewForLastBaselineLayout;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(_UIStatusBarCellularSignalView *)topSignalView;
-(_UIStatusBarCellularSignalView *)bottomSignalView;
-(long long)iconSize;
-(void)setIconSize:(long long)arg1 ;
-(void)_iconSizeDidChange;
-(NSLayoutConstraint *)verticalInterspaceConstraint;
-(void)setVerticalInterspaceConstraint:(NSLayoutConstraint *)arg1 ;
@end

