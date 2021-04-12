/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSCache;

@interface PLSidecarFinder : NSObject {

	os_unfair_lock_s _lock;
	NSCache* _cachedSidecarURLsByDirectory;

}

@property (nonatomic,retain) NSCache * cachedSidecarURLsByDirectory;              //@synthesize cachedSidecarURLsByDirectory=_cachedSidecarURLsByDirectory - In the implementation block
+(id)_findPotentialSidecarURLsInDirectory:(id)arg1 context:(id)arg2 ;
+(BOOL)_isValidExtensionForSidecar:(id)arg1 context:(id)arg2 ;
-(id)init;
-(void)reset;
-(id)collectSidecarURLsForAssetFilename:(id)arg1 inDirectory:(id)arg2 context:(id)arg3 removeWhenDone:(BOOL)arg4 ;
-(NSCache *)cachedSidecarURLsByDirectory;
-(void)setCachedSidecarURLsByDirectory:(NSCache *)arg1 ;
@end

