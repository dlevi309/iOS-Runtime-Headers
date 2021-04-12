/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class MFMailMessage;

@interface _MFMailComposeAttachmentLoader : NSObject {

	MFMailMessage* _message;
	id _content;
	BOOL _isDraft;
	BOOL _didLoadBestAlternative;
	/*^block*/id _completionBlock;

}
-(id)initWithMessage:(id)arg1 content:(id)arg2 isDraft:(BOOL)arg3 didLoadBestAlternative:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)loadAttachments;
@end

