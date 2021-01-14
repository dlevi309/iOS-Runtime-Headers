/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)plistPath;
-(id)initWithPathManager:(id)arg1 lazyAssetsdClient:(id)arg2 ;
-(void)_loadDictionariesIfNeeded;
-(id)emailAddressForKey:(id)arg1 ;
-(id)keyForEmailAddress:(id)arg1 ;
@end

