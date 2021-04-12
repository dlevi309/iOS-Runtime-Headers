/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSMutableDictionary;

@interface PLLibraryBookmarkManager : NSObject {

	NSMutableDictionary* _securityScopedBookmarksByPathKey;
	NSMutableDictionary* _activeURLsByPathKey;

}
+(id)sharedBookmarkManager;
+(id)resolveSecurityScopedBookmark:(id)arg1 isStale:(BOOL*)arg2 error:(id*)arg3 ;
+(id)_securityScopedURLWithURL:(id)arg1 sandboxExtension:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)URLFromClientLibraryURL:(id)arg1 sandboxExtension:(id)arg2 error:(id*)arg3 ;
-(id)sandboxExtensionsByPathForClient:(id)arg1 pathManager:(id)arg2 ;
-(void)removeSSBForLibraryURL:(id)arg1 ;
-(void)removeInvalidSSBsExcept:(id)arg1 ;
-(id)allKnownLibraryURLs;
-(void)_importLithiumAccessRights;
-(void)_storeBookmarkForURL:(id)arg1 ;
-(void)_loadFromDefaults;
-(void)_saveToDefaults;
-(void)_refreshSecurityScopedBookmarks;
-(id)_activeURLForClientLibraryURL:(id)arg1 ;
-(id)_newSecurityScopedBookmarkDataForURL:(id)arg1 ;
-(id)_newSandboxExtensionDataForClient:(SCD_Struct_PL11)arg1 path:(id)arg2 writable:(BOOL)arg3 ;
-(id)_resolveSecurityScopedBookmarkData:(id)arg1 error:(id*)arg2 ;
-(void)_storeSecurityScopedURL:(id)arg1 pathKey:(id)arg2 ;
-(void)_removeActiveURLForPathKey:(id)arg1 ;
-(void)_removeSSBForPathKey:(id)arg1 ;
@end

