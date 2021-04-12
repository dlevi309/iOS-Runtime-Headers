/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivity.h>
#import <UIKit/UIManagedConfigurationRestrictableActivity.h>

@class NSString, MFMessageComposeViewController, LPLinkMetadata;

@interface UIMessageActivity : UIActivity <UIManagedConfigurationRestrictableActivity> {

	BOOL _isContentManaged;
	NSString* _sourceApplicationBundleID;
	MFMessageComposeViewController* _messageComposeViewController;
	LPLinkMetadata* _linkMetadata;

}

@property (nonatomic,retain) MFMessageComposeViewController * messageComposeViewController;              //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * linkMetadata;                                              //@synthesize linkMetadata=_linkMetadata - In the implementation block
@property (assign,nonatomic) BOOL isContentManaged;                                                      //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleID;                                         //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
+(id)applicationBundleID;
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
+(void)_preheatAsyncIfNeeded;
-(void)dealloc;
-(id)activityType;
-(BOOL)isContentManaged;
-(void)_cleanup;
-(void)setSessionID:(id)arg1 ;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(NSString *)sourceApplicationBundleID;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(LPLinkMetadata *)linkMetadata;
-(void)setLinkMetadata:(LPLinkMetadata *)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_bundleIdentifierForActivityImageCreation;
-(/*^block*/id)_backgroundPreheatBlock;
-(void)_prepareWithActivityItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)activityViewController;
-(void)setMessageComposeViewController:(MFMessageComposeViewController *)arg1 ;
-(MFMessageComposeViewController *)messageComposeViewController;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
@end

