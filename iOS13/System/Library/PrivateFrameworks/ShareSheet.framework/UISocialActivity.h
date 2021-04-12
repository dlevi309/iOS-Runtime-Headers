/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <ShareSheet/UIApplicationExtensionActivity.h>
#import <UIKit/UIManagedConfigurationRestrictableActivity.h>

@class NSString, SLComposeViewController;

@interface UISocialActivity : UIApplicationExtensionActivity <UIManagedConfigurationRestrictableActivity> {

	BOOL _isContentManaged;
	NSString* _sourceApplicationBundleID;
	NSString* _builtinActivityType;
	SLComposeViewController* _socialComposeViewController;
	NSString* _initialText;

}

@property (nonatomic,copy) NSString * builtinActivityType;                                       //@synthesize builtinActivityType=_builtinActivityType - In the implementation block
@property (nonatomic,retain) SLComposeViewController * socialComposeViewController;              //@synthesize socialComposeViewController=_socialComposeViewController - In the implementation block
@property (nonatomic,retain) NSString * initialText;                                             //@synthesize initialText=_initialText - In the implementation block
@property (assign,nonatomic) BOOL isContentManaged;                                              //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleID;                                 //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
+(long long)activityCategory;
+(id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2 ;
-(id)debugDescription;
-(id)initWithActivityType:(id)arg1 ;
-(id)activityType;
-(BOOL)isContentManaged;
-(void)_cleanup;
-(CGSize)_thumbnailSize;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(NSString *)sourceApplicationBundleID;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)initWithApplicationExtension:(id)arg1 ;
-(id)activityViewController;
-(void)prepareWithActivityExtensionItemData:(id)arg1 ;
-(void)_willBePerformedOrPresented;
-(BOOL)_canBeExcludeWhenMatchingWithContext:(id)arg1 ;
-(BOOL)_wantsThumbnailItemData;
-(BOOL)_wantsAttachmentURLItemData;
-(BOOL)_wantsInitialSocialText;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_managesOwnPresentation;
-(void)setInitialText:(NSString *)arg1 ;
-(void)setBuiltinActivityType:(NSString *)arg1 ;
-(SLComposeViewController *)socialComposeViewController;
-(NSString *)builtinActivityType;
-(NSString *)initialText;
-(void)_prepareComposeViewController:(id)arg1 withInjectedExtensionItems:(id)arg2 ;
-(void)_prepareComposeViewController:(id)arg1 withActivityExtensionItems:(id)arg2 ;
-(void)setSocialComposeViewController:(SLComposeViewController *)arg1 ;
@end

