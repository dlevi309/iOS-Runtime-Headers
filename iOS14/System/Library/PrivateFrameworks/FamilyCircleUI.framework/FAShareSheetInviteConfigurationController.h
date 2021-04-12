/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <UIKit/UIActivityItemSource.h>
#import <libobjc.A.dylib/FAActivityViewControllerDelegate.h>
#import <libobjc.A.dylib/FAInviteConfigurationController.h>

@protocol FAInviteControllerDelegate;
@class FAInviteContext, FAInviteLinkMetadata, UIViewController, NSArray, NSString;

@interface FAShareSheetInviteConfigurationController : NSObject <UIActivityItemSource, FAActivityViewControllerDelegate, FAInviteConfigurationController> {

	FAInviteContext* _context;
	FAInviteLinkMetadata* _linkMetadata;
	UIViewController* _presentationContext;
	NSArray* _recipientAddresses;
	/*^block*/id _activityControllerCompletionHandler;
	id<FAInviteControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FAInviteControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<FAInviteControllerDelegate>)delegate;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(void)setDelegate:(id<FAInviteControllerDelegate>)arg1 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(void)_presentInviteControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)presentWhenReadyWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithInviteContext:(id)arg1 presentingController:(id)arg2 ;
-(id)linkMetadataForActivityViewController:(id)arg1 ;
-(void)activityViewController:(id)arg1 willStartAsyncActivity:(id)arg2 ;
-(void)activityViewController:(id)arg1 didCompleteActivityType:(id)arg2 ;
-(id)_parameterForActivityType:(id)arg1 ;
@end

