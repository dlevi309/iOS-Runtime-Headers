/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@protocol OS_dispatch_queue, SOExtensionDelegate;
#import <AppSSO/AppSSO-Structs.h>
@class NSUUID, NSObject, SORemoteExtensionViewController, NSExtension, NSArray, NSString;

@interface SOExtension : NSObject {

	NSUUID* _sessionID;
	NSObject*<OS_dispatch_queue> _queue;
	SORemoteExtensionViewController* _remoteViewController;
	NSExtension* _extension;
	NSArray* _associatedDomains;
	id<SOExtensionDelegate> _extensionDelegate;

}

@property (nonatomic,retain) NSExtension * extension;                                       //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSString * extensionBundleIdentifier; 
@property (nonatomic,readonly) NSString * localizedExtensionDisplayName; 
@property (nonatomic,readonly) NSString * containerAppPath; 
@property (nonatomic,readonly) NSString * containerAppBundleIdentifier; 
@property (nonatomic,retain) NSArray * associatedDomains;                                   //@synthesize associatedDomains=_associatedDomains - In the implementation block
@property (assign,nonatomic,__weak) id<SOExtensionDelegate> extensionDelegate;              //@synthesize extensionDelegate=_extensionDelegate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)unload;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(NSArray *)associatedDomains;
-(BOOL)isEqualToExtension:(id)arg1 ;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(NSString *)extensionBundleIdentifier;
-(id<SOExtensionDelegate>)extensionDelegate;
-(void)setExtensionDelegate:(id<SOExtensionDelegate>)arg1 ;
-(NSString *)containerAppBundleIdentifier;
-(void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2 ;
-(void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)localizedExtensionDisplayName;
-(void)_setupExtension;
-(void)_setupSessionIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_contextForSession;
-(void)_setupSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupSessionHelperForIOSWithCompletion:(/*^block*/id)arg1 ;
-(void)_connectContextToSessionWithRequestIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)containerAppPath;
-(void)requestAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_finishedSettingUpSession:(id)arg1 ;
-(SCD_Struct_SO0)auditTokenForSession;
-(void)checkAssociatedDomains;
-(BOOL)hasURLApprovedAssociatedDomain:(id)arg1 ;
@end

