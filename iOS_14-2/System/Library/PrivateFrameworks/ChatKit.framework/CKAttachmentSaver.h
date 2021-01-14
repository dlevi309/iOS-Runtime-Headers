/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_saveCompletion:(id)arg1 ;
-(void)popAndSaveNextAttachment;
-(id)initWithAttachments:(id)arg1 ;
-(void)_saveCompletionForImage:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
-(void)runToCompletion;
@end

