/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNUIApplicationLaunchCheckin, CNUIPlaceholderProviderFactory, CNUIPRLikenessResolver, CNUILikenessRendering, CNUIUserActionDiscoveringEnvironment, CNLSApplicationWorkspace, CNCapabilities, CNUIDefaultUserActionFetcher;
#import <ContactsUI/ContactsUI-Structs.h>
@class CNUISchedulerProvider, CNContactStore, CNFavorites, CNUIUserActivityManager, CNUIMeContactMonitor, CNUIIDSAvailabilityProvider, CNContactChangesNotifier, CNUICoreRecentsManager, CNUIExternalComponentsFactory, CNCollation, CNHealthStoreManager, CNGeminiManager, CNContactsEnvironment;

@interface CNUIContactsEnvironment : NSObject {

	id<CNUIApplicationLaunchCheckin> _launchCheckinRegistrar;
	CNUISchedulerProvider* _defaultSchedulerProvider;
	CNContactStore* _contactStore;
	CNContactStore* _inProcessContactStore;
	CNFavorites* _inProcessFavorites;
	CNUIUserActivityManager* _inProcessActivityManager;
	id<CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
	CNUIMeContactMonitor* _meMonitor;
	id<CNUIPRLikenessResolver> _cachingLikenessResolver;
	id<CNUILikenessRendering> _cachingLikenessRenderer;
	id<CNUILikenessRendering> _cachingMonogramRenderer;
	id<CNUIUserActionDiscoveringEnvironment> _actionDiscoveringEnvironment;
	CNUIIDSAvailabilityProvider* _idsAvailabilityProvider;
	id<CNLSApplicationWorkspace> _applicationWorkspace;
	id<CNCapabilities> _capabilities;
	id<CNUIDefaultUserActionFetcher> _defaultUserActionFetcher;
	CNContactChangesNotifier* _contactChangesNotifier;
	CNUICoreRecentsManager* _recentsManager;
	CNUIExternalComponentsFactory* _componentsFactory;
	UCollatorRef _sortCollator;
	CNCollation* _collation;
	CNHealthStoreManager* _healthStoreManager;
	CNGeminiManager* _geminiManager;
	CNContactsEnvironment* _cnEnvironment;

}

@property (nonatomic,retain) CNUISchedulerProvider * defaultSchedulerProvider;                                   //@synthesize defaultSchedulerProvider=_defaultSchedulerProvider - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                      //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContactStore * inProcessContactStore;                                             //@synthesize inProcessContactStore=_inProcessContactStore - In the implementation block
@property (nonatomic,retain) CNFavorites * inProcessFavorites;                                                   //@synthesize inProcessFavorites=_inProcessFavorites - In the implementation block
@property (nonatomic,retain) CNUIUserActivityManager * inProcessActivityManager;                                 //@synthesize inProcessActivityManager=_inProcessActivityManager - In the implementation block
@property (nonatomic,retain) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;                      //@synthesize placeholderProviderFactory=_placeholderProviderFactory - In the implementation block
@property (nonatomic,retain) CNUIMeContactMonitor * meMonitor;                                                   //@synthesize meMonitor=_meMonitor - In the implementation block
@property (nonatomic,retain) id<CNUIPRLikenessResolver> cachingLikenessResolver;                                 //@synthesize cachingLikenessResolver=_cachingLikenessResolver - In the implementation block
@property (nonatomic,retain) id<CNUILikenessRendering> cachingLikenessRenderer;                                  //@synthesize cachingLikenessRenderer=_cachingLikenessRenderer - In the implementation block
@property (nonatomic,retain) id<CNUILikenessRendering> cachingMonogramRenderer;                                  //@synthesize cachingMonogramRenderer=_cachingMonogramRenderer - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionDiscoveringEnvironment> actionDiscoveringEnvironment;              //@synthesize actionDiscoveringEnvironment=_actionDiscoveringEnvironment - In the implementation block
@property (nonatomic,retain) CNUIIDSAvailabilityProvider * idsAvailabilityProvider;                              //@synthesize idsAvailabilityProvider=_idsAvailabilityProvider - In the implementation block
@property (nonatomic,retain) id<CNLSApplicationWorkspace> applicationWorkspace;                                  //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,retain) id<CNCapabilities> capabilities;                                                    //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) id<CNUIDefaultUserActionFetcher> defaultUserActionFetcher;                          //@synthesize defaultUserActionFetcher=_defaultUserActionFetcher - In the implementation block
@property (nonatomic,retain) CNContactChangesNotifier * contactChangesNotifier;                                  //@synthesize contactChangesNotifier=_contactChangesNotifier - In the implementation block
@property (nonatomic,retain) CNUICoreRecentsManager * recentsManager;                                            //@synthesize recentsManager=_recentsManager - In the implementation block
@property (nonatomic,retain) CNUIExternalComponentsFactory * componentsFactory;                                  //@synthesize componentsFactory=_componentsFactory - In the implementation block
@property (assign,nonatomic) UCollatorRef sortCollator;                                                          //@synthesize sortCollator=_sortCollator - In the implementation block
@property (nonatomic,retain) CNCollation * collation;                                                            //@synthesize collation=_collation - In the implementation block
@property (nonatomic,retain) CNHealthStoreManager * healthStoreManager;                                          //@synthesize healthStoreManager=_healthStoreManager - In the implementation block
@property (nonatomic,retain) CNGeminiManager * geminiManager;                                                    //@synthesize geminiManager=_geminiManager - In the implementation block
@property (nonatomic,readonly) CNContactsEnvironment * cnEnvironment;                                            //@synthesize cnEnvironment=_cnEnvironment - In the implementation block
@property (nonatomic,retain) id<CNUIApplicationLaunchCheckin> launchCheckinRegistrar;                            //@synthesize launchCheckinRegistrar=_launchCheckinRegistrar - In the implementation block
+(id)currentEnvironment;
+(id)makeCurrentEnvironment;
-(id)init;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id<CNCapabilities>)capabilities;
-(void)setCapabilities:(id<CNCapabilities>)arg1 ;
-(CNGeminiManager *)geminiManager;
-(void)setGeminiManager:(CNGeminiManager *)arg1 ;
-(id)initWithContactsEnvironment:(id)arg1 ;
-(CNUIExternalComponentsFactory *)componentsFactory;
-(CNUICoreRecentsManager *)recentsManager;
-(CNHealthStoreManager *)healthStoreManager;
-(void)setHealthStoreManager:(CNHealthStoreManager *)arg1 ;
-(CNCollation *)collation;
-(void)setCollation:(CNCollation *)arg1 ;
-(CNUIIDSAvailabilityProvider *)idsAvailabilityProvider;
-(id)nts_lazyContactStore;
-(CNContactStore *)inProcessContactStore;
-(id)nts_lazyInProcessContactStore;
-(CNUISchedulerProvider *)defaultSchedulerProvider;
-(id)nts_lazyDefaultSchedulerProvider;
-(id<CNUIPlaceholderProviderFactory>)placeholderProviderFactory;
-(id)nts_lazyPlaceholderProviderFactory;
-(id<CNUIPRLikenessResolver>)cachingLikenessResolver;
-(id)nts_lazyCachingLikenessResolver;
-(id)nts_makeCachingLikenessResolver;
-(id<CNUILikenessRendering>)cachingLikenessRenderer;
-(id)nts_lazyCachingLikenessRenderer;
-(id<CNUILikenessRendering>)cachingMonogramRenderer;
-(id)nts_lazyCachingMonogramRenderer;
-(CNUIMeContactMonitor *)meMonitor;
-(id<CNUIUserActionDiscoveringEnvironment>)actionDiscoveringEnvironment;
-(id)nts_lazyActionDiscoveringEnvironment;
-(id)nts_makeActionDiscoveringEnvironment;
-(id)nts_lazyIDSAvailabilityProvider;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(id)nts_lazyApplicationWorkspace;
-(id)nts_lazyCapabilities;
-(id<CNUIDefaultUserActionFetcher>)defaultUserActionFetcher;
-(id)nts_lazyDefaultUserActionFetcher;
-(CNContactChangesNotifier *)contactChangesNotifier;
-(id)nts_lazyContactChangesNotifier;
-(id)nts_makeContactChangesNotifier;
-(id)nts_lazyRecentsManager;
-(id)nts_makeRecentsManager;
-(id)nts_lazyComponentsFactory;
-(CNUIUserActivityManager *)inProcessActivityManager;
-(id)nts_lazyInProcessActivityManager;
-(CNFavorites *)inProcessFavorites;
-(id)nts_lazyInProcessFavorites;
-(id)nts_lazyCollation;
-(UCollatorRef)sortCollator;
-(UCollatorRef)nts_lazySortCollator;
-(id)nts_lazyHealthStoreManager;
-(id)nts_lazyGeminiManager;
-(id<CNUIApplicationLaunchCheckin>)launchCheckinRegistrar;
-(void)setLaunchCheckinRegistrar:(id<CNUIApplicationLaunchCheckin>)arg1 ;
-(void)setDefaultSchedulerProvider:(CNUISchedulerProvider *)arg1 ;
-(void)setInProcessContactStore:(CNContactStore *)arg1 ;
-(void)setInProcessFavorites:(CNFavorites *)arg1 ;
-(void)setInProcessActivityManager:(CNUIUserActivityManager *)arg1 ;
-(void)setPlaceholderProviderFactory:(id<CNUIPlaceholderProviderFactory>)arg1 ;
-(void)setMeMonitor:(CNUIMeContactMonitor *)arg1 ;
-(void)setCachingLikenessResolver:(id<CNUIPRLikenessResolver>)arg1 ;
-(void)setCachingLikenessRenderer:(id<CNUILikenessRendering>)arg1 ;
-(void)setCachingMonogramRenderer:(id<CNUILikenessRendering>)arg1 ;
-(void)setActionDiscoveringEnvironment:(id<CNUIUserActionDiscoveringEnvironment>)arg1 ;
-(void)setIdsAvailabilityProvider:(CNUIIDSAvailabilityProvider *)arg1 ;
-(void)setApplicationWorkspace:(id<CNLSApplicationWorkspace>)arg1 ;
-(void)setDefaultUserActionFetcher:(id<CNUIDefaultUserActionFetcher>)arg1 ;
-(void)setContactChangesNotifier:(CNContactChangesNotifier *)arg1 ;
-(void)setRecentsManager:(CNUICoreRecentsManager *)arg1 ;
-(void)setComponentsFactory:(CNUIExternalComponentsFactory *)arg1 ;
-(void)setSortCollator:(UCollatorRef)arg1 ;
-(CNContactsEnvironment *)cnEnvironment;
@end

