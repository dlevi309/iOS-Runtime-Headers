/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <ShareSheet/UIActivityViewController.h>
#import <libobjc.A.dylib/MFMessageComposeViewControllerInternalDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <UIKit/UIActivityViewControllerAirDropDelegate.h>

@protocol UIActivityItemSource, FAActivityViewControllerDelegate;
@class NSArray, NSString;

@interface FAActivityViewController : UIActivityViewController <MFMessageComposeViewControllerInternalDelegate, MFMailComposeViewControllerDelegate, UIActivityViewControllerAirDropDelegate> {

	id<UIActivityItemSource> _itemSource;
	BOOL _didCompleteAirdropTransfer;
	NSArray* _recipientAddresses;
	id<FAActivityViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * recipientAddresses;                                      //@synthesize recipientAddresses=_recipientAddresses - In the implementation block
@property (assign,nonatomic) BOOL didCompleteAirdropTransfer;                                   //@synthesize didCompleteAirdropTransfer=_didCompleteAirdropTransfer - In the implementation block
@property (assign,nonatomic,__weak) id<FAActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id<FAActivityViewControllerDelegate>)delegate;
-(void)setRecipientAddresses:(NSArray *)arg1 ;
-(void)mailComposeController:(id)arg1 shouldSendMail:(id)arg2 toRecipients:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)recipientAddresses;
-(void)setDelegate:(id<FAActivityViewControllerDelegate>)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(void)activityViewControllerDidFinishAirdropTransfer:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_parseRecipientAddresses:(id)arg1 ;
-(id)initWithItemSource:(id)arg1 ;
-(BOOL)didCompleteAirdropTransfer;
-(void)setDidCompleteAirdropTransfer:(BOOL)arg1 ;
@end

