/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithDatabaseContext:(id)arg1 ;
-(void)cameraPreviewWellImageDidChange;
-(void)buildQuickActionItems;
-(id)_buildMostRecentPhotoQuickAction;
-(id)_buildOneYearAgoQuickAction;
-(id)_buildFavoritesQuickAction;
-(id)_buildSearchQuickAction;
-(id)_shortcutSystemImageNamed:(id)arg1 ;
-(BOOL)_userHasPhotos;
-(BOOL)_userHasPhotosFromLastYear;
-(NSData *)_cachedMostRecentPhotoData;
-(void)_setCachedMostRecentPhotoData:(id)arg1 ;
-(BOOL)_mostRecentPhotoIsInvalid;
-(void)_setMostRecentPhotoIsInvalid:(BOOL)arg1 ;
-(SBSApplicationShortcutService *)_appShortcutService;
-(void)_setAppShortcutService:(id)arg1 ;
-(Class)_SBSApplicationShortcutServiceClass;
-(void)_setSBSApplicationShortcutServiceClass:(Class)arg1 ;
-(Class)_SBSApplicationShortcutItemClass;
-(void)_setSBSApplicationShortcutItemClass:(Class)arg1 ;
-(Class)_SBSApplicationShortcutCustomImageIconClass;
-(void)_setSBSApplicationShortcutCustomImageIconClass:(Class)arg1 ;
@end

