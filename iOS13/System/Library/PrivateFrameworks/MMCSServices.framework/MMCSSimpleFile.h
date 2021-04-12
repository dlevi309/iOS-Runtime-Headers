/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
*/


@class NSString, NSURL, NSData, NSError;

@interface MMCSSimpleFile : NSObject {

	int _fd;
	double _progress;
	NSString* _authToken;
	long long _encryptionBehavior;
	NSString* _localPath;
	NSURL* _requestURL;
	NSString* _requestorID;
	NSString* _guid;
	unsigned long long _itemID;
	NSData* _signature;
	NSData* _fileHash;
	unsigned long long _protocolFileSize;
	NSError* _mmcsError;
	NSData* _authResponseData;

}

@property (retain) NSString * guid;                                       //@synthesize guid=_guid - In the implementation block
@property (assign) unsigned long long itemID;                             //@synthesize itemID=_itemID - In the implementation block
@property (retain) NSURL * requestURL;                                    //@synthesize requestURL=_requestURL - In the implementation block
@property (retain) NSString * requestorID;                                //@synthesize requestorID=_requestorID - In the implementation block
@property (retain) NSData * signature;                                    //@synthesize signature=_signature - In the implementation block
@property (retain) NSString * authToken;                                  //@synthesize authToken=_authToken - In the implementation block
@property (retain) NSString * localPath;                                  //@synthesize localPath=_localPath - In the implementation block
@property (assign) int fd;                                                //@synthesize fd=_fd - In the implementation block
@property (retain) NSData * fileHash;                                     //@synthesize fileHash=_fileHash - In the implementation block
@property (assign) unsigned long long protocolFileSize;                   //@synthesize protocolFileSize=_protocolFileSize - In the implementation block
@property (assign) double progress;                                       //@synthesize progress=_progress - In the implementation block
@property (setter=setMMCSError:,retain) NSError * mmcsError;              //@synthesize mmcsError=_mmcsError - In the implementation block
@property (assign) long long encryptionBehavior;                          //@synthesize encryptionBehavior=_encryptionBehavior - In the implementation block
@property (retain) NSData * authResponseData;                             //@synthesize authResponseData=_authResponseData - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(double)progress;
-(unsigned long long)itemID;
-(void)setItemID:(unsigned long long)arg1 ;
-(NSData *)signature;
-(int)fd;
-(void)setProgress:(double)arg1 ;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(NSString *)localPath;
-(void)setFileHash:(NSData *)arg1 ;
-(NSData *)fileHash;
-(void)setRequestURL:(NSURL *)arg1 ;
-(NSURL *)requestURL;
-(void)setFd:(int)arg1 ;
-(void)setMMCSError:(id)arg1 ;
-(unsigned long long)protocolFileSize;
-(void)setProtocolFileSize:(unsigned long long)arg1 ;
-(void)setLocalPath:(NSString *)arg1 ;
-(void)setEncryptionBehavior:(long long)arg1 ;
-(NSError *)mmcsError;
-(NSString *)requestorID;
-(void)setAuthResponseData:(NSData *)arg1 ;
-(NSData *)authResponseData;
-(void)setRequestorID:(NSString *)arg1 ;
-(long long)encryptionBehavior;
@end

