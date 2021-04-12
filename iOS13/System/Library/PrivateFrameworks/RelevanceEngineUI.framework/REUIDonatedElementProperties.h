/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString, INInteraction, NSUserActivity, INIntent, INRelevantShortcut;

@interface REUIDonatedElementProperties : NSObject <NSSecureCoding, NSCopying> {

	UIImage* _bodyImage;
	BOOL _isUsingPlaceholderArtwork;
	BOOL _localDonation;
	BOOL _displayAppName;
	NSString* _bundleIdentifier;
	NSString* _remoteBundleIdentifier;
	NSString* _localBundleIdentifier;
	unsigned long long _donationType;
	unsigned long long _actionIdentifier;
	NSString* _appName;
	UIImage* _appIcon;
	UIImage* _fullsizeAppIcon;
	NSString* _title;
	NSString* _subtitle;
	UIImage* _monochromeBodyImage;
	INInteraction* _interaction;
	NSUserActivity* _userActivity;
	INIntent* _intent;
	INRelevantShortcut* _relevantShortcut;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * remoteBundleIdentifier;                      //@synthesize remoteBundleIdentifier=_remoteBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * localBundleIdentifier;                       //@synthesize localBundleIdentifier=_localBundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long donationType;                        //@synthesize donationType=_donationType - In the implementation block
@property (getter=isLocalDonation,nonatomic,readonly) BOOL localDonation;              //@synthesize localDonation=_localDonation - In the implementation block
@property (nonatomic,readonly) unsigned long long actionIdentifier;                    //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * appName;                                     //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) UIImage * appIcon;                                      //@synthesize appIcon=_appIcon - In the implementation block
@property (nonatomic,readonly) UIImage * fullsizeAppIcon;                              //@synthesize fullsizeAppIcon=_fullsizeAppIcon - In the implementation block
@property (nonatomic,readonly) BOOL displayAppName;                                    //@synthesize displayAppName=_displayAppName - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) UIImage * bodyImage; 
@property (nonatomic,readonly) UIImage * monochromeBodyImage;                          //@synthesize monochromeBodyImage=_monochromeBodyImage - In the implementation block
@property (nonatomic,readonly) NSString * bodyImageCompositingFilter; 
@property (nonatomic,readonly) INInteraction * interaction;                            //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,readonly) NSUserActivity * userActivity;                          //@synthesize userActivity=_userActivity - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                                      //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) INRelevantShortcut * relevantShortcut;                  //@synthesize relevantShortcut=_relevantShortcut - In the implementation block
@property (nonatomic,readonly) BOOL requiresRemoteExecution; 
@property (nonatomic,readonly) BOOL supportsLocalIntentExecution; 
@property (nonatomic,readonly) BOOL isMediaDonation; 
@property (nonatomic,readonly) BOOL isWorkoutDonation; 
@property (nonatomic,readonly) BOOL isBeginWorkoutDonation; 
@property (nonatomic,readonly) BOOL isEndWorkoutDonation; 
@property (nonatomic,readonly) BOOL supportsBackgroundExecution; 
+(BOOL)supportsSecureCoding;
+(void)createWithDonatedAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(NSString *)subtitle;
-(INInteraction *)interaction;
-(INRelevantShortcut *)relevantShortcut;
-(INIntent *)intent;
-(unsigned long long)actionIdentifier;
-(NSUserActivity *)userActivity;
-(NSString *)appName;
-(BOOL)supportsBackgroundExecution;
-(BOOL)displayAppName;
-(UIImage *)appIcon;
-(NSString *)bodyImageCompositingFilter;
-(UIImage *)bodyImage;
-(BOOL)isLocalDonation;
-(NSString *)remoteBundleIdentifier;
-(NSString *)localBundleIdentifier;
-(void)loadForAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)donationType;
-(void)_loadAppContentPropertiesWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadContentForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadContentForUserActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadContentForRelevantShortcut:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isWorkoutDonation;
-(BOOL)isMediaDonation;
-(BOOL)requiresRemoteExecution;
-(BOOL)_hasLocalExtensionForIntentExecution;
-(id)_placeholderImageNameForBundleID:(id)arg1 ;
-(void)_loadContentForUserActivityOnShortcut:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_scaleImageForDisplay:(id)arg1 ;
-(BOOL)_isMusicDonation;
-(BOOL)_isPodcastsDonation;
-(BOOL)supportsLocalIntentExecution;
-(BOOL)isBeginWorkoutDonation;
-(BOOL)isEndWorkoutDonation;
-(UIImage *)fullsizeAppIcon;
-(UIImage *)monochromeBodyImage;
@end

