/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAvailable;
-(NSString *)scheme;
-(NSArray *)capabilities;
-(BOOL)matchesURL:(id)arg1 ;
-(NSArray *)actions;
-(id)description;
-(NSDictionary *)definition;
-(unsigned long long)hash;
-(ICApp *)app;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 app:(id)arg2 ;
-(BOOL)canLaunchApp;
-(NSURL *)universalLinkBaseURL;
-(BOOL)isCallbackScheme;
-(NSString *)callbackSourceNameKey;
-(NSString *)callbackSuccessURLKey;
-(NSString *)callbackCancelURLKey;
-(NSString *)callbackErrorURLKey;
@end

