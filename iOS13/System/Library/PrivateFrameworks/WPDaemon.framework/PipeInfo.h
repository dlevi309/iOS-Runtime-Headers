/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@protocol OS_dispatch_source, OS_voucher;
#import <WPDaemon/WPDaemon-Structs.h>
@class NSObject, CBScalablePipe, PipeDataTransfer;

@interface PipeInfo : NSObject {

	pthread_override_sRef _qosOverride;
	pthread_override_sRef _socketThreadQOSOverride;
	BOOL _newProtocol;
	BOOL _versionInfoSent;
	BOOL _versionInfoReceived;
	BOOL _pipeDidConnectSent;
	unsigned char _version;
	unsigned char _localVersion;
	BOOL _useConnectStatusPDU;
	BOOL _connectionInitiator;
	unsigned _supportedFeatures;
	unsigned _localSupportedFeatures;
	NSObject*<OS_dispatch_source> _pipeReadSource;
	CBScalablePipe* _pipe;
	NSObject*<OS_voucher> _voucher;
	PipeDataTransfer* _pipeDataTransfer;

}

@property (retain) NSObject*<OS_dispatch_source> pipeReadSource;              //@synthesize pipeReadSource=_pipeReadSource - In the implementation block
@property (retain) CBScalablePipe * pipe;                                     //@synthesize pipe=_pipe - In the implementation block
@property (retain) NSObject*<OS_voucher> voucher;                             //@synthesize voucher=_voucher - In the implementation block
@property (assign) BOOL newProtocol;                                          //@synthesize newProtocol=_newProtocol - In the implementation block
@property (assign) BOOL versionInfoSent;                                      //@synthesize versionInfoSent=_versionInfoSent - In the implementation block
@property (assign) BOOL versionInfoReceived;                                  //@synthesize versionInfoReceived=_versionInfoReceived - In the implementation block
@property (assign) BOOL pipeDidConnectSent;                                   //@synthesize pipeDidConnectSent=_pipeDidConnectSent - In the implementation block
@property (assign) unsigned char version;                                     //@synthesize version=_version - In the implementation block
@property (assign) unsigned supportedFeatures;                                //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (retain) PipeDataTransfer * pipeDataTransfer;                       //@synthesize pipeDataTransfer=_pipeDataTransfer - In the implementation block
@property (assign) unsigned char localVersion;                                //@synthesize localVersion=_localVersion - In the implementation block
@property (assign) unsigned localSupportedFeatures;                           //@synthesize localSupportedFeatures=_localSupportedFeatures - In the implementation block
@property (assign) BOOL useConnectStatusPDU;                                  //@synthesize useConnectStatusPDU=_useConnectStatusPDU - In the implementation block
@property (assign) BOOL connectionInitiator;                                  //@synthesize connectionInitiator=_connectionInitiator - In the implementation block
-(void)dealloc;
-(id)description;
-(CBScalablePipe *)pipe;
-(unsigned char)version;
-(void)setVersion:(unsigned char)arg1 ;
-(NSObject*<OS_voucher>)voucher;
-(void)setVoucher:(NSObject*<OS_voucher>)arg1 ;
-(unsigned)supportedFeatures;
-(void)setLocalVersion:(unsigned char)arg1 ;
-(void)setSupportedFeatures:(unsigned)arg1 ;
-(void)releaseQOSOverride;
-(void)applyQOSOverride;
-(NSObject*<OS_dispatch_source>)pipeReadSource;
-(void)setPipeReadSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setPipe:(CBScalablePipe *)arg1 ;
-(BOOL)newProtocol;
-(void)setNewProtocol:(BOOL)arg1 ;
-(BOOL)versionInfoSent;
-(void)setVersionInfoSent:(BOOL)arg1 ;
-(BOOL)versionInfoReceived;
-(void)setVersionInfoReceived:(BOOL)arg1 ;
-(BOOL)pipeDidConnectSent;
-(void)setPipeDidConnectSent:(BOOL)arg1 ;
-(PipeDataTransfer *)pipeDataTransfer;
-(void)setPipeDataTransfer:(PipeDataTransfer *)arg1 ;
-(unsigned char)localVersion;
-(unsigned)localSupportedFeatures;
-(void)setLocalSupportedFeatures:(unsigned)arg1 ;
-(BOOL)useConnectStatusPDU;
-(void)setUseConnectStatusPDU:(BOOL)arg1 ;
-(BOOL)connectionInitiator;
-(void)setConnectionInitiator:(BOOL)arg1 ;
@end

