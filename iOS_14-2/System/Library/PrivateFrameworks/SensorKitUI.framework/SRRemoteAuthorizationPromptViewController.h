/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SRAuthorizationPromptClientInterface.h>
#import <libobjc.A.dylib/SRRemoteAuthorizationPromptViewController.h>

@protocol SRRemoteAuthorizationPromptViewController <SRAuthorizationPromptServiceInterface>
@property (assign,nonatomic,__weak) id<SRRemoteAuthorizationPromptViewControllerDelegate> delegate; 
@required
-(id<SRRemoteAuthorizationPromptViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)invalidate;

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
+(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)serviceViewControllerInterface;
-(void)setRequest:(id<NSCopying>)arg1 ;
-(id<SRRemoteAuthorizationPromptViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id<NSCopying>)request;
-(void)setDelegate:(id<SRRemoteAuthorizationPromptViewControllerDelegate>)arg1 ;
-(id)serviceViewControllerProxy;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(NSExtension *)weakExtension;
-(void)setWeakExtension:(NSExtension *)arg1 ;
-(void)requestAuthorizationForBundle:(id)arg1 services:(id)arg2 ;
-(void)showAppsAndStudies;
-(void)showStudyAuthorizationForBundlePath:(id)arg1 ;
-(void)showResearchData;
-(void)showFirstRunOnboarding;
-(void)authorizationRequestCompleted;
-(void)authorizationRequestFailedWithError:(id)arg1 ;
-(void)authorizationUIReadyForDisplayModally:(BOOL)arg1 ;
-(void)authorizationRequestWillDisappear;
-(void)authorizationRequestDidDisappear;
-(void)deleteAllSamples;
@end

