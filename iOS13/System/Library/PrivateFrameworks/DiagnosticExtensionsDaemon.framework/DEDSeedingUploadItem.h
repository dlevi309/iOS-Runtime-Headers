/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <DiagnosticExtensionsDaemon/DEDAttachmentItem.h>

@class NSString, NSURLSessionUploadTask;

@interface DEDSeedingUploadItem : DEDAttachmentItem {

	BOOL _completed;
	NSString* _extensionID;
	unsigned long long _bytesUploaded;
	NSURLSessionUploadTask* _uploadTask;

}

@property (retain) NSString * extensionID;                           //@synthesize extensionID=_extensionID - In the implementation block
@property (assign) unsigned long long bytesUploaded;                 //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) BOOL completed;                                   //@synthesize completed=_completed - In the implementation block
@property (retain) NSURLSessionUploadTask * uploadTask;              //@synthesize uploadTask=_uploadTask - In the implementation block
+(id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3 ;
-(id)description;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(unsigned long long)bytesUploaded;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(NSString *)extensionID;
-(void)setExtensionID:(NSString *)arg1 ;
-(id)publicDescription;
-(void)setUploadTask:(NSURLSessionUploadTask *)arg1 ;
-(id)promiseFilename;
-(NSURLSessionUploadTask *)uploadTask;
@end

