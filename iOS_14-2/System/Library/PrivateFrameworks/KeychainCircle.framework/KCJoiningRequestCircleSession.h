/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/


@protocol KCJoiningRequestCircleDelegate;
@class NSObject, KCAESGCMDuplexSession, OTControl, OTJoiningConfiguration;

@interface KCJoiningRequestCircleSession : NSObject {

	int _state;
	NSObject*<KCJoiningRequestCircleDelegate> _circleDelegate;
	KCAESGCMDuplexSession* _session;
	unsigned long long _piggy_version;
	OTControl* _otControl;
	OTJoiningConfiguration* _joiningConfiguration;

}

@property (readonly) NSObject*<KCJoiningRequestCircleDelegate> circleDelegate;              //@synthesize circleDelegate=_circleDelegate - In the implementation block
@property (readonly) KCAESGCMDuplexSession * session;                                       //@synthesize session=_session - In the implementation block
@property (assign) int state;                                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long piggy_version;                              //@synthesize piggy_version=_piggy_version - In the implementation block
@property (nonatomic,retain) OTControl * otControl;                                         //@synthesize otControl=_otControl - In the implementation block
@property (nonatomic,retain) OTJoiningConfiguration * joiningConfiguration;                 //@synthesize joiningConfiguration=_joiningConfiguration - In the implementation block
+(id)sessionWithCircleDelegate:(id)arg1 session:(id)arg2 error:(id*)arg3 ;
-(void)setOtControl:(OTControl *)arg1 ;
-(KCAESGCMDuplexSession *)session;
-(void)setState:(int)arg1 ;
-(int)state;
-(BOOL)isDone;
-(OTControl *)otControl;
-(id)initialMessage:(id*)arg1 ;
-(id)processMessage:(id)arg1 error:(id*)arg2 ;
-(void)waitForOctagonUpgrade;
-(void)setControlObject:(id)arg1 ;
-(OTJoiningConfiguration *)joiningConfiguration;
-(void)setJoiningConfiguration:(OTJoiningConfiguration *)arg1 ;
-(unsigned long long)piggy_version;
-(void)setPiggy_version:(unsigned long long)arg1 ;
-(void)setContextIDOnJoiningConfiguration:(id)arg1 ;
-(id)accessSession;
-(id)encryptedPeerInfo:(id*)arg1 ;
-(id)encryptedInitialMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldJoinSOS:(id)arg1 pairingMessage:(id)arg2 ;
-(id)handleCircleBlob:(id)arg1 error:(id*)arg2 ;
-(id)initWithCircleDelegate:(id)arg1 session:(id)arg2 error:(id*)arg3 ;
-(id)initWithCircleDelegate:(id)arg1 session:(id)arg2 otcontrol:(id)arg3 error:(id*)arg4 ;
-(NSObject*<KCJoiningRequestCircleDelegate>)circleDelegate;
@end

