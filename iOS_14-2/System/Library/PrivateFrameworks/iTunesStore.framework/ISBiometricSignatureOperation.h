/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class ISBiometricStore, SSBiometricAuthenticationContext, ISDialog, ISTouchIDDialog;

@interface ISBiometricSignatureOperation : ISOperation {

	/*^block*/id _outputBlock;
	ISBiometricStore* _biometricStore;
	SSBiometricAuthenticationContext* _context;
	ISDialog* _fallbackDialog;
	ISTouchIDDialog* _touchIDDialog;

}

@property (nonatomic,retain) ISBiometricStore * biometricStore;              //@synthesize biometricStore=_biometricStore - In the implementation block
@property (retain) SSBiometricAuthenticationContext * context;               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) ISDialog * fallbackDialog;                      //@synthesize fallbackDialog=_fallbackDialog - In the implementation block
@property (nonatomic,retain) ISTouchIDDialog * touchIDDialog;                //@synthesize touchIDDialog=_touchIDDialog - In the implementation block
@property (copy) id outputBlock;                                             //@synthesize outputBlock=_outputBlock - In the implementation block
-(void)run;
-(SSBiometricAuthenticationContext *)context;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(void)setContext:(SSBiometricAuthenticationContext *)arg1 ;
-(ISBiometricStore *)biometricStore;
-(BOOL)_promptUserToAuthenticateForIdentityMapChangeWithAccountIdentifier:(id)arg1 accountName:(id)arg2 ;
-(ISTouchIDDialog *)touchIDDialog;
-(ISDialog *)fallbackDialog;
-(id)initWithBiometricAuthenticationContext:(id)arg1 touchIDDialog:(id)arg2 fallbackDialog:(id)arg3 ;
-(void)setBiometricStore:(ISBiometricStore *)arg1 ;
-(void)setFallbackDialog:(ISDialog *)arg1 ;
-(void)setTouchIDDialog:(ISTouchIDDialog *)arg1 ;
@end

