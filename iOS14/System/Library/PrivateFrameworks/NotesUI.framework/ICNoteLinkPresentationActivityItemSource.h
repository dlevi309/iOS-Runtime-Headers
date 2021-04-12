/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/ICLinkPresentationActivityItemSource.h>

@protocol ICSearchIndexableNote;
@class UIImage;

@interface ICNoteLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource {

	id<ICSearchIndexableNote> _note;
	UIImage* _thumbnailImage;

}

@property (retain) id<ICSearchIndexableNote> note;                  //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
-(id)detail;
-(id)init;
-(id)iconImage;
-(void)setNote:(id<ICSearchIndexableNote>)arg1 ;
-(id<ICSearchIndexableNote>)note;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(id)title;
-(id)initWithNote:(id)arg1 ;
-(id)initWithNote:(id)arg1 thumbnailImage:(id)arg2 ;
@end

