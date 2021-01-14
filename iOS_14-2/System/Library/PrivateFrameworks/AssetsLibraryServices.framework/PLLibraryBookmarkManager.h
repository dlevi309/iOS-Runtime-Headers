/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSMutableDictionary;

@interface PLLibraryBookmarkManager : NSObject {

	NSMutableDictionary* _activeURLsByPathKey;

}
+(id)_securityScopedURLWithURL:(id)arg1 sandboxExtension:(id)arg2 ;
+(id)resolveSecurityScopedBookmark:(id)arg1 isStale:(BOOL*)arg2 error:(id*)arg3 ;
+(id)sharedBookmarkManager;
-(id)_newSandboxExtensionDataForClient:(SCD_Struct_PL11)arg1 path:(id)arg2 writable:(BOOL)arg3 ;
-(void)_removeActiveURLForPathKey:(id)arg1 ;
-(id)init;
-(void)removeSSBForLibraryURL:(id)arg1 ;
-(id)_activeURLForClientLibraryURL:(id)arg1 ;
-(id)allKnownLibraryURLs;
-(void)_storeSecurityScopedURL:(id)arg1 pathKey:(id)arg2 ;
-(void)_removeSSBForPathKey:(id)arg1 ;
-(void)_saveToDefaults;
-(id)sandboxExtensionsByPathForClient:(id)arg1 pathManager:(id)arg2 ;
-(void)removeInvalidSSBsExcept:(id)arg1 ;
-(id)URLFromClientLibraryURL:(id)arg1 sandboxExtension:(id)arg2 error:(id*)arg3 ;
-(void)_loadFromDefaults;
-(void)_importLithiumAccessRights;
-(void)dealloc;
@end

