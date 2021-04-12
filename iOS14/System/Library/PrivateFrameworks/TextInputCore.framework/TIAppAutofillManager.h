/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class TIKeyboardSecureCandidateRenderer, NSUUID, NSString, NSDictionary, LAContext;

@interface TIAppAutofillManager : NSObject {

	TIKeyboardSecureCandidateRenderer* _secureCandidateRenderer;
	id _oneTimeCodeProvider;
	NSUUID* _documentIdentifierForLastAutofillGeneration;
	NSString* _clientIdentifierForLastAutofillGeneration;
	NSString* _clientIdentifierForLastKeyboardSync;
	NSDictionary* _queuedCustomInfo;
	NSDictionary* _queuedUnauthenticatedCustomInfo;
	LAContext* _laContext;

}

@property (nonatomic,retain) NSUUID * documentIdentifierForLastAutofillGeneration;                       //@synthesize documentIdentifierForLastAutofillGeneration=_documentIdentifierForLastAutofillGeneration - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifierForLastAutofillGeneration;                       //@synthesize clientIdentifierForLastAutofillGeneration=_clientIdentifierForLastAutofillGeneration - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifierForLastKeyboardSync;                             //@synthesize clientIdentifierForLastKeyboardSync=_clientIdentifierForLastKeyboardSync - In the implementation block
@property (nonatomic,retain) NSDictionary * queuedCustomInfo;                                            //@synthesize queuedCustomInfo=_queuedCustomInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * queuedUnauthenticatedCustomInfo;                             //@synthesize queuedUnauthenticatedCustomInfo=_queuedUnauthenticatedCustomInfo - In the implementation block
@property (nonatomic,retain) LAContext * laContext;                                                      //@synthesize laContext=_laContext - In the implementation block
@property (nonatomic,readonly) BOOL hasOneTimeCode; 
@property (nonatomic,readonly) TIKeyboardSecureCandidateRenderer * secureCandidateRenderer; 
+(id)sharedInstance;
-(id)initPrivate;
-(id)obtainBundleIdentifierFromConnection:(id)arg1 ;
-(BOOL)_simulatesAutofillCandidates;
-(NSString *)clientIdentifierForLastAutofillGeneration;
-(NSUUID *)documentIdentifierForLastAutofillGeneration;
-(void)setLaContext:(LAContext *)arg1 ;
-(void)setQueuedUnauthenticatedCustomInfo:(NSDictionary *)arg1 ;
-(NSString *)clientIdentifierForLastKeyboardSync;
-(void)setDocumentIdentifierForLastAutofillGeneration:(NSUUID *)arg1 ;
-(void)setClientIdentifierForLastKeyboardSync:(NSString *)arg1 ;
-(BOOL)shouldAuthenticateToAcceptAutofill;
-(id)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 ;
-(id)generateOneTimeCodeCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 ;
-(id)generateAutofillFormCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 ;
-(BOOL)isValidedString:(id)arg1 ;
-(void)setQueuedCustomInfo:(NSDictionary *)arg1 ;
-(LAContext *)laContext;
-(id)obtainApplicationIdentifierFromConnection:(id)arg1 ;
-(void)shouldAcceptOneTimeCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(TIKeyboardSecureCandidateRenderer *)secureCandidateRenderer;
-(BOOL)hasOneTimeCode;
-(void)setClientIdentifierForLastAutofillGeneration:(NSString *)arg1 ;
-(NSDictionary *)queuedUnauthenticatedCustomInfo;
-(id)getCredentialsWithApplicationIdentifier:(id)arg1 autofillContext:(id)arg2 ;
-(id)customInfoFromCredential:(id)arg1 ;
-(NSDictionary *)queuedCustomInfo;
-(void)appAutoFillOneTimeCodeProviderReceivedOneTimeCode:(id)arg1 ;
-(void)obtainCredential:(id)arg1 ;
-(void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1 ;
-(void)shouldAcceptAutofill:(id)arg1 withPayload:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

