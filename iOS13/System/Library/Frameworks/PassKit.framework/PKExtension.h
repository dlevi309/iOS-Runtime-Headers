/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/


@class NSString, PKExtensionProvider;

@interface PKExtension : NSObject {

	NSString* _identifier;
	PKExtensionProvider* _provider;

}

@property (assign,nonatomic,__weak) PKExtensionProvider * provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * extensionPointIdentifier; 
-(id)description;
-(long long)type;
-(NSString *)identifier;
-(NSString *)extensionPointIdentifier;
-(void)setProvider:(PKExtensionProvider *)arg1 ;
-(PKExtensionProvider *)provider;
-(id)extension;
-(id)initWithIdentifier:(id)arg1 provider:(id)arg2 ;
-(void)beginRemoteViewControllerExtensionServiceWithInputItems:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

