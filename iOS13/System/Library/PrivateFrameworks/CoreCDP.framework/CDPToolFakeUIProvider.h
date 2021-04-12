/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <libobjc.A.dylib/CDPStateUIProvider.h>

@class NSString;

@interface CDPToolFakeUIProvider : NSObject <CDPStateUIProvider> {

	NSString* _localSecret;
	NSString* _remoteSecret;
	NSString* _icsc;
	NSString* _recoveryKey;

}

@property (nonatomic,copy) NSString * localSecret;                  //@synthesize localSecret=_localSecret - In the implementation block
@property (nonatomic,copy) NSString * remoteSecret;                 //@synthesize remoteSecret=_remoteSecret - In the implementation block
@property (nonatomic,copy) NSString * icsc;                         //@synthesize icsc=_icsc - In the implementation block
@property (nonatomic,copy) NSString * recoveryKey;                  //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4 ;
-(void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5 ;
-(void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(/*^block*/id)arg2 ;
-(NSString *)recoveryKey;
-(NSString *)localSecret;
-(void)setLocalSecret:(NSString *)arg1 ;
-(NSString *)remoteSecret;
-(void)setRemoteSecret:(NSString *)arg1 ;
-(NSString *)icsc;
-(void)setIcsc:(NSString *)arg1 ;
-(void)setRecoveryKey:(NSString *)arg1 ;
@end

