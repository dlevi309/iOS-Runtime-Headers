/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_loadCardSectionView;
-(BOOL)_shouldAttemptToConnectToRemoteViewController;
-(void)_cancelTouchesIfNecessary;
-(void)_resumeTouchesIfNecessary;
-(void)remoteViewControllerServiceDidTerminate:(id)arg1 ;
-(void)_attemptToConnectToRemoteViewControllerWithInteraction:(id)arg1 forParameters:(id)arg2 ;
-(CGSize)minimumSizeForRemoteViewController:(id)arg1 ;
-(CGSize)maximumSizeForRemoteViewController:(id)arg1 ;
@end

