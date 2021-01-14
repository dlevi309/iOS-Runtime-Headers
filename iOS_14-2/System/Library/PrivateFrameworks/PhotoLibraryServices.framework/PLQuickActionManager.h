/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSOperationQueue, PLDatabaseContext, NSData, SBSApplicationShortcutService;

@interface PLQuickActionManager : NSObject {

	id _cameraWellObserver;
	NSOperationQueue* _operationQueue;
	PLDatabaseContext* _databaseContext;
	BOOL __mostRecentPhotoIsInvalid;
	NSData* __cachedMostRecentPhotoData;
	SBSApplicationShortcutService* __appShortcutService;
	Class __SBSApplicationShortcutServiceClass;
	Class __SBSApplicationShortcutItemClass;
	Class __SBSApplicationShortcutCustomImageIconClass;

}

@property (setter=_setCachedMostRecentPhotoData:,nonatomic,retain) NSData * _cachedMostRecentPhotoData;                                             //@synthesize _cachedMostRecentPhotoData=__cachedMostRecentPhotoData - In the implementation block
@property (assign,setter=_setMostRecentPhotoIsInvalid:,nonatomic) BOOL _mostRecentPhotoIsInvalid;                                                   //@synthesize _mostRecentPhotoIsInvalid=__mostRecentPhotoIsInvalid - In the implementation block
@property (setter=_setAppShortcutService:,nonatomic,retain) SBSApplicationShortcutService * _appShortcutService;                                    //@synthesize _appShortcutService=__appShortcutService - In the implementation block
@property (setter=_setSBSApplicationShortcutServiceClass:,nonatomic,retain) Class _SBSApplicationShortcutServiceClass;                              //@synthesize _SBSApplicationShortcutServiceClass=__SBSApplicationShortcutServiceClass - In the implementation block
@property (setter=_setSBSApplicationShortcutItemClass:,nonatomic,retain) Class _SBSApplicationShortcutItemClass;                                    //@synthesize _SBSApplicationShortcutItemClass=__SBSApplicationShortcutItemClass - In the implementation block
@property (setter=_setSBSApplicationShortcutCustomImageIconClass:,nonatomic,retain) Class _SBSApplicationShortcutCustomImageIconClass;              //@synthesize _SBSApplicationShortcutCustomImageIconClass=__SBSApplicationShortcutCustomImageIconClass - In the implementation block
-(void)_setSBSApplicationShortcutCustomImageIconClass:(Class)arg1 ;
-(BOOL)_userHasPhotosFromLastYear;
-(Class)_SBSApplicationShortcutServiceClass;
-(BOOL)_mostRecentPhotoIsInvalid;
-(void)_setAppShortcutService:(id)arg1 ;
-(id)_buildOneYearAgoQuickAction;
-(NSData *)_cachedMostRecentPhotoData;
-(BOOL)_userHasPhotos;
-(id)_shortcutSystemImageNamed:(id)arg1 ;
-(SBSApplicationShortcutService *)_appShortcutService;
-(id)_buildSearchQuickAction;
-(void)_setCachedMostRecentPhotoData:(id)arg1 ;
-(void)_setSBSApplicationShortcutServiceClass:(Class)arg1 ;
-(void)buildQuickActionItems;
-(Class)_SBSApplicationShortcutCustomImageIconClass;
-(id)_buildMostRecentPhotoQuickAction;
-(id)_buildFavoritesQuickAction;
-(void)_setSBSApplicationShortcutItemClass:(Class)arg1 ;
-(id)initWithDatabaseContext:(id)arg1 ;
-(void)cameraPreviewWellImageDidChange;
-(void)_setMostRecentPhotoIsInvalid:(BOOL)arg1 ;
-(void)dealloc;
-(Class)_SBSApplicationShortcutItemClass;
@end

