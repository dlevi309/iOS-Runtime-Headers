/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HAPEncryptedSession.h>

@protocol HMFLocking, HAPSecuritySessionDelegate, OS_dispatch_queue;
@class NSData, NSDictionary, NSObject, HAPSecuritySessionEncryption, NSString;

@interface HAPSecuritySession : HMFObject <HMFLogging, HAPEncryptedSession> {

	id<HMFLocking> _lock;
	unsigned long long _state;
	unsigned long long _resumeSessionID;
	NSData* _broadcastKey;
	NSDictionary* _additionalDerivedKeys;
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
@property (readonly) NSDictionary * additionalDerivedKeys;                           //@synthesize additionalDerivedKeys=_additionalDerivedKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)open;
-(id<HAPSecuritySessionDelegate>)delegate;
-(BOOL)isOpen;
-(void)close;
-(NSString *)debugDescription;
-(HAPSecuritySessionEncryption *)encryption;
-(NSString *)description;
-(void)setPairingSession:(PairingSessionPrivateRef)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_inputInfo;
-(void)_closeWithError:(id)arg1 ;
-(unsigned long long)role;
-(void)dealloc;
-(void)closeWithError:(id)arg1 ;
-(PairingSessionPrivateRef)pairingSession;
-(NSData *)broadcastKey;
-(void)setBroadcastKey:(NSData *)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 resumeSessionID:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)receivedSetupExchangeData:(id)arg1 error:(id)arg2 ;
-(id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(BOOL)_initializeSetupSession:(unsigned long long)arg1 ;
-(void)_notifyOpening;
-(void)_processSetupExchangeData:(id)arg1 error:(id)arg2 ;
-(void)_handleSetupExchangeComplete;
-(id)_outputInfo;
-(void)setResumeSessionID:(unsigned long long)arg1 ;
-(id)_broadcastInfo;
-(id)_handleLocalPairingIdentityRequestWithStatus:(int*)arg1 ;
-(void)setAdditionalDerivedKeys:(NSDictionary *)arg1 ;
-(void)setEncryption:(HAPSecuritySessionEncryption *)arg1 ;
-(void)_notifyOpened;
-(void)reallyOpen;
-(void)_initiateClientSessionSetupExchange;
-(NSDictionary *)additionalDerivedKeys;
-(unsigned long long)resumeSessionID;
-(BOOL)isOpening;
-(id)_handlePeerPairingIdentityRequestWithIdentifier:(id)arg1 status:(int*)arg2 ;
@end

