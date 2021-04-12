/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventDetailCell.h>

@protocol EKEventDetailNotesCellDelegate;
@class UILabel, UITextView;

@interface EKEventDetailNotesCell : EKEventDetailCell {

	UILabel* _notesTitleView;
	UITextView* _notesView;
	BOOL _isTruncatingNotes;
	id<EKEventDetailNotesCellDelegate> _noteDelegate;

}

@property (nonatomic,readonly) BOOL isTruncatingNotes;                                            //@synthesize isTruncatingNotes=_isTruncatingNotes - In the implementation block
@property (assign,nonatomic,__weak) id<EKEventDetailNotesCellDelegate> noteDelegate;              //@synthesize noteDelegate=_noteDelegate - In the implementation block
-(BOOL)update;
-(void)layoutSubviews;
-(BOOL)isTruncatingNotes;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id<EKEventDetailNotesCellDelegate>)noteDelegate;
-(void)setNoteDelegate:(id<EKEventDetailNotesCellDelegate>)arg1 ;
-(double)_layoutForWidth:(double)arg1 ;
-(id)_notesView;
-(id)_notesTitleView;
-(void)setIsTruncatingNotes:(BOOL)arg1 ;
@end

