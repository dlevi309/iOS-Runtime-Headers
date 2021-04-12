/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKitCore/UIView.h>

@class UIView, NSLayoutConstraint;

@interface ICCollapsibleBaseView : UIView {

	BOOL _collapsed;
	BOOL _setupComplete;
	double _leadingSpace;
	double _trailingSpace;
	UIView* _contentView;
	NSLayoutConstraint* _zeroWidthConstraint;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _trailingConstraint;

}

@property (nonatomic,retain) UIView * contentView;                                  //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * zeroWidthConstraint;              //@synthesize zeroWidthConstraint=_zeroWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingConstraint;                //@synthesize leadingConstraint=_leadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingConstraint;               //@synthesize trailingConstraint=_trailingConstraint - In the implementation block
@property (assign,nonatomic) BOOL setupComplete;                                    //@synthesize setupComplete=_setupComplete - In the implementation block
@property (assign,nonatomic) double leadingSpace;                                   //@synthesize leadingSpace=_leadingSpace - In the implementation block
@property (assign,nonatomic) double trailingSpace;                                  //@synthesize trailingSpace=_trailingSpace - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                     //@synthesize collapsed=_collapsed - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(NSLayoutConstraint *)leadingConstraint;
-(NSLayoutConstraint *)trailingConstraint;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)awakeFromNib;
-(BOOL)setupComplete;
-(void)setSetupComplete:(BOOL)arg1 ;
-(void)performSetUpWithContentView:(id)arg1 ;
-(void)performSetup;
-(void)setLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(double)leadingSpace;
-(void)setLeadingSpace:(double)arg1 ;
-(double)trailingSpace;
-(void)setTrailingSpace:(double)arg1 ;
-(void)setUpIfNeeded;
-(NSLayoutConstraint *)zeroWidthConstraint;
-(void)ic_setNeedsUpdateConstraints;
-(BOOL)wantsLayer;
-(void)setZeroWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

