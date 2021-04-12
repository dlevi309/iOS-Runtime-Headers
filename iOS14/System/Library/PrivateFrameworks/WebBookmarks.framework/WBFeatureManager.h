/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@interface WBFeatureManager : NSObject {

	BOOL _offlineReadingListAvailable;
	BOOL _favoritesFolderSelectionShouldSync;
	long long _accessLevel;

}

@property (nonatomic,readonly) long long accessLevel;                                                              //@synthesize accessLevel=_accessLevel - In the implementation block
@property (getter=isOfflineReadingListAvailable,nonatomic,readonly) BOOL offlineReadingListAvailable;              //@synthesize offlineReadingListAvailable=_offlineReadingListAvailable - In the implementation block
@property (nonatomic,readonly) BOOL favoritesFolderSelectionShouldSync;                                            //@synthesize favoritesFolderSelectionShouldSync=_favoritesFolderSelectionShouldSync - In the implementation block
+(id)sharedFeatureManager;
-(id)init;
-(long long)accessLevel;
-(BOOL)favoritesFolderSelectionShouldSync;
-(BOOL)isOfflineReadingListAvailable;
-(void)_updateToAccessLevel:(long long)arg1 ;
@end

