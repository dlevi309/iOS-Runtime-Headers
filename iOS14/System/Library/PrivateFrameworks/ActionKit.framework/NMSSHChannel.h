/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol NMSSHChannelDelegate, OS_dispatch_source;
#import <ActionKit/ActionKit-Structs.h>
@class NMSSHSession, NSData, NSDictionary, NSObject;

@interface NMSSHChannel : NSObject {

	BOOL _requestPty;
	NMSSHSession* _session;
	unsigned long long _bufferSize;
	id<NMSSHChannelDelegate> _delegate;
	long long _type;
	NSData* _lastResponse;
	long long _ptyTerminalType;
	NSDictionary* _environmentVariables;
	LIBSSH2_CHANNELRef _channel;
	const char* _ptyTerminalName;
	NSObject*<OS_dispatch_source> _source;

}

@property (nonatomic,retain) NMSSHSession * session;                                //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) LIBSSH2_CHANNELRef channel;                            //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) long long type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) const char* ptyTerminalName;                           //@synthesize ptyTerminalName=_ptyTerminalName - In the implementation block
@property (nonatomic,retain) NSData * lastResponse;                                 //@synthesize lastResponse=_lastResponse - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> source;                  //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long bufferSize;                         //@synthesize bufferSize=_bufferSize - In the implementation block
@property (assign,nonatomic,__weak) id<NMSSHChannelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL requestPty;                                       //@synthesize requestPty=_requestPty - In the implementation block
@property (assign,nonatomic) long long ptyTerminalType;                             //@synthesize ptyTerminalType=_ptyTerminalType - In the implementation block
@property (nonatomic,retain) NSDictionary * environmentVariables;                   //@synthesize environmentVariables=_environmentVariables - In the implementation block
-(id)initWithSession:(id)arg1 ;
-(id<NMSSHChannelDelegate>)delegate;
-(NSDictionary *)environmentVariables;
-(void)setChannel:(LIBSSH2_CHANNELRef)arg1 ;
-(void)setType:(long long)arg1 ;
-(NMSSHSession *)session;
-(NSData *)lastResponse;
-(unsigned long long)bufferSize;
-(LIBSSH2_CHANNELRef)channel;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setDelegate:(id<NMSSHChannelDelegate>)arg1 ;
-(id)execute:(id)arg1 error:(id*)arg2 ;
-(void)setSession:(NMSSHSession *)arg1 ;
-(long long)type;
-(void)setBufferSize:(unsigned long long)arg1 ;
-(BOOL)writeData:(id)arg1 error:(id*)arg2 ;
-(BOOL)sendEOF;
-(void)waitEOF;
-(NSObject*<OS_dispatch_source>)source;
-(void)setLastResponse:(NSData *)arg1 ;
-(BOOL)openChannel:(id*)arg1 ;
-(void)closeChannel;
-(const char*)ptyTerminalName;
-(id)execute:(id)arg1 error:(id*)arg2 timeout:(id)arg3 ;
-(id)readResponseWithError:(id*)arg1 timeout:(id)arg2 userInfo:(id)arg3 ;
-(void)executeCommandAsynchronously:(id)arg1 ;
-(BOOL)startShell:(id*)arg1 ;
-(void)closeShell;
-(BOOL)write:(id)arg1 error:(id*)arg2 ;
-(BOOL)write:(id)arg1 error:(id*)arg2 timeout:(id)arg3 ;
-(BOOL)writeData:(id)arg1 error:(id*)arg2 timeout:(id)arg3 ;
-(BOOL)requestSizeWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(BOOL)uploadFile:(id)arg1 to:(id)arg2 ;
-(BOOL)uploadFile:(id)arg1 to:(id)arg2 progress:(/*^block*/id)arg3 ;
-(BOOL)downloadFile:(id)arg1 to:(id)arg2 ;
-(BOOL)downloadFile:(id)arg1 to:(id)arg2 progress:(/*^block*/id)arg3 ;
-(BOOL)requestPty;
-(void)setRequestPty:(BOOL)arg1 ;
-(long long)ptyTerminalType;
-(void)setPtyTerminalType:(long long)arg1 ;
-(void)setEnvironmentVariables:(NSDictionary *)arg1 ;
-(void)setPtyTerminalName:(const char*)arg1 ;
@end

