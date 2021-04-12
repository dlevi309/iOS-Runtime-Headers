/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableDictionary, PLPhotoLibraryPathManager, PLLazyObject;

@interface PLEmailAddressManager : NSObject {

	NSMutableDictionary* _keysForEmails;
	NSMutableDictionary* _emailsForKey;
	int _maxKey;
	PLPhotoLibraryPathManager* _pathManager;
	PLLazyObject* _lazyAssetsdClient;

}
-(id)assetsdClient;
-(id)emailAddressForKey:(id)arg1 ;
-(id)keyForEmailAddress:(id)arg1 ;
-(id)initWithPathManager:(id)arg1 lazyAssetsdClient:(id)arg2 ;
-(id)plistPath;
-(void)_loadDictionariesIfNeeded;
@end

