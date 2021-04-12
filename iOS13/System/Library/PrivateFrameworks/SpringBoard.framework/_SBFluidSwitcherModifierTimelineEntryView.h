/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _SBFluidSwitcherModifierTimelineEntryViewDelegate;
@class UILabel, UITapGestureRecognizer, SBSwitcherModifierTimelineEntry;

@interface _SBFluidSwitcherModifierTimelineEntryView : UIView {

	UILabel* _nameLabel;
	UILabel* _postStackLabel;
	UILabel* _actionsLabel;
	UITapGestureRecognizer* _tapRecognizer;
	SBSwitcherModifierTimelineEntry* _entry;
	id<_SBFluidSwitcherModifierTimelineEntryViewDelegate> _delegate;

}

@property (nonatomic,retain) SBSwitcherModifierTimelineEntry * entry;                                            //@synthesize entry=_entry - In the implementation block
@property (assign,nonatomic,__weak) id<_SBFluidSwitcherModifierTimelineEntryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_SBFluidSwitcherModifierTimelineEntryViewDelegate>)delegate;
-(void)setDelegate:(id<_SBFluidSwitcherModifierTimelineEntryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(SBSwitcherModifierTimelineEntry *)entry;
-(void)setEntry:(SBSwitcherModifierTimelineEntry *)arg1 ;
-(void)_tap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 entry:(id)arg2 ;
-(id)_stringForStack:(id)arg1 ;
-(id)_appendRecursiveDescriptionToString:(id)arg1 level:(unsigned long long)arg2 snapshot:(id)arg3 ;
-(id)_randomColor;
@end

