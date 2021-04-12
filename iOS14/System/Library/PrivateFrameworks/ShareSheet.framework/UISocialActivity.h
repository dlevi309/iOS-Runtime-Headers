/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isContentManaged;
-(void)_cleanup;
-(id)initWithActivityType:(id)arg1 ;
-(id)activityType;
-(void)setInitialText:(NSString *)arg1 ;
-(id)debugDescription;
-(id)initWithApplicationExtension:(id)arg1 ;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(NSString *)initialText;
-(NSString *)sourceApplicationBundleID;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(void)prepareWithActivityExtensionItemData:(id)arg1 ;
-(void)_willBePerformedOrPresented;
-(BOOL)_canBeExcludeWhenMatchingWithContext:(id)arg1 ;
-(BOOL)_wantsThumbnailItemData;
-(BOOL)_wantsAttachmentURLItemData;
-(BOOL)_wantsInitialSocialText;
-(BOOL)_managesOwnPresentation;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)setBuiltinActivityType:(NSString *)arg1 ;
-(NSString *)builtinActivityType;
-(SLComposeViewController *)socialComposeViewController;
-(void)_prepareComposeViewController:(id)arg1 withInjectedExtensionItems:(id)arg2 ;
-(void)_prepareComposeViewController:(id)arg1 withActivityExtensionItems:(id)arg2 ;
-(void)setSocialComposeViewController:(SLComposeViewController *)arg1 ;
-(CGSize)_thumbnailSize;
-(id)activityViewController;
@end

