/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol OS_dispatch_queue;
@class NSArray, NSString, WFImage, NSDictionary, NSObject;

@interface ICApp : NSObject {

	BOOL _installed;
	BOOL _checkedInstallStatus;
	NSArray* _schemes;
	NSArray* _shareExtensions;
	NSString* _localizedName;
	WFImage* _icon;
	NSString* _identifier;
	NSDictionary* _definition;
	NSObject*<OS_dispatch_queue> _stateAccessQueue;

}

@property (nonatomic,retain) WFImage * icon;                                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL checkedInstallStatus;                                    //@synthesize checkedInstallStatus=_checkedInstallStatus - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateAccessQueue;              //@synthesize stateAccessQueue=_stateAccessQueue - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * definition;                                  //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSArray * allBundleIdentifiers; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * localizedName;                                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) NSString * localizedShortName; 
@property (nonatomic,readonly) NSString * iTunesIdentifier; 
@property (nonatomic,readonly) NSString * iconName; 
@property (nonatomic,readonly) NSArray * schemes;                                          //@synthesize schemes=_schemes - In the implementation block
@property (nonatomic,readonly) NSArray * exportedFileTypes; 
@property (nonatomic,readonly) NSArray * documentTypes; 
@property (nonatomic,readonly) NSArray * documentActions; 
@property (nonatomic,readonly) NSArray * shareExtensions;                                  //@synthesize shareExtensions=_shareExtensions - In the implementation block
@property (nonatomic,readonly) NSArray * metadata; 
@property (nonatomic,readonly) long long state; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed;                          //@synthesize installed=_installed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(long long)state;
-(NSString *)localizedName;
-(NSString *)localizedShortName;
-(BOOL)isInstalled;
-(NSArray *)metadata;
-(NSDictionary *)definition;
-(WFImage *)icon;
-(void)setIcon:(WFImage *)arg1 ;
-(NSArray *)documentTypes;
-(NSString *)iTunesIdentifier;
-(NSString *)shortName;
-(NSString *)iconName;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 ;
-(id)bundleIdentifiersByIdiom;
-(NSArray *)allBundleIdentifiers;
-(id)localizedString:(id)arg1 identifier:(id)arg2 ;
-(NSArray *)schemes;
-(id)schemeNamed:(id)arg1 ;
-(NSArray *)exportedFileTypes;
-(NSArray *)documentActions;
-(NSArray *)shareExtensions;
-(void)loadIconWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)determinesInstallStatusViaURLScheme;
-(BOOL)isCurrentlyInstalled;
-(void)resetInstalledStatus;
-(void)updateInstalledStatus;
-(void)openFile:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openFile:(id)arg1 withAnnotation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadAppInStoreController:(id)arg1 withCampaignToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)identifierFromDictionaryForCurrentIdiom:(id)arg1 ;
-(BOOL)checkedInstallStatus;
-(void)setCheckedInstallStatus:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateAccessQueue;
@end

