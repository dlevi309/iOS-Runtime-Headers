/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

@class IMMessage, NSString, NSURL, NSDictionary, NSError;


@protocol CKFileTransfer <NSObject>
@property (nonatomic,retain) IMMessage * IMMessage; 
@property (nonatomic,copy,readonly) NSString * guid; 
@property (nonatomic,copy,readonly) NSURL * fileURL; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo; 
@property (nonatomic,copy,readonly) NSDictionary * stickerUserInfo; 
@property (nonatomic,copy,readonly) NSDictionary * attributionInfo; 
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long currentBytes; 
@property (nonatomic,readonly) unsigned long long totalBytes; 
@property (nonatomic,readonly) BOOL isSticker; 
@property (nonatomic,readonly) BOOL hideAttachment; 
@property (nonatomic,readonly) BOOL isDirectory; 
@property (getter=isFileURLFinalized,nonatomic,readonly) BOOL fileURLFinalized; 
@property (getter=isFileDataReady,nonatomic,readonly) BOOL fileDataReady; 
@property (getter=isDownloadable,nonatomic,readonly) BOOL downloadable; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring; 
@optional
-(id)initWithStickerFileURL:(id)arg1 transferUserInfo:(id)arg2 attributionInfo:(id)arg3;

@required
-(NSError *)error;
-(BOOL)isDirectory;
-(NSString *)filename;
-(NSURL *)fileURL;
-(BOOL)isDownloading;
-(unsigned long long)totalBytes;
-(NSString *)guid;
-(NSDictionary *)attributionInfo;
-(BOOL)isSticker;
-(NSDictionary *)stickerUserInfo;
-(NSDictionary *)transcoderUserInfo;
-(BOOL)hideAttachment;
-(unsigned long long)currentBytes;
-(BOOL)isDownloadable;
-(BOOL)isRestoring;
-(IMMessage *)IMMessage;
-(BOOL)isFileDataReady;
-(void)setIMMessage:(id)arg1;
-(id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(BOOL)arg4;
-(void)mediaObjectRemoved;
-(void)mediaObjectAdded;
-(BOOL)isFileURLFinalized;
-(void)fetchHighQualityFile:(/*^block*/id)arg1;
-(id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;

@end

