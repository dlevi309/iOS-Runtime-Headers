/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/BLTSectionInfoListProviderDelegate.h>

@protocol BLTSectionInfoListDelegate, BLTSectionInfoListOverrideProvider, BLTSectionInfoListBBProvider;
@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSString;

@interface BLTSectionInfoList : NSObject <BLTSectionInfoListProviderDelegate> {

	NSMutableDictionary* _sectionInfoListItemsBySectionID;
	NSMutableSet* _sectionInfoSectionIDs;
	opaque_pthread_mutex_t _lock;
	NSMutableArray* _loadingCompletionHandlers;
	BOOL _loading;
	BOOL _loaded;
	id<BLTSectionInfoListDelegate> _delegate;
	id<BLTSectionInfoListOverrideProvider> _overrideProvider;
	id<BLTSectionInfoListBBProvider> _sectionInfoProvider;

}

@property (assign,nonatomic,__weak) id<BLTSectionInfoListDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<BLTSectionInfoListOverrideProvider> overrideProvider;              //@synthesize overrideProvider=_overrideProvider - In the implementation block
@property (nonatomic,retain) id<BLTSectionInfoListBBProvider> sectionInfoProvider;                 //@synthesize sectionInfoProvider=_sectionInfoProvider - In the implementation block
@property (getter=hasLoaded,nonatomic,readonly) BOOL loaded;                                       //@synthesize loaded=_loaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionIDs;
-(id)init;
-(id<BLTSectionInfoListDelegate>)delegate;
-(id)universalSectionIDForSectionID:(id)arg1 ;
-(void)setDelegate:(id<BLTSectionInfoListDelegate>)arg1 ;
-(id)effectiveSectionInfoForSectionID:(id)arg1 ;
-(id)overrides;
-(void)dealloc;
-(BOOL)hasLoaded;
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSectionInfoForSectionIDs:(id)arg1 transaction:(id)arg2 ;
-(void)removedSectionWithSectionID:(id)arg1 transaction:(id)arg2 ;
-(void)updateOverrides:(id)arg1 forSectionID:(id)arg2 transaction:(id)arg3 ;
-(id)originalSettings;
-(id)overriddenSettings;
-(void)_updateListItem:(id)arg1 overrides:(id)arg2 sectionID:(id)arg3 ;
-(void)_migrateFromExternalDeviceSwitchToOverrides:(id)arg1 sectionID:(id)arg2 ;
-(id)_sectionInfoFromSectionID:(id)arg1 displayName:(id*)arg2 ;
-(id)_lock_sectionInfoFromListItem:(id)arg1 sectionID:(id)arg2 displayName:(id*)arg3 ;
-(id)_overriddenSectionInfoForSectionID:(id)arg1 originalSectionInfo:(id*)arg2 displayName:(id*)arg3 ;
-(id)overriddenSectionInfoForSectionID:(id)arg1 ;
-(void)setSectionInfoProvider:(id<BLTSectionInfoListBBProvider>)arg1 ;
-(void)setOverrideProvider:(id<BLTSectionInfoListOverrideProvider>)arg1 ;
-(id)bbSectionInfoForSectionID:(id)arg1 ;
-(id)settingsDescriptionForSectionIDs:(id)arg1 ;
-(id)sectionOverridesOnly;
-(id)sectionOverrideOnlyForSectionID:(id)arg1 ;
-(BOOL)hasCustomSettingsSetForSectionID:(id)arg1 ;
-(void)reloadBBSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mapSection:(id)arg1 map:(id)arg2 ;
-(id<BLTSectionInfoListOverrideProvider>)overrideProvider;
-(id<BLTSectionInfoListBBProvider>)sectionInfoProvider;
@end

