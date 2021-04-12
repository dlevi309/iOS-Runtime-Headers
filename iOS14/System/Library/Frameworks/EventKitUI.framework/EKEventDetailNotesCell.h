/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)_layoutForWidth:(double)arg1 ;
-(id<EKEventDetailNotesCellDelegate>)noteDelegate;
-(BOOL)isTruncatingNotes;
-(BOOL)update;
-(void)layoutSubviews;
-(id)_notesView;
-(id)_notesTitleView;
-(void)setIsTruncatingNotes:(BOOL)arg1 ;
-(void)setNoteDelegate:(id<EKEventDetailNotesCellDelegate>)arg1 ;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
@end

