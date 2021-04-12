/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/

#import <AppleServiceToolkit/ASTMaterializedConnection.h>
#import <libobjc.A.dylib/ASTUploadConnection.h>
#import <libobjc.A.dylib/ASTTestResultHandling.h>

@class NSURL, NSNumber, ASTSealableFile, NSString, NSMutableURLRequest;

@interface ASTConnectionTestResultBinary : ASTMaterializedConnection <ASTUploadConnection, ASTTestResultHandling> {

	NSNumber* _testId;
	NSURL* _fileSteamLocationURL;
	ASTSealableFile* _sealableFile;
	NSString* _dataId;

}

@property (nonatomic,retain) ASTSealableFile * sealableFile;                               //@synthesize sealableFile=_sealableFile - In the implementation block
@property (nonatomic,retain) NSString * dataId;                                            //@synthesize dataId=_dataId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id didReceiveResponse; 
@property (nonatomic,readonly) NSMutableURLRequest * request; 
@property (assign,nonatomic,__weak) id<ASTConnectionStatusDelegate> delegate; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) long long networkDisconnectedRetryCount; 
@property (assign,nonatomic) BOOL retryOnNetworkDisconnected; 
@property (nonatomic,readonly) unsigned long long rootOfTrust; 
@property (nonatomic,readonly) NSURL * fileSteamLocationURL;                               //@synthesize fileSteamLocationURL=_fileSteamLocationURL - In the implementation block
@property (nonatomic,readonly) NSNumber * testId;                                          //@synthesize testId=_testId - In the implementation block
-(id)endpoint;
-(id)contentType;
-(NSURL *)fileSteamLocationURL;
-(NSNumber *)testId;
-(id)initWithSealableFile:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testId:(id)arg4 dataId:(id)arg5 ;
-(ASTSealableFile *)sealableFile;
-(NSString *)dataId;
-(void)setSealableFile:(ASTSealableFile *)arg1 ;
-(void)setDataId:(NSString *)arg1 ;
@end

