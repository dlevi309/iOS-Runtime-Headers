/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ISURLBag, SSBiometricAuthenticationContext, ISDialog, NSURL, ISDialogButton, NSDictionary, NSString, ISTouchIDDialog;

@interface ISBiometricAuthorizationDialogOperation : ISOperation {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ISURLBag* _urlBag;
	SSBiometricAuthenticationContext* _context;
	ISDialog* _dialog;
	NSURL* _redirectURL;
	ISDialogButton* _selectedButton;
	NSDictionary* _buyParams;
	NSDictionary* _metricsDictionary;
	NSString* _userAgent;
	ISDialog* _fallbackDialog;
	ISTouchIDDialog* _touchIDDialog;

}

@property (retain) ISDialog * fallbackDialog;                                                      //@synthesize fallbackDialog=_fallbackDialog - In the implementation block
@property (retain) ISTouchIDDialog * touchIDDialog;                                                //@synthesize touchIDDialog=_touchIDDialog - In the implementation block
@property (retain) SSBiometricAuthenticationContext * biometricAuthenticationContext;              //@synthesize context=_context - In the implementation block
@property (copy) NSDictionary * buyParams;                                                         //@synthesize buyParams=_buyParams - In the implementation block
@property (copy) NSDictionary * metricsDictionary;                                                 //@synthesize metricsDictionary=_metricsDictionary - In the implementation block
@property (copy) NSString * userAgent;                                                             //@synthesize userAgent=_userAgent - In the implementation block
@property (readonly) ISDialog * dialog;                                                            //@synthesize dialog=_dialog - In the implementation block
@property (readonly) NSURL * redirectURL;                                                          //@synthesize redirectURL=_redirectURL - In the implementation block
@property (readonly) ISDialogButton * selectedButton;                                              //@synthesize selectedButton=_selectedButton - In the implementation block
-(void)run;
-(NSDictionary *)buyParams;
-(void)setBuyParams:(NSDictionary *)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSDictionary *)metricsDictionary;
-(ISDialog *)dialog;
-(NSURL *)redirectURL;
-(void)_loadURLBag;
-(SSBiometricAuthenticationContext *)biometricAuthenticationContext;
-(ISDialogButton *)selectedButton;
-(id)initWithTouchIDDialog:(id)arg1 fallbackDialog:(id)arg2 ;
-(void)setBiometricAuthenticationContext:(SSBiometricAuthenticationContext *)arg1 ;
-(void)setMetricsDictionary:(NSDictionary *)arg1 ;
-(ISTouchIDDialog *)touchIDDialog;
-(ISDialog *)fallbackDialog;
-(void)setFallbackDialog:(ISDialog *)arg1 ;
-(void)setTouchIDDialog:(ISTouchIDDialog *)arg1 ;
-(BOOL)_runSignatureOperationReturningError:(id*)arg1 ;
-(BOOL)_shouldFallbackToAuthKitForError:(id)arg1 ;
-(BOOL)_runAuthkitOperationWithError:(id)arg1 returningError:(id*)arg2 ;
-(void)_performMetricsWithBiometricMatch:(unsigned long long)arg1 didBiometricsFail:(BOOL)arg2 ;
-(void)_findSelectedButtonForButtons:(id)arg1 ;
@end

