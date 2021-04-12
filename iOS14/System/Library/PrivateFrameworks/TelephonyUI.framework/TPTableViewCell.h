/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView, NSLayoutConstraint, UIColor;

@interface TPTableViewCell : UITableViewCell {

	BOOL _accessiblityConstraintsEnabled;
	BOOL _constraintsLoaded;
	BOOL _foregroundViewLoaded;
	UIView* _foregroundView;
	NSLayoutConstraint* _foregroundViewLeadingAnchorLayoutConstraint;
	NSLayoutConstraint* _foregroundViewTrailingAnchorLayoutConstraint;
	NSLayoutConstraint* _foregroundViewTopAnchorLayoutConstraint;
	NSLayoutConstraint* _foregroundViewBottomAnchorLayoutConstraint;

}

@property (assign,getter=isAccessiblityConstraintsEnabled,nonatomic) BOOL accessiblityConstraintsEnabled;              //@synthesize accessiblityConstraintsEnabled=_accessiblityConstraintsEnabled - In the implementation block
@property (assign,getter=isConstraintsLoaded,nonatomic) BOOL constraintsLoaded;                                        //@synthesize constraintsLoaded=_constraintsLoaded - In the implementation block
@property (assign,getter=isForegroundViewLoaded,nonatomic) BOOL foregroundViewLoaded;                                  //@synthesize foregroundViewLoaded=_foregroundViewLoaded - In the implementation block
@property (nonatomic,retain) UIView * foregroundView;                                                                  //@synthesize foregroundView=_foregroundView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * foregroundViewLeadingAnchorLayoutConstraint;                       //@synthesize foregroundViewLeadingAnchorLayoutConstraint=_foregroundViewLeadingAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * foregroundViewTrailingAnchorLayoutConstraint;                      //@synthesize foregroundViewTrailingAnchorLayoutConstraint=_foregroundViewTrailingAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * foregroundViewTopAnchorLayoutConstraint;                           //@synthesize foregroundViewTopAnchorLayoutConstraint=_foregroundViewTopAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * foregroundViewBottomAnchorLayoutConstraint;                        //@synthesize foregroundViewBottomAnchorLayoutConstraint=_foregroundViewBottomAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor; 
@property (nonatomic,readonly) UIEdgeInsets intrinsicSeparatorInset; 
+(UIEdgeInsets)separatorInsetForContentSizeCategory:(id)arg1 ;
+(BOOL)requiresConstraintBasedLayout;
-(void)loadConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(id)init;
-(UIColor *)foregroundColor;
-(void)setForegroundViewLoaded:(BOOL)arg1 ;
-(UIView *)foregroundView;
-(void)loadContentView;
-(NSLayoutConstraint *)foregroundViewTopAnchorLayoutConstraint;
-(void)updateConstraintsConstants;
-(NSLayoutConstraint *)foregroundViewBottomAnchorLayoutConstraint;
-(void)commonInit;
-(NSLayoutConstraint *)foregroundViewTrailingAnchorLayoutConstraint;
-(BOOL)isAccessiblityConstraintsEnabled;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setForegroundView:(UIView *)arg1 ;
-(void)updateFonts;
-(void)setAccessiblityConstraintsEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)intrinsicSeparatorInset;
-(BOOL)isForegroundViewLoaded;
-(BOOL)isConstraintsLoaded;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSLayoutConstraint *)foregroundViewLeadingAnchorLayoutConstraint;
-(void)setConstraintsLoaded:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)unloadConstraints;
@end

