/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class ICApp, NSString, NSArray, NSDictionary;

@interface ICShareExtension : NSObject {

	ICApp* _app;
	NSString* _bundleIdentifier;
	NSString* _serviceType;
	NSString* _name;
	NSArray* _actions;
	NSDictionary* _definition;

}

@property (nonatomic,copy,readonly) NSDictionary * definition;                 //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;                         //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) ICApp * app;                             //@synthesize app=_app - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                              //@synthesize actions=_actions - In the implementation block
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(NSDictionary *)definition;
-(NSString *)serviceType;
-(BOOL)isAvailable;
-(NSArray *)actions;
-(ICApp *)app;
-(id)initWithDefinition:(id)arg1 app:(id)arg2 ;
@end

