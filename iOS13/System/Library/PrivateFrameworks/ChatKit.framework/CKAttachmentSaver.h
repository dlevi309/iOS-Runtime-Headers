/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSMutableArray;

@interface CKAttachmentSaver : NSObject {

	unsigned long long _errorCount;
	NSMutableArray* _attachments;

}
-(void)_pop;
-(void)_saveNextAttachment;
-(void)_saveCompletionForVideoWithPath:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
-(void)popAndSaveNextAttachment;
-(void)_saveCompletionForImage:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
-(void)_saveCompletion:(id)arg1 ;
-(id)initWithAttachments:(id)arg1 ;
-(void)runToCompletion;
@end

