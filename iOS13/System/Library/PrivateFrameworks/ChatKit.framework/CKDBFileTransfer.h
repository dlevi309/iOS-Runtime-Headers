/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKFileTransfer.h>

@class NSString, NSURL, NSDictionary, IMMessage, NSError;

@interface CKDBFileTransfer : NSObject <CKFileTransfer> {

	BOOL _isSticker;
	BOOL _hideAttachment;
	BOOL _isDirectory;
	NSString* _guid;
	NSURL* _fileURL;
	NSDictionary* _transcoderUserInfo;
	NSDictionary* _stickerUserInfo;
	NSString* _filename;
	long long _transferState;
	NSDictionary* _attributionInfo;

}

@property (nonatomic,copy) NSString * filename;                                              //@synthesize filename=_filename - In the implementation block
@property (assign,nonatomic) long long transferState;                                        //@synthesize transferState=_transferState - In the implementation block
@property (nonatomic,copy) NSDictionary * attributionInfo;                                   //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IMMessage * IMMessage; 
@property (nonatomic,copy,readonly) NSString * guid;                                         //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo;                       //@synthesize transcoderUserInfo=_transcoderUserInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stickerUserInfo;                          //@synthesize stickerUserInfo=_stickerUserInfo - In the implementation block
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long currentBytes; 
@property (nonatomic,readonly) unsigned long long totalBytes; 
@property (nonatomic,readonly) BOOL isSticker;                                               //@synthesize isSticker=_isSticker - In the implementation block
@property (nonatomic,readonly) BOOL hideAttachment;                                          //@synthesize hideAttachment=_hideAttachment - In the implementation block
@property (nonatomic,readonly) BOOL isDirectory;                                             //@synthesize isDirectory=_isDirectory - In the implementation block
@property (getter=isFileURLFinalized,nonatomic,readonly) BOOL fileURLFinalized; 
@property (getter=isFileDataReady,nonatomic,readonly) BOOL fileDataReady; 
@property (getter=isDownloadable,nonatomic,readonly) BOOL downloadable; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring; 
-(NSString *)description;
-(NSError *)error;
-(BOOL)isDirectory;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(BOOL)isDownloading;
-(unsigned long long)totalBytes;
-(NSString *)guid;
-(NSDictionary *)attributionInfo;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(BOOL)isSticker;
-(long long)transferState;
-(NSDictionary *)stickerUserInfo;
-(NSDictionary *)transcoderUserInfo;
-(BOOL)hideAttachment;
-(unsigned long long)currentBytes;
-(void)setTransferState:(long long)arg1 ;
-(BOOL)isDownloadable;
-(BOOL)isRestoring;
-(BOOL)isFileDataReady;
-(id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(BOOL)arg4 ;
-(void)mediaObjectRemoved;
-(void)mediaObjectAdded;
-(BOOL)isFileURLFinalized;
-(void)fetchHighQualityFile:(/*^block*/id)arg1 ;
-(id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2 ;
@end

