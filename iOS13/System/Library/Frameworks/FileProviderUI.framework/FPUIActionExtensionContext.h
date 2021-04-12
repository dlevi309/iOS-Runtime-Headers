/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <Foundation/NSExtensionContext.h>

@class NSString, NSURL;

@interface FPUIActionExtensionContext : NSExtensionContext {

	NSString* _domainIdentifier;
	NSURL* _initialURL;

}

@property (copy) NSString * domainIdentifier;              //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (copy) NSURL * initialURL;                       //@synthesize initialURL=_initialURL - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(void)cancelRequestWithError:(id)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)initialURL;
-(void)setInitialURL:(NSURL *)arg1 ;
-(id)_remoteContext;
-(void)completeRequestWithUserInfo:(id)arg1 ;
-(void)completeRequest;
-(void)didEncounterError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

