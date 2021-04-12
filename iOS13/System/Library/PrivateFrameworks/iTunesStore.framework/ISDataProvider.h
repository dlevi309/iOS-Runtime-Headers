/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol ISBiometricSessionDelegate;
@class SSAuthenticationContext, NSNumber, SSURLBagContext, NSString, ISOperation, NSURL, SSBiometricAuthenticationContext, NSURLResponse;

@interface ISDataProvider : NSObject <NSCopying> {

	SSAuthenticationContext* _authenticationContext;
	NSNumber* _authenticatedAccountDSID;
	SSURLBagContext* _bagContext;
	long long _contentLength;
	NSString* _contentType;
	id _output;
	ISOperation* _parentOperation;
	NSURL* _redirectURL;
	SSBiometricAuthenticationContext* _biometricAuthenticationContext;
	long long _errorHandlerResponseType;
	unsigned long long _authenticatedAccountCredentialSource;
	NSURLResponse* _response;
	id<ISBiometricSessionDelegate> _biometricSessionDelegate;

}

@property (assign) long long errorHandlerResponseType;                                             //@synthesize errorHandlerResponseType=_errorHandlerResponseType - In the implementation block
@property (retain) SSAuthenticationContext * authenticationContext;                                //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (retain) SSURLBagContext * bagContext;                                                   //@synthesize bagContext=_bagContext - In the implementation block
@property (__weak) ISOperation * parentOperation;                                                  //@synthesize parentOperation=_parentOperation - In the implementation block
@property (retain) SSBiometricAuthenticationContext * biometricAuthenticationContext;              //@synthesize biometricAuthenticationContext=_biometricAuthenticationContext - In the implementation block
@property (assign) id<ISBiometricSessionDelegate> biometricSessionDelegate;                        //@synthesize biometricSessionDelegate=_biometricSessionDelegate - In the implementation block
@property (retain) NSURLResponse * response;                                                       //@synthesize response=_response - In the implementation block
@property (assign) long long contentLength;                                                        //@synthesize contentLength=_contentLength - In the implementation block
@property (retain) NSString * contentType;                                                         //@synthesize contentType=_contentType - In the implementation block
@property (assign) unsigned long long authenticatedAccountCredentialSource;                        //@synthesize authenticatedAccountCredentialSource=_authenticatedAccountCredentialSource - In the implementation block
@property (retain) NSNumber * authenticatedAccountDSID;                                            //@synthesize authenticatedAccountDSID=_authenticatedAccountDSID - In the implementation block
@property (retain) id output;                                                                      //@synthesize output=_output - In the implementation block
@property (retain) NSURL * redirectURL;                                                            //@synthesize redirectURL=_redirectURL - In the implementation block
+(id)provider;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(NSURLResponse *)response;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(id)closeStream;
-(ISOperation *)parentOperation;
-(void)setParentOperation:(ISOperation *)arg1 ;
-(long long)contentLength;
-(void)setup;
-(void)setContentLength:(long long)arg1 ;
-(id)output;
-(void)setOutput:(id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(NSURL *)redirectURL;
-(void)setRedirectURL:(NSURL *)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(void)configureFromProvider:(id)arg1 ;
-(void)migrateOutputFromSubProvider:(id)arg1 ;
-(BOOL)runTouchIDAuthorizationDialog:(id)arg1 fallbackDialog:(id)arg2 metricsDictionary:(id)arg3 error:(id*)arg4 ;
-(BOOL)runAuthorizationDialog:(id)arg1 error:(id*)arg2 ;
-(SSBiometricAuthenticationContext *)biometricAuthenticationContext;
-(NSNumber *)authenticatedAccountDSID;
-(BOOL)isStream;
-(void)streamCancelled;
-(long long)streamedBytes;
-(BOOL)isStreamComplete;
-(long long)errorHandlerResponseType;
-(void)resetStream;
-(void)streamDidFailWithError:(id)arg1 ;
-(BOOL)canStreamContentLength:(long long)arg1 error:(id*)arg2 ;
-(SSURLBagContext *)bagContext;
-(void)setBagContext:(SSURLBagContext *)arg1 ;
-(void)setAuthenticatedAccountDSID:(NSNumber *)arg1 ;
-(BOOL)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2 ;
-(void)setBiometricAuthenticationContext:(SSBiometricAuthenticationContext *)arg1 ;
-(BOOL)runSubOperation:(id)arg1 error:(id*)arg2 ;
-(void)_performActionsForButton:(id)arg1 withDialog:(id)arg2 ;
-(unsigned long long)authenticatedAccountCredentialSource;
-(void)setAuthenticatedAccountCredentialSource:(unsigned long long)arg1 ;
-(BOOL)runTouchIDAuthorizationDialog:(id)arg1 fallbackDialog:(id)arg2 error:(id*)arg3 ;
-(void)setErrorHandlerResponseType:(long long)arg1 ;
-(id<ISBiometricSessionDelegate>)biometricSessionDelegate;
-(void)setBiometricSessionDelegate:(id<ISBiometricSessionDelegate>)arg1 ;
@end

