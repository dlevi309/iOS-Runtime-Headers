/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFUserInterface;
@class NSString, NSUUID, NSURL, ICScheme, NSDictionary;

@interface _ICURLRequest : NSObject {

	BOOL _callbackRequest;
	BOOL _deferCompletionUntilReturn;
	BOOL _internalCallbackRequest;
	NSString* _action;
	NSString* _subAction;
	NSUUID* _uniqueID;
	NSURL* _URL;
	ICScheme* _scheme;
	NSString* _bundleIdentifier;
	id<WFUserInterface> _userInterface;
	/*^block*/id _successHandler;
	/*^block*/id _failureHandler;
	NSDictionary* _parameters;
	NSString* _successURLQueryString;
	NSString* _sourceName;
	NSURL* _generatedCallbackURL;
	long long _retries;

}

@property (nonatomic,readonly) NSUUID * uniqueID;                                                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) ICScheme * scheme;                                                        //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy,readonly) id opener; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) id<WFUserInterface> userInterface;                                 //@synthesize userInterface=_userInterface - In the implementation block
@property (nonatomic,copy) id successHandler;                                                            //@synthesize successHandler=_successHandler - In the implementation block
@property (nonatomic,copy) id failureHandler;                                                            //@synthesize failureHandler=_failureHandler - In the implementation block
@property (nonatomic,readonly) NSString * action;                                                        //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSString * subAction;                                                     //@synthesize subAction=_subAction - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                                                    //@synthesize parameters=_parameters - In the implementation block
@property (assign,getter=isCallbackRequest,nonatomic) BOOL callbackRequest;                              //@synthesize callbackRequest=_callbackRequest - In the implementation block
@property (assign,nonatomic) BOOL deferCompletionUntilReturn;                                            //@synthesize deferCompletionUntilReturn=_deferCompletionUntilReturn - In the implementation block
@property (nonatomic,copy) NSString * successURLQueryString;                                             //@synthesize successURLQueryString=_successURLQueryString - In the implementation block
@property (nonatomic,copy) NSString * sourceName;                                                        //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,copy) NSURL * generatedCallbackURL;                                                 //@synthesize generatedCallbackURL=_generatedCallbackURL - In the implementation block
@property (assign,nonatomic) long long retries;                                                          //@synthesize retries=_retries - In the implementation block
@property (assign,getter=isInternalCallbackRequest,nonatomic) BOOL internalCallbackRequest;              //@synthesize internalCallbackRequest=_internalCallbackRequest - In the implementation block
+(id)requestWithURL:(id)arg1 ;
+(id)requestWithURL:(id)arg1 fromSourceApplication:(id)arg2 ;
+(id)requestWithURL:(id)arg1 scheme:(id)arg2 userInterface:(id)arg3 bundleIdentifier:(id)arg4 successHandler:(/*^block*/id)arg5 failureHandler:(/*^block*/id)arg6 ;
-(id)description;
-(ICScheme *)scheme;
-(NSString *)bundleIdentifier;
-(NSURL *)URL;
-(NSUUID *)uniqueID;
-(NSString *)action;
-(long long)retries;
-(void)setRetries:(long long)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSString *)sourceName;
-(void)setSourceName:(NSString *)arg1 ;
-(id)successHandler;
-(void)setSuccessHandler:(id)arg1 ;
-(id)failureHandler;
-(void)setFailureHandler:(id)arg1 ;
-(id<WFUserInterface>)userInterface;
-(id)initWithURL:(id)arg1 scheme:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 failureHandler:(/*^block*/id)arg5 bundleIdentifier:(id)arg6 ;
-(id)opener;
-(NSString *)subAction;
-(void)parseActions;
-(BOOL)isCallbackRequest;
-(void)setCallbackRequest:(BOOL)arg1 ;
-(BOOL)deferCompletionUntilReturn;
-(void)setDeferCompletionUntilReturn:(BOOL)arg1 ;
-(NSString *)successURLQueryString;
-(void)setSuccessURLQueryString:(NSString *)arg1 ;
-(NSURL *)generatedCallbackURL;
-(void)setGeneratedCallbackURL:(NSURL *)arg1 ;
-(BOOL)isInternalCallbackRequest;
-(void)setInternalCallbackRequest:(BOOL)arg1 ;
@end

