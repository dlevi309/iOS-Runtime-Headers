/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/AUAudioUnitHostProtocol.h>
#import <libobjc.A.dylib/_AURemoteParameterSynchronization.h>

@protocol OS_dispatch_queue;
@class NSObject, NSExtension, NSUUID, AUAudioUnit, NSXPCConnection;

@interface AUHostExtensionContext : NSExtensionContext <AUAudioUnitHostProtocol, _AURemoteParameterSynchronization> {

	NSObject*<OS_dispatch_queue> mParameterQueue;
	NSExtension* _extension;
	NSUUID* _requestIdentifier;
	AUAudioUnit* _audioUnit;

}

@property (nonatomic,retain) NSExtension * extension;                               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSUUID * requestIdentifier;                            //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic,__weak) AUAudioUnit * audioUnit;                        //@synthesize audioUnit=_audioUnit - In the implementation block
@property (nonatomic,__weak,readonly) NSXPCConnection * xpcConnection; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(NSXPCConnection *)xpcConnection;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(NSUUID *)requestIdentifier;
-(AUAudioUnit *)audioUnit;
-(void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned)arg5 ;
-(void)propertiesChanged:(id)arg1 ;
-(void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(id)arg3 enabled:(BOOL)arg4 ;
-(void)setAudioUnit:(AUAudioUnit *)arg1 ;
@end

