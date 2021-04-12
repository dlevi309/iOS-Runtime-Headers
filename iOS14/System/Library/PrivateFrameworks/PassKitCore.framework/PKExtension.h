/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, PKExtensionProvider, NSExtension;

@interface PKExtension : NSObject {

	NSString* _identifier;
	NSString* _containingAppBundleIdentifier;
	NSString* _containingApplicationIdentifier;
	PKExtensionProvider* _provider;
	NSExtension* _extension;

}

@property (assign,nonatomic,__weak) PKExtensionProvider * provider;                   //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                 //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSString * containingAppBundleIdentifier;                //@synthesize containingAppBundleIdentifier=_containingAppBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * containingApplicationIdentifier;              //@synthesize containingApplicationIdentifier=_containingApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * extensionPointIdentifier; 
-(void)setProvider:(PKExtensionProvider *)arg1 ;
-(void)setContainingAppBundleIdentifier:(NSString *)arg1 ;
-(void)beginExtensionRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)beginExtensionRequestWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)containingAppBundleIdentifier;
-(id)initWithIdentifier:(id)arg1 extension:(id)arg2 provider:(id)arg3 ;
-(void)performTestExtensionServiceRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)beginLocalExtensionServiceWithUserInteraction:(BOOL)arg1 completion:(/*^block*/id)arg2 timeout:(unsigned long long)arg3 timeoutHandler:(/*^block*/id)arg4 ;
-(NSString *)containingApplicationIdentifier;
-(void)completeLocalExtensionServiceWithCompletion:(/*^block*/id)arg1 ;
-(void)setContainingApplicationIdentifier:(NSString *)arg1 ;
-(PKExtensionProvider *)provider;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSString *)extensionPointIdentifier;
-(id)description;
-(NSExtension *)extension;
-(long long)type;
-(NSString *)identifier;
@end

