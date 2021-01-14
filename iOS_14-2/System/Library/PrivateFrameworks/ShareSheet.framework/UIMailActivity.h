/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <ShareSheet/UIActivity.h>
#import <UIKit/UIStateRestoring.h>
#import <UIKit/UIManagedConfigurationRestrictableActivity.h>

@class NSString, MFMailComposeViewController;

@interface UIMailActivity : UIActivity <UIStateRestoring, UIManagedConfigurationRestrictableActivity> {

	os_unfair_lock_s _canSendMailLock;
	BOOL _canSendMailChecked;
	SCD_Struct_UI2 _canSendMail;
	BOOL _isContentManaged;
	BOOL _keyboardVisible;
	BOOL _hasAnyAccount;
	BOOL _hasValidAccountForSending;
	NSString* _sourceApplicationBundleID;
	NSString* _subject;
	NSString* _autosaveIdentifier;
	MFMailComposeViewController* _mailComposeViewController;

}

@property (nonatomic,retain) MFMailComposeViewController * mailComposeViewController;              //@synthesize mailComposeViewController=_mailComposeViewController - In the implementation block
@property (assign,nonatomic) BOOL hasAnyAccount;                                                   //@synthesize hasAnyAccount=_hasAnyAccount - In the implementation block
@property (assign,nonatomic) BOOL hasValidAccountForSending;                                       //@synthesize hasValidAccountForSending=_hasValidAccountForSending - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                     //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic) BOOL keyboardVisible;                                                 //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
@property (nonatomic,retain) NSString * autosaveIdentifier;                                        //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isContentManaged;                                                //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleID;                                   //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
+(id)applicationBundleID;
-(NSString *)subject;
-(BOOL)isContentManaged;
-(void)_cleanup;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)activityType;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(id)init;
-(void)setRecipients:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)_setMailSubject:(id)arg1 ;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(BOOL)hasAnyAccount;
-(id)_mailDraftRestorationURL;
-(BOOL)canShareURLThroughMail:(id)arg1 ;
-(void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1 ;
-(id)_stateRestorationDraftIsAvailable;
-(MFMailComposeViewController *)mailComposeViewController;
-(void)autosaveWithHandler:(/*^block*/id)arg1 ;
-(SCD_Struct_UI2)_checkCanSendMail;
-(void)setHasAnyAccount:(BOOL)arg1 ;
-(void)setHasValidAccountForSending:(BOOL)arg1 ;
-(BOOL)hasValidAccountForSending;
-(NSString *)autosaveIdentifier;
-(BOOL)_restoreDraft;
-(void)_saveDraft:(id)arg1 ;
-(void)setMailComposeViewController:(MFMailComposeViewController *)arg1 ;
-(NSString *)sourceApplicationBundleID;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(id)_bundleIdentifierForActivityImageCreation;
-(/*^block*/id)_backgroundPreheatBlock;
-(void)_prepareWithActivityItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAutosaveIdentifier:(NSString *)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)_setSessionID:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(BOOL)keyboardVisible;
-(void)setSubject:(NSString *)arg1 ;
-(void)setKeyboardVisible:(BOOL)arg1 ;
-(void)dealloc;
-(id)activityViewController;
@end

