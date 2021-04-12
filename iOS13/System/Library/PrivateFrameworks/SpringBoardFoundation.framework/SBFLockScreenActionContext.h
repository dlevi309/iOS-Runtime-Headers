/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class NSString;

@interface SBFLockScreenActionContext : NSObject {

	NSString* _lockLabel;
	NSString* _shortLockLabel;
	NSString* _unlockDestination;
	/*^block*/id _action;
	NSString* _identifier;
	double _fontSize;
	BOOL _requiresUIUnlock;
	BOOL _deactivateAwayController;
	BOOL _canBypassPinLock;
	BOOL _wantsBiometricPresentation;
	int _source;
	int _intent;
	BOOL _confirmedNotInPocket;
	BOOL _requiresAuthentication;

}

@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * lockLabel;                         //@synthesize lockLabel=_lockLabel - In the implementation block
@property (nonatomic,retain) NSString * shortLockLabel;                    //@synthesize shortLockLabel=_shortLockLabel - In the implementation block
@property (nonatomic,copy) NSString * unlockDestination;                   //@synthesize unlockDestination=_unlockDestination - In the implementation block
@property (nonatomic,copy) id action;                                      //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL requiresUIUnlock;                        //@synthesize requiresUIUnlock=_requiresUIUnlock - In the implementation block
@property (assign,nonatomic) BOOL deactivateAwayController;                //@synthesize deactivateAwayController=_deactivateAwayController - In the implementation block
@property (assign,nonatomic) BOOL canBypassPinLock;                        //@synthesize canBypassPinLock=_canBypassPinLock - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthentication;                  //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (assign,nonatomic) BOOL wantsBiometricPresentation;              //@synthesize wantsBiometricPresentation=_wantsBiometricPresentation - In the implementation block
@property (assign,nonatomic) BOOL confirmedNotInPocket;                    //@synthesize confirmedNotInPocket=_confirmedNotInPocket - In the implementation block
@property (assign,nonatomic) int source;                                   //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) int intent;                                   //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomUnlockLabel; 
-(void)setSource:(int)arg1 ;
-(NSString *)identifier;
-(int)source;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)action;
-(int)intent;
-(void)setAction:(id)arg1 ;
-(void)setIntent:(int)arg1 ;
-(BOOL)requiresAuthentication;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(id)initWithLockLabel:(id)arg1 shortLockLabel:(id)arg2 action:(/*^block*/id)arg3 identifier:(id)arg4 ;
-(NSString *)lockLabel;
-(NSString *)shortLockLabel;
-(BOOL)hasCustomUnlockLabel;
-(void)setLockLabel:(NSString *)arg1 ;
-(void)setShortLockLabel:(NSString *)arg1 ;
-(NSString *)unlockDestination;
-(void)setUnlockDestination:(NSString *)arg1 ;
-(BOOL)requiresUIUnlock;
-(void)setRequiresUIUnlock:(BOOL)arg1 ;
-(BOOL)deactivateAwayController;
-(void)setDeactivateAwayController:(BOOL)arg1 ;
-(BOOL)canBypassPinLock;
-(void)setCanBypassPinLock:(BOOL)arg1 ;
-(BOOL)wantsBiometricPresentation;
-(void)setWantsBiometricPresentation:(BOOL)arg1 ;
-(BOOL)confirmedNotInPocket;
-(void)setConfirmedNotInPocket:(BOOL)arg1 ;
@end

