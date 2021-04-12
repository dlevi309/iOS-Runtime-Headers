/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, HAPSecuritySessionDelegate, OS_dispatch_queue;
@class NSData, NSObject, HAPSecuritySessionEncryption, NSString;

@interface HAPSecuritySession : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	unsigned long long _state;
	unsigned long long _resumeSessionID;
	NSData* _broadcastKey;
	id<HAPSecuritySessionDelegate> _delegate;
	unsigned long long _role;
	NSObject*<OS_dispatch_queue> _queue;
	PairingSessionPrivateRef _pairingSession;
	HAPSecuritySessionEncryption* _encryption;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned long long state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) PairingSessionPrivateRef pairingSession;                //@synthesize pairingSession=_pairingSession - In the implementation block
@property (nonatomic,retain) HAPSecuritySessionEncryption * encryption;              //@synthesize encryption=_encryption - In the implementation block
@property (__weak,readonly) id<HAPSecuritySessionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long role;                              //@synthesize role=_role - In the implementation block
@property (getter=isOpen,readonly) BOOL open; 
@property (getter=isOpening,readonly) BOOL opening; 
@property (nonatomic,readonly) unsigned long long resumeSessionID;                   //@synthesize resumeSessionID=_resumeSessionID - In the implementation block
@property (readonly) NSData * broadcastKey;                                          //@synthesize broadcastKey=_broadcastKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)open;
-(void)close;
-(id<HAPSecuritySessionDelegate>)delegate;
-(unsigned long long)role;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isOpen;
-(HAPSecuritySessionEncryption *)encryption;
-(void)closeWithError:(id)arg1 ;
-(PairingSessionPrivateRef)pairingSession;
-(void)_handleSetupExchangeComplete;
-(void)setPairingSession:(PairingSessionPrivateRef)arg1 ;
-(id)_inputInfo;
-(void)_closeWithError:(id)arg1 ;
-(NSData *)broadcastKey;
-(void)setBroadcastKey:(NSData *)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 resumeSessionID:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)receivedSetupExchangeData:(id)arg1 error:(id)arg2 ;
-(id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(BOOL)_initializeSetupSession:(unsigned long long)arg1 ;
-(void)_notifyOpening;
-(void)_processSetupExchangeData:(id)arg1 error:(id)arg2 ;
-(id)_outputInfo;
-(void)setResumeSessionID:(unsigned long long)arg1 ;
-(id)_broadcastInfo;
-(id)_handleLocalPairingIdentityRequestWithStatus:(int*)arg1 ;
-(void)setEncryption:(HAPSecuritySessionEncryption *)arg1 ;
-(void)_notifyOpened;
-(void)reallyOpen;
-(void)_initiateClientSessionSetupExchange;
-(unsigned long long)resumeSessionID;
-(BOOL)isOpening;
-(id)_handlePeerPairingIdentityRequestWithIdentifier:(id)arg1 status:(int*)arg2 ;
@end

