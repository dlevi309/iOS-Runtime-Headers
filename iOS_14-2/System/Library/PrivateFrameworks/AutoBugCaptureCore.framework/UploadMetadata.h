/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@class NSURL, NSString;

@interface UploadMetadata : NSObject {

	BOOL _uploaded;
	short _taskState;
	short _observedPrimaryInterfaceOnCompletion;
	NSURL* _fileURL;
	unsigned long long _retryCount;
	unsigned long long _fileSize;
	unsigned long long _httpStatusCode;
	NSString* _errorDomain;
	long long _errorCode;

}

@property (nonatomic,retain) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) BOOL uploaded;                                           //@synthesize uploaded=_uploaded - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                           //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                             //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) unsigned long long httpStatusCode;                       //@synthesize httpStatusCode=_httpStatusCode - In the implementation block
@property (nonatomic,retain) NSString * errorDomain;                                  //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) long long errorCode;                                     //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) short taskState;                                         //@synthesize taskState=_taskState - In the implementation block
@property (assign,nonatomic) short observedPrimaryInterfaceOnCompletion;              //@synthesize observedPrimaryInterfaceOnCompletion=_observedPrimaryInterfaceOnCompletion - In the implementation block
-(void)setFileURL:(NSURL *)arg1 ;
-(unsigned long long)httpStatusCode;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(void)setUploaded:(BOOL)arg1 ;
-(unsigned long long)retryCount;
-(id)init;
-(void)setTaskState:(short)arg1 ;
-(NSString *)errorDomain;
-(void)setHttpStatusCode:(unsigned long long)arg1 ;
-(unsigned long long)fileSize;
-(short)taskState;
-(id)debugDescription;
-(long long)errorCode;
-(NSURL *)fileURL;
-(id)description;
-(BOOL)uploaded;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setObservedPrimaryInterfaceOnCompletion:(short)arg1 ;
-(short)observedPrimaryInterfaceOnCompletion;
@end

