/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/GKSocialGamingHostInterface.h>
#import <libobjc.A.dylib/GKSocialGamingExtensionInterface.h>

@protocol GKExtensionHostViewControllerDelegate, GKSocialGamingHostInterface;
@class UIViewController, NSMapTable, NSString;

@interface GKExtensionHostViewController : _UIRemoteViewController <GKSocialGamingHostInterface, GKSocialGamingExtensionInterface> {

	id<GKExtensionHostViewControllerDelegate> _delegate;
	UIViewController*<GKSocialGamingHostInterface> _hostViewController;
	NSMapTable* _targetForSelector;

}

@property (nonatomic,retain) NSMapTable * targetForSelector;                                                        //@synthesize targetForSelector=_targetForSelector - In the implementation block
@property (assign,nonatomic,__weak) id<GKExtensionHostViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<GKSocialGamingHostInterface> hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(id<GKExtensionHostViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setHostViewController:(UIViewController*<GKSocialGamingHostInterface>)arg1 ;
-(UIViewController*<GKSocialGamingHostInterface>)hostViewController;
-(void)setDelegate:(id<GKExtensionHostViewControllerDelegate>)arg1 ;
-(oneway void)finishExtension;
-(oneway void)extensionWillFinish;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)addTarget:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3 ;
-(void)setTargetForSelector:(NSMapTable *)arg1 ;
-(NSMapTable *)targetForSelector;
-(void)buildLookupForHost:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

