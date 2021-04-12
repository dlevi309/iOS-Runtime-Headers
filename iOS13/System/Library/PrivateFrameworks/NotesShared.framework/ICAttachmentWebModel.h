/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentWebModel : ICAttachmentModel {

	/*^block*/id _pendingFetchCompletionHandler;

}

@property (copy) id pendingFetchCompletionHandler;              //@synthesize pendingFetchCompletionHandler=_pendingFetchCompletionHandler - In the implementation block
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(BOOL)hasPreviews;
-(BOOL)showThumbnailInNoteList;
-(id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2 ;
-(BOOL)canConvertToHTMLForSharing;
-(id)pendingFetchCompletionHandler;
-(void)setPendingFetchCompletionHandler:(id)arg1 ;
@end

