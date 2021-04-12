/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HMSetupRemoteService;
@class HMSetupAccessoryDescription;

@interface HFSetupPairingContext : NSObject {

	BOOL _isTrustedOrigin;
	HMSetupAccessoryDescription* _setupAccessoryDescription;
	id<HMSetupRemoteService> _setupRemoteService;

}

@property (nonatomic,retain) HMSetupAccessoryDescription * setupAccessoryDescription;              //@synthesize setupAccessoryDescription=_setupAccessoryDescription - In the implementation block
@property (assign,nonatomic,__weak) id<HMSetupRemoteService> setupRemoteService;                   //@synthesize setupRemoteService=_setupRemoteService - In the implementation block
@property (assign,nonatomic) BOOL isTrustedOrigin;                                                 //@synthesize isTrustedOrigin=_isTrustedOrigin - In the implementation block
-(id)init;
-(BOOL)isTrustedOrigin;
-(void)setIsTrustedOrigin:(BOOL)arg1 ;
-(HMSetupAccessoryDescription *)setupAccessoryDescription;
-(id<HMSetupRemoteService>)setupRemoteService;
-(void)setSetupAccessoryDescription:(HMSetupAccessoryDescription *)arg1 ;
-(id)initWithSetupAccessoryDescription:(id)arg1 setupRemoteService:(id)arg2 isTrustedOrigin:(BOOL)arg3 ;
-(void)setSetupRemoteService:(id<HMSetupRemoteService>)arg1 ;
@end

