/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILayoutGuide.h>

@class NSLayoutConstraint;

@interface _UIContentConstraintsLayoutGuide : UILayoutGuide {

	BOOL _wantsMaximumSizeConstraintsActive;
	BOOL _wantsMinimumSizeConstraintsActive;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _trailingConstraint;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _maximumWidthConstraint;
	NSLayoutConstraint* _maximumHeightConstraint;
	NSLayoutConstraint* _minimumWidthConstraint;
	NSLayoutConstraint* _minimumHeightConstraint;
	CGSize _maximumSize;
	CGSize _minimumSize;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) NSLayoutConstraint * leadingConstraint;                    //@synthesize leadingConstraint=_leadingConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * trailingConstraint;                   //@synthesize trailingConstraint=_trailingConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * topConstraint;                        //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * bottomConstraint;                     //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,readonly) BOOL wantsMaximumSizeConstraintsActive;                    //@synthesize wantsMaximumSizeConstraintsActive=_wantsMaximumSizeConstraintsActive - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * maximumWidthConstraint;               //@synthesize maximumWidthConstraint=_maximumWidthConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * maximumHeightConstraint;              //@synthesize maximumHeightConstraint=_maximumHeightConstraint - In the implementation block
@property (nonatomic,readonly) BOOL wantsMinimumSizeConstraintsActive;                    //@synthesize wantsMinimumSizeConstraintsActive=_wantsMinimumSizeConstraintsActive - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * minimumWidthConstraint;               //@synthesize minimumWidthConstraint=_minimumWidthConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * minimumHeightConstraint;              //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                     //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) CGSize maximumSize;                                          //@synthesize maximumSize=_maximumSize - In the implementation block
@property (assign,nonatomic) CGSize minimumSize;                                          //@synthesize minimumSize=_minimumSize - In the implementation block
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)wantsMaximumSizeConstraintsActive;
-(NSLayoutConstraint *)leadingConstraint;
-(UIEdgeInsets)edgeInsets;
-(NSLayoutConstraint *)topConstraint;
-(void)setOwningView:(id)arg1 ;
-(id)init;
-(CGSize)maximumSize;
-(NSLayoutConstraint *)bottomConstraint;
-(void)_clearConstraints;
-(NSLayoutConstraint *)maximumHeightConstraint;
-(void)_updateAllSizeConstraints;
-(void)_setAllMarginConstraintsActive:(BOOL)arg1 ;
-(void)setMinimumSize:(CGSize)arg1 ;
-(BOOL)wantsMinimumSizeConstraintsActive;
-(CGSize)minimumSize;
-(NSLayoutConstraint *)trailingConstraint;
-(void)_setAllSizeConstraintsActive:(BOOL)arg1 ;
-(id)_allSizeConstraints;
-(void)_updateAllMarginConstraintConstants;
-(NSLayoutConstraint *)maximumWidthConstraint;
-(id)_allMarginConstraints;
-(void)setMaximumSize:(CGSize)arg1 ;
-(NSLayoutConstraint *)minimumWidthConstraint;
-(NSLayoutConstraint *)minimumHeightConstraint;
@end

