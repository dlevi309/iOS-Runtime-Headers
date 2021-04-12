/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@class NMSSHSession;

@interface NMSFTP : NSObject {

	BOOL _connected;
	NMSSHSession* _session;
	LIBSSH2_SFTPRef _sftpSession;

}

@property (nonatomic,retain) NMSSHSession * session;                         //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) LIBSSH2_SFTPRef sftpSession;                    //@synthesize sftpSession=_sftpSession - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;              //@synthesize connected=_connected - In the implementation block
+(id)connectWithSession:(id)arg1 ;
-(BOOL)fileExistsAtPath:(id)arg1 ;
-(id)contentsAtPath:(id)arg1 ;
-(void)disconnect;
-(BOOL)directoryExistsAtPath:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg1 ;
-(NMSSHSession *)session;
-(void)setSession:(NMSSHSession *)arg1 ;
-(BOOL)connect;
-(id)initWithSession:(id)arg1 ;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)removeFileAtPath:(id)arg1 ;
-(BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(LIBSSH2_SFTP_HANDLERef)openDirectoryAtPath:(id)arg1 ;
-(BOOL)removeDirectoryAtPath:(id)arg1 ;
-(id)contentsOfDirectoryAtPath:(id)arg1 ;
-(id)infoForFileAtPath:(id)arg1 ;
-(LIBSSH2_SFTP_HANDLERef)openFileAtPath:(id)arg1 flags:(unsigned long long)arg2 mode:(long long)arg3 ;
-(BOOL)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 ;
-(id)contentsAtPath:(id)arg1 progress:(/*^block*/id)arg2 ;
-(BOOL)writeContents:(id)arg1 toFileAtPath:(id)arg2 ;
-(BOOL)writeContents:(id)arg1 toFileAtPath:(id)arg2 progress:(/*^block*/id)arg3 ;
-(BOOL)writeFileAtPath:(id)arg1 toFileAtPath:(id)arg2 ;
-(BOOL)writeFileAtPath:(id)arg1 toFileAtPath:(id)arg2 progress:(/*^block*/id)arg3 ;
-(BOOL)writeStream:(id)arg1 toFileAtPath:(id)arg2 ;
-(BOOL)writeStream:(id)arg1 toFileAtPath:(id)arg2 progress:(/*^block*/id)arg3 ;
-(BOOL)appendContents:(id)arg1 toFileAtPath:(id)arg2 ;
-(BOOL)appendStream:(id)arg1 toFileAtPath:(id)arg2 ;
-(BOOL)writeStream:(id)arg1 toSFTPHandle:(LIBSSH2_SFTP_HANDLERef)arg2 ;
-(BOOL)writeStream:(id)arg1 toSFTPHandle:(LIBSSH2_SFTP_HANDLERef)arg2 progress:(/*^block*/id)arg3 ;
-(BOOL)copyContentsOfPath:(id)arg1 toFileAtPath:(id)arg2 progress:(/*^block*/id)arg3 ;
-(LIBSSH2_SFTPRef)sftpSession;
-(void)setSftpSession:(LIBSSH2_SFTPRef)arg1 ;
@end

