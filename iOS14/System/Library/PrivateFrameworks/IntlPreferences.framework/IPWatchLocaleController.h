/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocale:(id)arg1 ;
-(id)init;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(id)preferredLanguages;
-(NSArray *)systemLanguages;
-(void)setSystemLanguages:(NSArray *)arg1 ;
-(void)updateLocale:(id)arg1 ;
-(NPSManager *)syncManager;
-(void)setLanguages:(id)arg1 ;
-(id)deviceLanguage;
-(id)initWithSystemLanguages:(id)arg1 ;
-(NPSDomainAccessor *)gizmoGlobalDomain;
-(void)resetTimeFormat;
-(void)postLocaleChangedNotification;
-(void)mirrorLanguagesAndLocaleToWatch;
-(void)initializeMirrorSettings;
-(void)setGizmoGlobalDomain:(NPSDomainAccessor *)arg1 ;
@end

