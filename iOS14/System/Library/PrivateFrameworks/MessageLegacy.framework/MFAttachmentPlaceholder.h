/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject {

	NSMutableDictionary* _jsonDictionary;

}
+(BOOL)isPlaceholderSerializedRepresentation:(id)arg1 ;
+(id)dataForPlaceholder:(id)arg1 ;
+(id)placeholderFromSerializedRepresentation:(id)arg1 ;
+(id)placeholder;
+(void)cloneFileAtURL:(id)arg1 toPlaceholderURL:(id)arg2 ;
+(BOOL)writeData:(id)arg1 forURL:(id)arg2 ;
+(id)placeholderDirectory;
+(id)_placeholderMagic;
+(void)removePlaceholderForFileURL:(id)arg1 ;
+(id)_localStoreURLForFileData:(id)arg1 contentID:(id)arg2 ;
+(id)attachmentPlaceholderForFileURL:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3 type:(id)arg4 contentID:(id)arg5 ;
+(id)attachmentPlaceholderForData:(id)arg1 fileName:(id)arg2 type:(id)arg3 contentID:(id)arg4 ;
+(BOOL)hasPlaceholderRepresentation:(id)arg1 ;
+(id)placeholderRepresentations:(id)arg1 ;
+(BOOL)setFileProtectionForFileAt:(id)arg1 error:(id*)arg2 ;
+(void)removePlaceholder:(id)arg1 ;
+(id)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
-(id)serializedRepresentation;
-(id)mimeType;
-(id)init;
-(void)setFileName:(id)arg1 ;
-(unsigned long long)fileSize;
-(void)setMimeType:(id)arg1 ;
-(id)fileName;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(id)fileURL;
-(id)description;
-(id)fileURLString;
-(BOOL)useMailDrop;
-(void)_setJSONDictionary:(id)arg1 ;
-(void)setFileURLString:(id)arg1 ;
-(void)setUseMailDrop:(BOOL)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
@end

