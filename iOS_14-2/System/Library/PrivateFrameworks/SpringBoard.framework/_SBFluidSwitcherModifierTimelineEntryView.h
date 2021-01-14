/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_tap:(id)arg1 ;
-(id<_SBFluidSwitcherModifierTimelineEntryViewDelegate>)delegate;
-(SBSwitcherModifierTimelineEntry *)entry;
-(void)setDelegate:(id<_SBFluidSwitcherModifierTimelineEntryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setEntry:(SBSwitcherModifierTimelineEntry *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 entry:(id)arg2 ;
-(id)_stringForStack:(id)arg1 ;
-(id)_appendRecursiveDescriptionToString:(id)arg1 level:(unsigned long long)arg2 snapshot:(id)arg3 ;
-(id)_randomColor;
@end

