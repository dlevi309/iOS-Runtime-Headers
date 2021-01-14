/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <Foundation/NSExtensionContext.h>

@class NSString, NSURL, NSError;

@interface FPUIActionExtensionContext : NSExtensionContext {

	NSString* _domainIdentifier;
	NSURL* _initialURL;
	NSError* _setupError;

}

@property (copy) NSString * domainIdentifier;                   //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (copy) NSURL * initialURL;                            //@synthesize initialURL=_initialURL - In the implementation block
@property (nonatomic,retain) NSError * setupError;              //@synthesize setupError=_setupError - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(NSString *)domainIdentifier;
-(void)cancelRequestWithError:(id)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSURL *)initialURL;
-(id)_remoteContext;
-(void)setInitialURL:(NSURL *)arg1 ;
-(void)completeRequestWithUserInfo:(id)arg1 ;
-(void)setSetupError:(NSError *)arg1 ;
-(void)completeRequest;
-(void)didEncounterError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSError *)setupError;
@end

