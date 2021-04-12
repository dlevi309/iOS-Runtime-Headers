/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@interface MFAttachmentUtilities : NSObject
+(id)temporaryDirectory;
+(id)writeData:(id)arg1 toTemporaryFileURLWithFileName:(id)arg2 ;
+(id)makeAttachmentPlaceholder:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
+(id)securityScopeForFileURL:(id)arg1 ;
+(id)_temporaryDirectoryUniqueURL;
+(id)temporaryFileURLWithExtension:(id)arg1 ;
+(id)mimeTypeForFileName:(id)arg1 ;
+(BOOL)shouldCreatePlaceholderAttachmentForAttachmentWithSize:(long long)arg1 ;
@end

