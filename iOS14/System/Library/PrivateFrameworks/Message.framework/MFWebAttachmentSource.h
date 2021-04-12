/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : NSObject {

	MFLock* _attachmentsLock;
	NSMutableDictionary* _attachmentsByURL;

}
+(id)allSources;
+(id)_setOfAllSources;
-(id)init;
-(id)attachmentForURL:(id)arg1 ;
-(BOOL)setAttachment:(id)arg1 forURL:(id)arg2 ;
-(id)description;
-(void)removeAttachmentForURL:(id)arg1 ;
-(void)dealloc;
@end

