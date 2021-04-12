/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


@class NSString, NSURL;

@interface BlastDoorFileTransferAttribute_AttachmentInfo : NSObject {


}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSURL * attachmentURL; 
@property (readonly,nonatomic) NSString * signature; 
@property (readonly,nonatomic) NSString * ownerID; 
@property (readonly,nonatomic) unsigned long long expectedFileSize; 
@property (readonly,nonatomic) NSString * encryptionKey; 
-(NSString *)encryptionKey;
-(NSString *)signature;
-(id)init;
-(NSString *)ownerID;
-(NSString *)description;
-(NSURL *)attachmentURL;
-(unsigned long long)expectedFileSize;
@end

