/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PXUIKeyCommandNamespace.h>

@class NSString, NSArray, PUTabbedLibrarySettings, PXPreloadScheduler;

@interface PUTabbedLibraryViewModel : NSObject <PXUIKeyCommandNamespace> {

	NSArray* _tabInfos;
	PUTabbedLibrarySettings* _settings;
	PXPreloadScheduler* _preloadScheduler;

}

@property (nonatomic,readonly) NSString * namespaceIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PUTabbedLibrarySettings * settings;                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) PXPreloadScheduler * preloadScheduler;              //@synthesize preloadScheduler=_preloadScheduler - In the implementation block
@property (nonatomic,retain) NSArray * tabInfos;                                 //@synthesize tabInfos=_tabInfos - In the implementation block
+(id)supportedNavigationDestinationTypes;
+(id)viewModelWithDefaultParameters;
-(NSArray *)tabInfos;
-(BOOL)_ppt_shouldShowNilTab;
-(BOOL)tabbedLibraryViewController:(id)arg1 shouldShowTabForContentMode:(int)arg2 ;
-(void)setTabInfos:(NSArray *)arg1 ;
-(id)tabInfoForContentMode:(int)arg1 ;
-(id)initWithSettings:(id)arg1 preloadScheduler:(id)arg2 ;
-(PXPreloadScheduler *)preloadScheduler;
-(BOOL)_shouldShowSharedTabForTabbedLibraryViewController:(id)arg1 ;
-(BOOL)_shouldShowCuratedLibraryTabForTabbedLibraryViewController:(id)arg1 ;
-(void)uiKeyCommandsWithDelegate:(id)arg1 addedIntoArray:(id)arg2 ;
-(void)setSettings:(PUTabbedLibrarySettings *)arg1 ;
-(BOOL)_ppt_shouldShowBlankTab;
-(PUTabbedLibrarySettings *)settings;
-(BOOL)_shouldShowAllPhotosTabForTabbedLibraryViewController:(id)arg1 ;
-(BOOL)_shouldShowMemoriesTabForTabbedLibraryViewController:(id)arg1 ;
-(BOOL)_shouldShowForYouTabForTabbedLibraryViewController:(id)arg1 ;
-(void)setPreloadScheduler:(PXPreloadScheduler *)arg1 ;
-(BOOL)_shouldShowSearchTabForTabbedLibraryViewController:(id)arg1 ;
-(void)performKeyCommand:(id)arg1 withRootParticipant:(id)arg2 ;
-(NSString *)namespaceIdentifier;
-(BOOL)_shouldShowPhotosTabForTabbedLibraryViewController:(id)arg1 ;
-(id)tabbedLibraryViewController:(id)arg1 tabBarItemForContentMode:(int)arg2 ;
@end

