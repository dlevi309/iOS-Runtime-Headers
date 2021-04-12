/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/ICLinkPresentationActivityItemSource.h>

@protocol ICSearchIndexableNote;
@interface ICNoteLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource {

	id<ICSearchIndexableNote> _note;

}

@property (retain) id<ICSearchIndexableNote> note;              //@synthesize note=_note - In the implementation block
-(id)init;
-(id)title;
-(id)detail;
-(id<ICSearchIndexableNote>)note;
-(void)setNote:(id<ICSearchIndexableNote>)arg1 ;
-(id)initWithNote:(id)arg1 ;
@end

