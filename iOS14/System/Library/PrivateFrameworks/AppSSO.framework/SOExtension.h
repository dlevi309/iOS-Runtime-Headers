/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unload;
-(void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_connectContextToSessionWithRequestIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasAssociatedDomainsApproved;
-(void)requestAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupSessionHelperForIOSWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasURLApprovedAssociatedDomain:(id)arg1 ;
-(void)checkAssociatedDomains;
-(void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2 ;
-(BOOL)isEqualToExtension:(id)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithExtension:(id)arg1 ;
-(NSArray *)associatedDomains;
-(id)_contextForSession;
-(void)_setupSessionIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)containerAppPath;
-(id)description;
-(NSString *)localizedExtensionDisplayName;
-(NSExtension *)extension;
-(SCD_Struct_SO0)auditTokenForSession;
-(void)_setupSessionWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)extensionBundleIdentifier;
-(id<SOExtensionDelegate>)extensionDelegate;
-(void)_finishedSettingUpSession:(id)arg1 ;
-(NSString *)containerAppBundleIdentifier;
-(void)_beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setExtensionDelegate:(id<SOExtensionDelegate>)arg1 ;
-(void)_beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_setupExtension;
@end

