/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class ICApp, NSString, NSArray, NSDictionary, NSURL;

@interface ICScheme : NSObject {

	ICApp* _app;
	NSString* _scheme;
	NSArray* _actions;
	NSArray* _capabilities;
	NSDictionary* _definition;

}

@property (nonatomic,copy,readonly) NSDictionary * definition;                           //@synthesize definition=_definition - In the implementation block
@property (nonatomic,__weak,readonly) ICApp * app;                                       //@synthesize app=_app - In the implementation block
@property (nonatomic,readonly) NSString * scheme;                                        //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,readonly) NSURL * universalLinkBaseURL; 
@property (nonatomic,readonly) NSArray * actions;                                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSArray * capabilities;                                   //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) BOOL canLaunchApp; 
@property (getter=isCallbackScheme,nonatomic,readonly) BOOL callbackScheme; 
@property (nonatomic,readonly) NSString * callbackSourceNameKey; 
@property (nonatomic,readonly) NSString * callbackSuccessURLKey; 
@property (nonatomic,readonly) NSString * callbackCancelURLKey; 
@property (nonatomic,readonly) NSString * callbackErrorURLKey; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)scheme;
-(NSDictionary *)definition;
-(BOOL)isAvailable;
-(BOOL)matchesURL:(id)arg1 ;
-(NSArray *)actions;
-(NSArray *)capabilities;
-(ICApp *)app;
-(id)initWithDefinition:(id)arg1 app:(id)arg2 ;
-(BOOL)isCallbackScheme;
-(BOOL)canLaunchApp;
-(NSURL *)universalLinkBaseURL;
-(NSString *)callbackSourceNameKey;
-(NSString *)callbackSuccessURLKey;
-(NSString *)callbackCancelURLKey;
-(NSString *)callbackErrorURLKey;
@end

