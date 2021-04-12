/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <CardKit/CRKCardSectionViewController.h>
#import <libobjc.A.dylib/INUIRemoteViewControllerDelegate.h>

@class INUIRemoteViewController, SiriUICardSectionView, NSString;

@interface SiriUISnippetExtensionCardSectionViewController : CRKCardSectionViewController <INUIRemoteViewControllerDelegate> {

	INUIRemoteViewController* _remoteViewController;
	id _touchDeliveryPolicyAssertion;

}

@property (nonatomic,retain) SiriUICardSectionView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardSectionClasses;
-(void)dealloc;
-(CGSize)maximumSizeForRemoteViewController:(id)arg1 ;
-(CGSize)minimumSizeForRemoteViewController:(id)arg1 ;
-(void)remoteViewControllerServiceDidTerminate:(id)arg1 ;
-(void)_loadCardSectionView;
-(void)_cancelTouchesIfNecessary;
-(void)_resumeTouchesIfNecessary;
-(BOOL)_shouldAttemptToConnectToRemoteViewController;
-(void)_attemptToConnectToRemoteViewControllerWithInteraction:(id)arg1 forParameters:(id)arg2 ;
@end

