/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol OS_dispatch_queue;
@class TIKeyboardSecureCandidateRenderer, NSDictionary, NSUUID, NSString, LAContext, NSObject, IMOneTimeCodeAccelerator;

@interface TIAppAutofillManager : NSObject {

	TIKeyboardSecureCandidateRenderer* _secureCandidateRenderer;
	NSDictionary* _currentOneTimeCode;
	NSUUID* _documentIdentifierForLastAutofillGeneration;
	NSString* _clientIdentifierForLastAutofillGeneration;
	NSString* _clientIdentifierForLastKeyboardSync;
	NSDictionary* _queuedCustomInfo;
	LAContext* _laContext;
	NSObject*<OS_dispatch_queue> _oneTimeCodeAcceleratorQueue;
	IMOneTimeCodeAccelerator* _oneTimeCodeAccelerator;

}

@property (nonatomic,retain) NSUUID * documentIdentifierForLastAutofillGeneration;                       //@synthesize documentIdentifierForLastAutofillGeneration=_documentIdentifierForLastAutofillGeneration - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifierForLastAutofillGeneration;                       //@synthesize clientIdentifierForLastAutofillGeneration=_clientIdentifierForLastAutofillGeneration - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifierForLastKeyboardSync;                             //@synthesize clientIdentifierForLastKeyboardSync=_clientIdentifierForLastKeyboardSync - In the implementation block
@property (nonatomic,retain) NSDictionary * queuedCustomInfo;                                            //@synthesize queuedCustomInfo=_queuedCustomInfo - In the implementation block
@property (nonatomic,retain) LAContext * laContext;                                                      //@synthesize laContext=_laContext - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> oneTimeCodeAcceleratorQueue;                   //@synthesize oneTimeCodeAcceleratorQueue=_oneTimeCodeAcceleratorQueue - In the implementation block
@property (nonatomic,retain) IMOneTimeCodeAccelerator * oneTimeCodeAccelerator;                          //@synthesize oneTimeCodeAccelerator=_oneTimeCodeAccelerator - In the implementation block
@property (nonatomic,retain) NSDictionary * currentOneTimeCode;                                          //@synthesize currentOneTimeCode=_currentOneTimeCode - In the implementation block
@property (nonatomic,readonly) TIKeyboardSecureCandidateRenderer * secureCandidateRenderer; 
+(id)sharedInstance;
-(id)initPrivate;
-(TIKeyboardSecureCandidateRenderer *)secureCandidateRenderer;
-(void)obtainCredential:(id)arg1 ;
-(NSDictionary *)currentOneTimeCode;
-(void)obtainOneTimeCodeCredential:(id)arg1 ;
-(void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1 ;
-(BOOL)isValidedString:(id)arg1 ;
-(id)customInfoFromCredential:(id)arg1 ;
-(BOOL)_simulatesAutofillCandidates;
-(id)getCredentialsWithApplicationIdentifier:(id)arg1 autofillContext:(id)arg2 ;
-(id)obtainApplicationIdentifierFromConnection:(id)arg1 ;
-(id)obtainBundleIdentifierFromConnection:(id)arg1 ;
-(id)generateAutofillFormCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 ;
-(id)generateOneTimeCodeCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 ;
-(id)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 ;
-(BOOL)shouldAuthenticateToAcceptAutofill;
-(void)shouldAcceptAutofill:(id)arg1 withPayload:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)shouldAcceptOneTimeCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentOneTimeCode:(NSDictionary *)arg1 ;
-(NSUUID *)documentIdentifierForLastAutofillGeneration;
-(void)setDocumentIdentifierForLastAutofillGeneration:(NSUUID *)arg1 ;
-(NSString *)clientIdentifierForLastAutofillGeneration;
-(void)setClientIdentifierForLastAutofillGeneration:(NSString *)arg1 ;
-(NSString *)clientIdentifierForLastKeyboardSync;
-(void)setClientIdentifierForLastKeyboardSync:(NSString *)arg1 ;
-(NSDictionary *)queuedCustomInfo;
-(void)setQueuedCustomInfo:(NSDictionary *)arg1 ;
-(LAContext *)laContext;
-(void)setLaContext:(LAContext *)arg1 ;
-(NSObject*<OS_dispatch_queue>)oneTimeCodeAcceleratorQueue;
-(void)setOneTimeCodeAcceleratorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(IMOneTimeCodeAccelerator *)oneTimeCodeAccelerator;
-(void)setOneTimeCodeAccelerator:(IMOneTimeCodeAccelerator *)arg1 ;
@end

