/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <DiagnosticExtensionsDaemon/DEDAttachmentItem.h>

@class NSString, NSURLSessionUploadTask;

@interface DEDSeedingUploadItem : DEDAttachmentItem {

	BOOL _completed;
	NSString* _extensionID;
	NSString* _filePromiseUUID;
	long long _bytesUploaded;
	long long _totalBytesExpectedToSend;
	NSURLSessionUploadTask* _uploadTask;

}

@property (retain) NSString * extensionID;                           //@synthesize extensionID=_extensionID - In the implementation block
@property (retain) NSString * filePromiseUUID;                       //@synthesize filePromiseUUID=_filePromiseUUID - In the implementation block
@property (assign) long long bytesUploaded;                          //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) long long totalBytesExpectedToSend;               //@synthesize totalBytesExpectedToSend=_totalBytesExpectedToSend - In the implementation block
@property (assign) BOOL completed;                                   //@synthesize completed=_completed - In the implementation block
@property (retain) NSURLSessionUploadTask * uploadTask;              //@synthesize uploadTask=_uploadTask - In the implementation block
+(id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3 ;
-(id)publicDescription;
-(BOOL)completed;
-(void)setExtensionID:(NSString *)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(long long)bytesUploaded;
-(NSString *)extensionID;
-(void)setBytesUploaded:(long long)arg1 ;
-(void)setTotalBytesExpectedToSend:(long long)arg1 ;
-(long long)totalBytesExpectedToSend;
-(void)setUploadTask:(NSURLSessionUploadTask *)arg1 ;
-(id)promiseFilename;
-(void)setFilePromiseUUID:(NSString *)arg1 ;
-(NSURLSessionUploadTask *)uploadTask;
-(NSString *)filePromiseUUID;
@end

