/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSSmartSiriVolumeServiceDelegate.h>

@protocol CSSmartSiriVolumeClientDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface CSSmartSiriVolumeClient : NSObject <CSSmartSiriVolumeServiceDelegate> {

	id<CSSmartSiriVolumeClientDelegate> _delegate;
	NSXPCConnection* _ssvConnection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * ssvConnection;                                  //@synthesize ssvConnection=_ssvConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CSSmartSiriVolumeClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CSSmartSiriVolumeClientDelegate>)delegate;
-(void)setDelegate:(id<CSSmartSiriVolumeClientDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)_getRemoteServiceProxyObject;
-(void)_createClientConnection;
-(void)didTTSVolumeChangeForReason:(unsigned long long)arg1 ;
-(NSXPCConnection *)ssvConnection;
-(void)setSsvConnection:(NSXPCConnection *)arg1 ;
-(id)getVolumeForTTSType:(unsigned long long)arg1 withContext:(id)arg2 ;
@end

