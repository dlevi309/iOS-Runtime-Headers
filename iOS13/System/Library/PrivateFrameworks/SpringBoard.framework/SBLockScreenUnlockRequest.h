/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, BSProcessHandle, SBApplication;

@interface SBLockScreenUnlockRequest : NSObject <NSCopying> {

	BOOL _wantsBiometricPresentation;
	BOOL _forceAlertAuthenticationUI;
	BOOL _confirmedNotInPocket;
	int _source;
	int _intent;
	NSString* _name;
	BSProcessHandle* _process;
	SBApplication* _destinationApplication;

}

@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int source;                                          //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) int intent;                                          //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) BSProcessHandle * process;                           //@synthesize process=_process - In the implementation block
@property (nonatomic,retain) SBApplication * destinationApplication;              //@synthesize destinationApplication=_destinationApplication - In the implementation block
@property (assign,nonatomic) BOOL wantsBiometricPresentation;                     //@synthesize wantsBiometricPresentation=_wantsBiometricPresentation - In the implementation block
@property (assign,nonatomic) BOOL forceAlertAuthenticationUI;                     //@synthesize forceAlertAuthenticationUI=_forceAlertAuthenticationUI - In the implementation block
@property (assign,nonatomic) BOOL confirmedNotInPocket;                           //@synthesize confirmedNotInPocket=_confirmedNotInPocket - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(int)source;
-(int)intent;
-(BSProcessHandle *)process;
-(void)setIntent:(int)arg1 ;
-(void)setProcess:(BSProcessHandle *)arg1 ;
-(BOOL)wantsBiometricPresentation;
-(void)setWantsBiometricPresentation:(BOOL)arg1 ;
-(BOOL)confirmedNotInPocket;
-(void)setConfirmedNotInPocket:(BOOL)arg1 ;
-(void)setDestinationApplication:(SBApplication *)arg1 ;
-(void)setForceAlertAuthenticationUI:(BOOL)arg1 ;
-(SBApplication *)destinationApplication;
-(BOOL)forceAlertAuthenticationUI;
@end

