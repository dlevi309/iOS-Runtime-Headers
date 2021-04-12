/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/ICLinkPresentationActivityItemSource.h>

@class ICAttachment;

@interface ICTableLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource {

	ICAttachment* _attachment;

}

@property (retain) ICAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
-(id)init;
-(id)title;
-(ICAttachment *)attachment;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(id)detail;
@end

