/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
*/


@class NPSDomainAccessor, NPSManager, NSArray;

@interface IPWatchLocaleController : NSObject {

	NPSDomainAccessor* _gizmoGlobalDomain;
	NPSManager* _syncManager;
	NSArray* _systemLanguages;

}

@property (nonatomic,retain) NPSDomainAccessor * gizmoGlobalDomain;              //@synthesize gizmoGlobalDomain=_gizmoGlobalDomain - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                           //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,retain) NSArray * systemLanguages;                          //@synthesize systemLanguages=_systemLanguages - In the implementation block
-(id)init;
-(void)setLocale:(id)arg1 ;
-(id)preferredLanguages;
-(void)setSystemLanguages:(NSArray *)arg1 ;
-(NSArray *)systemLanguages;
-(void)setLanguages:(id)arg1 ;
-(id)deviceLanguage;
-(void)updateLocale:(id)arg1 ;
-(NPSManager *)syncManager;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(id)initWithSystemLanguages:(id)arg1 ;
-(NPSDomainAccessor *)gizmoGlobalDomain;
-(void)resetTimeFormat;
-(void)postLocaleChangedNotification;
-(void)mirrorLanguagesAndLocaleToWatch;
-(void)initializeMirrorSettings;
-(void)setGizmoGlobalDomain:(NPSDomainAccessor *)arg1 ;
@end

