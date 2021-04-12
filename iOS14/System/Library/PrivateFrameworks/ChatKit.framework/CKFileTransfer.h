/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isRestoring;
-(NSString *)guid;
-(IMMessage *)IMMessage;
-(void)mediaObjectRemoved;
-(void)mediaObjectAdded;
-(NSDictionary *)transcoderUserInfo;
-(BOOL)isFileURLFinalized;
-(void)fetchHighQualityFile:(/*^block*/id)arg1;
-(unsigned long long)totalBytes;
-(id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;
-(unsigned long long)currentBytes;
-(BOOL)hideAttachment;
-(NSString *)filename;
-(BOOL)isFileDataReady;
-(BOOL)isSticker;
-(NSError *)error;
-(void)setIMMessage:(id)arg1;
-(NSURL *)fileURL;
-(BOOL)isDownloadable;
-(id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(BOOL)arg4;
-(NSDictionary *)attributionInfo;
-(NSDictionary *)stickerUserInfo;
-(BOOL)isDownloading;
-(BOOL)isDirectory;

@end

