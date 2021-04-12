/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


@class NSArray, BlastDoorFileTransferAttribute_ImageInfo, BlastDoorFileTransferAttributeAttachmentSubtypeWrapper, NSString, NSNumber;

@interface BlastDoorFileTransferAttribute : NSObject {

	 attachments;
	 imageInfo;
	 attachmentSubtype;
	 name;
	 datasize;
	 utiType;
	 mimeType;
	 legacyAnimoji;

}

@property (copy,nonatomic) NSArray * attachments; 
@property (retain,nonatomic) BlastDoorFileTransferAttribute_ImageInfo * imageInfo; 
@property (retain,nonatomic) BlastDoorFileTransferAttributeAttachmentSubtypeWrapper * attachmentSubtype; 
@property (copy,nonatomic) NSString * name; 
@property (assign,nonatomic) unsigned long long datasize; 
@property (copy,nonatomic) NSString * utiType; 
@property (copy,nonatomic) NSString * mimeType; 
@property (retain,nonatomic) NSNumber * legacyAnimoji; 
@property (readonly,nonatomic) NSString * description; 
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)mimeType;
-(NSArray *)attachments;
-(id)init;
-(void)setUtiType:(NSString *)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)utiType;
-(BlastDoorFileTransferAttribute_ImageInfo *)imageInfo;
-(NSString *)name;
-(void)setImageInfo:(BlastDoorFileTransferAttribute_ImageInfo *)arg1 ;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(BlastDoorFileTransferAttributeAttachmentSubtypeWrapper *)attachmentSubtype;
-(void)setAttachmentSubtype:(BlastDoorFileTransferAttributeAttachmentSubtypeWrapper *)arg1 ;
-(unsigned long long)datasize;
-(void)setDatasize:(unsigned long long)arg1 ;
-(NSNumber *)legacyAnimoji;
-(void)setLegacyAnimoji:(NSNumber *)arg1 ;
@end

