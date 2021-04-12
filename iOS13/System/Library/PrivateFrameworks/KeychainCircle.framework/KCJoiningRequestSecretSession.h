/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/


@protocol KCJoiningRequestSecretDelegate;
#import <KeychainCircle/KeychainCircle-Structs.h>
@class KCAESGCMDuplexSession, KCSRPClientContext, NSString, NSData, OTControl, NSMutableDictionary;

@interface KCJoiningRequestSecretSession : NSObject {

	int _state;
	KCAESGCMDuplexSession* _session;
	id<KCJoiningRequestSecretDelegate> _secretDelegate;
	KCSRPClientContext* _context;
	unsigned long long _dsid;
	NSString* _piggy_uuid;
	unsigned long long _piggy_version;
	unsigned long long _epoch;
	NSData* _challenge;
	NSData* _salt;
	NSString* _sessionUUID;
	OTControl* _otControl;
	NSMutableDictionary* _defaults;

}

@property (__weak) id<KCJoiningRequestSecretDelegate> secretDelegate;              //@synthesize secretDelegate=_secretDelegate - In the implementation block
@property (readonly) KCSRPClientContext * context;                                 //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long dsid;                                      //@synthesize dsid=_dsid - In the implementation block
@property (readonly) int state;                                                    //@synthesize state=_state - In the implementation block
@property (retain) NSString * piggy_uuid;                                          //@synthesize piggy_uuid=_piggy_uuid - In the implementation block
@property (assign) unsigned long long piggy_version;                               //@synthesize piggy_version=_piggy_version - In the implementation block
@property (assign) unsigned long long epoch;                                       //@synthesize epoch=_epoch - In the implementation block
@property (retain) NSData * challenge;                                             //@synthesize challenge=_challenge - In the implementation block
@property (retain) NSData * salt;                                                  //@synthesize salt=_salt - In the implementation block
@property (retain) NSString * sessionUUID;                                         //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,retain) OTControl * otControl;                                //@synthesize otControl=_otControl - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * defaults;                       //@synthesize defaults=_defaults - In the implementation block
@property (readonly) KCAESGCMDuplexSession * session;                              //@synthesize session=_session - In the implementation block
+(id)sessionWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)description;
-(int)state;
-(KCSRPClientContext *)context;
-(unsigned long long)epoch;
-(void)setEpoch:(unsigned long long)arg1 ;
-(unsigned long long)dsid;
-(OTControl *)otControl;
-(void)setOtControl:(OTControl *)arg1 ;
-(NSMutableDictionary *)defaults;
-(void)setDefaults:(NSMutableDictionary *)arg1 ;
-(NSData *)salt;
-(KCAESGCMDuplexSession *)session;
-(NSData *)challenge;
-(BOOL)isDone;
-(void)setSalt:(NSData *)arg1 ;
-(void)setChallenge:(NSData *)arg1 ;
-(id)stateString;
-(NSString *)sessionUUID;
-(void)setSessionUUID:(NSString *)arg1 ;
-(void)setControlObject:(id)arg1 ;
-(id)createUUID;
-(id)initialMessage:(id*)arg1 ;
-(BOOL)setupSession:(id*)arg1 ;
-(id)copyResponseForChallenge:(id)arg1 salt:(id)arg2 secret:(id)arg3 error:(id*)arg4 ;
-(id)copyResponseForSecret:(id)arg1 error:(id*)arg2 ;
-(id)handleChallengeData:(id)arg1 secret:(id)arg2 error:(id*)arg3 ;
-(id)handleChallenge:(id)arg1 secret:(id)arg2 error:(id*)arg3 ;
-(id)handleChallenge:(id)arg1 error:(id*)arg2 ;
-(id)handleVerification:(id)arg1 error:(id*)arg2 ;
-(id)processMessage:(id)arg1 error:(id*)arg2 ;
-(id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 rng:(ccrng_state*)arg3 error:(id*)arg4 ;
-(id<KCJoiningRequestSecretDelegate>)secretDelegate;
-(void)setSecretDelegate:(id<KCJoiningRequestSecretDelegate>)arg1 ;
-(NSString *)piggy_uuid;
-(void)setPiggy_uuid:(NSString *)arg1 ;
-(unsigned long long)piggy_version;
-(void)setPiggy_version:(unsigned long long)arg1 ;
@end

