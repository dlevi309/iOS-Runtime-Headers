/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKHeaderWithUnderlineView.h>

@class UISegmentedControl, NSLayoutConstraint;

@interface GKSegmentedSelectorView : GKHeaderWithUnderlineView {

	UISegmentedControl* _segmentedControl;
	id _target;
	NSLayoutConstraint* _widthConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;               //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic) id target;                                          //@synthesize target=_target - In the implementation block
-(void)setTarget:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(NSLayoutConstraint *)widthConstraint;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)pinningStateChangedTo:(BOOL)arg1 ;
-(id)target;
-(BOOL)drawsUnderline;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)dealloc;
@end

