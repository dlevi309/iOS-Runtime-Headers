/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

