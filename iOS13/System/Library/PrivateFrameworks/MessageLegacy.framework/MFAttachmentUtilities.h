/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
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

