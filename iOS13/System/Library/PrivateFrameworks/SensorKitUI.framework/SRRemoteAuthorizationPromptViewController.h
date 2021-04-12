/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SRAuthorizationPromptClientInterface.h>
#import <libobjc.A.dylib/SRRemoteAuthorizationPromptViewController.h>

@protocol SRRemoteAuthorizationPromptViewController <SRAuthorizationPromptServiceInterface>
@property (assign,nonatomic,__weak) id<SRRemoteAuthorizationPromptViewControllerDelegate> delegate; 
@required
-(void)invalidate;
-(id<SRRemoteAuthorizationPromptViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end


@protocol SRRemoteAuthorizationPromptViewControllerDelegate, NSCopying;
@class NSExtension, NSString;

@interface SRRemoteAuthorizationPromptViewController : _UIRemoteViewController <SRAuthorizationPromptClientInterface, SRRemoteAuthorizationPromptViewController> {

	id<SRRemoteAuthorizationPromptViewControllerDelegate> _delegate;
	id<NSCopying> _request;
	NSExtension* _weakExtension;

}

@property (assign,nonatomic,__weak) id<SRRemoteAuthorizationPromptViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<NSCopying> request;                                                              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) NSExtension * weakExtension;                                                 //@synthesize weakExtension=_weakExtension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id<SRRemoteAuthorizationPromptViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SRRemoteAuthorizationPromptViewControllerDelegate>)arg1 ;
-(void)setRequest:(id<NSCopying>)arg1 ;
-(id<NSCopying>)request;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)serviceViewControllerProxy;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(NSExtension *)weakExtension;
-(void)setWeakExtension:(NSExtension *)arg1 ;
-(void)authorizationRequestCompleted;
-(void)requestAuthorizationForBundle:(id)arg1 services:(id)arg2 ;
-(void)showPendingAuthUIForBundlePath:(id)arg1 services:(id)arg2 ;
-(void)showAppsAndStudies;
-(void)showStudyAuthorizationForBundlePath:(id)arg1 ;
-(void)showResearchData;
-(void)deleteAllSamples;
-(void)authorizationRequestFailedWithError:(id)arg1 ;
-(void)authorizationUIReadyForDisplayModally:(BOOL)arg1 ;
-(void)authorizationPresentDeleteAllAlertWithTitle:(id)arg1 actionTitle:(id)arg2 cancelTitle:(id)arg3 ;
-(void)authorizationPresentDownloadPath:(id)arg1 sandboxExtensionToken:(id)arg2 ;
-(void)authorizationRequestWillDisappear;
-(void)authorizationRequestDidDisappear;
@end

