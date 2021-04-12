/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@protocol PXFavoritesSettingsDelegate;
@class NSArray;

@interface PXFavoritesSettings : PXSettings {

	BOOL _didEncounterUnknownSettingsClassName;
	id<PXFavoritesSettingsDelegate> _delegate;
	NSArray* _favoritesSettingsClassNames;

}

@property (assign,nonatomic,__weak) id<PXFavoritesSettingsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * favoritesSettingsClassNames;                          //@synthesize favoritesSettingsClassNames=_favoritesSettingsClassNames - In the implementation block
+(id)sharedInstance;
+(id)transientProperties;
+(id)favoritesSubmoduleWithFavoritesSettingsKeyPath:(id)arg1 delegate:(id)arg2 ;
-(id)parentSettings;
-(id<PXFavoritesSettingsDelegate>)delegate;
-(id)valueForKey:(id)arg1 ;
-(void)setDelegate:(id<PXFavoritesSettingsDelegate>)arg1 ;
-(void)setIsFavorite:(BOOL)arg1 settings:(id)arg2 ;
-(BOOL)isFavoriteSettings:(id)arg1 ;
-(void)_requestFavoriteSettingsAtIndex:(long long)arg1 fromViewController:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)_keyForFavoriteExistingAtIndex:(long long)arg1 ;
-(id)_keyForFavoriteNameAtIndex:(long long)arg1 ;
-(NSArray *)favoritesSettingsClassNames;
-(void)setFavoritesSettingsClassNames:(NSArray *)arg1 ;
-(void)_performBlockAfterLoadingAccessorySettings:(/*^block*/id)arg1 ;
-(void)_notifyChange;
@end

