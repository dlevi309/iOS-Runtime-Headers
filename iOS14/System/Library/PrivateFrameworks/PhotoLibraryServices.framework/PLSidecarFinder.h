/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSCache;

@interface PLSidecarFinder : NSObject {

	os_unfair_lock_s _lock;
	NSCache* _cachedSidecarURLsByDirectory;

}

@property (nonatomic,retain) NSCache * cachedSidecarURLsByDirectory;              //@synthesize cachedSidecarURLsByDirectory=_cachedSidecarURLsByDirectory - In the implementation block
+(BOOL)_isValidExtensionForSidecar:(id)arg1 context:(id)arg2 ;
+(id)_findPotentialSidecarURLsInDirectory:(id)arg1 context:(id)arg2 ;
-(NSCache *)cachedSidecarURLsByDirectory;
-(void)setCachedSidecarURLsByDirectory:(NSCache *)arg1 ;
-(id)init;
-(void)reset;
-(id)collectSidecarURLsForAssetFilename:(id)arg1 inDirectory:(id)arg2 context:(id)arg3 removeWhenDone:(BOOL)arg4 ;
@end

